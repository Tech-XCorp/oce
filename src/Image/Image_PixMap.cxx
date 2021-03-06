// Created on: 2010-07-18
// Created by: Kirill GAVRILOV
// Copyright (c) 2010-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <Image_PixMap.hxx>

#ifdef _MSC_VER
  #include <malloc.h>
#elif defined(HAVE_MM_MALLOC_H)
  #include <mm_malloc.h>
#else
  #include <stdlib.h>
#endif

template<typename TypePtr>
inline TypePtr MemAllocAligned (const Standard_Size& theBytesCount,
                                const Standard_Size& theAlign = 16)
{
#if defined(_MSC_VER)
  return (TypePtr )_aligned_malloc (theBytesCount, theAlign);
#elif defined(HAVE_MM_MALLOC_H)
  return (TypePtr )     _mm_malloc (theBytesCount, theAlign);
#elif defined(HAVE_POSIX_MEMALIGN)
  void* aPtr;
  if (posix_memalign (&aPtr, theAlign, theBytesCount))
  {
    aPtr = NULL;
  }
  return (TypePtr )aPtr;
#else
  return (TypePtr ) malloc (theBytesCount);
#endif
}

inline void MemFreeAligned (void* thePtrAligned)
{
#if defined(_MSC_VER)
  _aligned_free (thePtrAligned);
#elif defined(HAVE_MM_MALLOC_H)
  _mm_free (thePtrAligned);
#else
  free (thePtrAligned);
#endif
}

IMPLEMENT_STANDARD_HANDLE (Image_PixMap, Standard_Transient)
IMPLEMENT_STANDARD_RTTIEXT(Image_PixMap, Standard_Transient)

// =======================================================================
// function : Image_PixMap
// purpose  :
// =======================================================================
Image_PixMap::Image_PixMap()
: myImgFormat (Image_PixMap::ImgGray),
  myIsOwnPointer (true)
{
  memset (&myData, 0, sizeof(myData));
  myData.mySizeBPP   = 1;
  myData.myTopToDown = Standard_Size(-1);
  setFormat (Image_PixMap::ImgGray);
}

// =======================================================================
// function : ~Image_PixMap
// purpose  :
// =======================================================================
Image_PixMap::~Image_PixMap()
{
  Clear();
}

Standard_Size Image_PixMap::SizePixelBytes (const Image_PixMap::ImgFormat thePixelFormat)
{
  switch (thePixelFormat)
  {
    case ImgGrayF:
      return sizeof(float);
    case ImgRGBAF:
    case ImgBGRAF:
      return sizeof(float) * 4;
    case ImgRGBF:
    case ImgBGRF:
      return sizeof(float) * 3;
    case ImgRGBA:
    case ImgBGRA:
      return 4;
    case ImgRGB32:
    case ImgBGR32:
      return 4;
    case ImgRGB:
    case ImgBGR:
      return 3;
    case ImgGray:
    default:
      return 1;
  }
}

// =======================================================================
// function : setFormat
// purpose  :
// =======================================================================
void Image_PixMap::setFormat (Image_PixMap::ImgFormat thePixelFormat)
{
  myImgFormat      = thePixelFormat;
  myData.mySizeBPP = SizePixelBytes (myImgFormat);
}

// =======================================================================
// function : setTopDown
// purpose  :
// =======================================================================
void Image_PixMap::setTopDown()
{
  myData.myTopRowPtr = ((myData.myTopToDown == 1 || myData.myDataPtr == NULL)
                     ? myData.myDataPtr : (myData.myDataPtr + myData.mySizeRowBytes * (myData.mySizeY - 1)));
}

// =======================================================================
// function : InitWrapper
// purpose  :
// =======================================================================
bool Image_PixMap::InitWrapper (Image_PixMap::ImgFormat thePixelFormat,
                                Standard_Byte*          theDataPtr,
                                const Standard_Size     theSizeX,
                                const Standard_Size     theSizeY,
                                const Standard_Size     theSizeRowBytes)
{
  Clear (thePixelFormat);
  if ((theSizeX == 0) || (theSizeY == 0) || (theDataPtr == NULL))
  {
    return false;
  }
  myData.mySizeX        = theSizeX;
  myData.mySizeY        = theSizeY;
  myData.mySizeRowBytes = (theSizeRowBytes != 0) ? theSizeRowBytes : (theSizeX * myData.mySizeBPP);
  myData.myDataPtr      = theDataPtr;
  myIsOwnPointer = false;
  setTopDown();
  return true;
}

// =======================================================================
// function : InitTrash
// purpose  :
// =======================================================================
bool Image_PixMap::InitTrash (Image_PixMap::ImgFormat thePixelFormat,
                              const Standard_Size     theSizeX,
                              const Standard_Size     theSizeY,
                              const Standard_Size     theSizeRowBytes)
{
  Clear (thePixelFormat);
  if ((theSizeX == 0) || (theSizeY == 0))
  {
    return false;
  }
  myData.mySizeX        = theSizeX;
  myData.mySizeY        = theSizeY;
  myData.mySizeRowBytes = myData.mySizeX * myData.mySizeBPP;
  if (theSizeRowBytes > myData.mySizeRowBytes)
  {
    // use argument only if it greater
    myData.mySizeRowBytes = theSizeRowBytes;
  }
  myData.myDataPtr = MemAllocAligned<Standard_Byte*> (SizeBytes());
  myIsOwnPointer   = true;
  setTopDown();
  return myData.myDataPtr != NULL;
}

// =======================================================================
// function : InitZero
// purpose  :
// =======================================================================
bool Image_PixMap::InitZero (Image_PixMap::ImgFormat thePixelFormat,
                             const Standard_Size     theSizeX,
                             const Standard_Size     theSizeY,
                             const Standard_Size     theSizeRowBytes,
                             const Standard_Byte     theValue)
{
  if (!InitTrash (thePixelFormat, theSizeX, theSizeY, theSizeRowBytes))
  {
    return false;
  }
  memset (myData.myDataPtr, (int )theValue, SizeBytes());
  return true;
}

// =======================================================================
// function : InitCopy
// purpose  :
// =======================================================================
bool Image_PixMap::InitCopy (const Image_PixMap& theCopy)
{
  if (&theCopy == this)
  {
    // self-copying disallowed
    return false;
  }
  if (InitTrash (theCopy.myImgFormat, theCopy.myData.mySizeX, theCopy.myData.mySizeY, theCopy.myData.mySizeRowBytes))
  {
    memcpy (myData.myDataPtr, theCopy.myData.myDataPtr, theCopy.SizeBytes());
    return true;
  }
  return false;
}

// =======================================================================
// function : Clear
// purpose  :
// =======================================================================
void Image_PixMap::Clear (Image_PixMap::ImgFormat thePixelFormat)
{
  if (myIsOwnPointer && (myData.myDataPtr != NULL))
  {
    MemFreeAligned (myData.myDataPtr);
  }
  myData.myDataPtr = myData.myTopRowPtr = NULL;
  myIsOwnPointer = true;
  myData.mySizeX = myData.mySizeY = myData.mySizeRowBytes = 0;
  setFormat (thePixelFormat);
}

// =======================================================================
// function : PixelColor
// purpose  :
// =======================================================================
Quantity_Color Image_PixMap::PixelColor (const Standard_Integer theX,
                                         const Standard_Integer theY,
                                         Quantity_Parameter&    theAlpha) const
{
  if (IsEmpty() ||
      theX < 0 || (Standard_Size )theX >= myData.mySizeX ||
      theY < 0 || (Standard_Size )theY >= myData.mySizeY)
  {
    theAlpha = 0.0; // transparent
    return Quantity_Color (0.0, 0.0, 0.0, Quantity_TOC_RGB);
  }

  switch (myImgFormat)
  {
    case ImgGrayF:
    {
      const Standard_ShortReal& aPixel = Value<Standard_ShortReal> (theY, theX);
      theAlpha = 1.0; // opaque
      return Quantity_Color (Quantity_Parameter (Standard_Real (aPixel)),
                             Quantity_Parameter (Standard_Real (aPixel)),
                             Quantity_Parameter (Standard_Real (aPixel)),
                             Quantity_TOC_RGB);
    }
    case ImgRGBAF:
    {
      const Image_ColorRGBAF& aPixel = Value<Image_ColorRGBAF> (theY, theX);
      theAlpha = aPixel.a();
      return Quantity_Color (Quantity_Parameter (aPixel.r()),
                             Quantity_Parameter (aPixel.g()),
                             Quantity_Parameter (aPixel.b()),
                             Quantity_TOC_RGB);
    }
    case ImgBGRAF:
    {    
      const Image_ColorBGRAF& aPixel = Value<Image_ColorBGRAF> (theY, theX);
      theAlpha = aPixel.a();
      return Quantity_Color (Quantity_Parameter (aPixel.r()),
                             Quantity_Parameter (aPixel.g()),
                             Quantity_Parameter (aPixel.b()),
                             Quantity_TOC_RGB);
    }
    case ImgRGBF:
    {
      const Image_ColorRGBF& aPixel = Value<Image_ColorRGBF> (theY, theX);
      theAlpha =  1.0; // opaque
      return Quantity_Color (Quantity_Parameter (aPixel.r()),
                             Quantity_Parameter (aPixel.g()),
                             Quantity_Parameter (aPixel.b()),
                             Quantity_TOC_RGB);
    }
    case ImgBGRF:
    {
      const Image_ColorBGRF& aPixel = Value<Image_ColorBGRF> (theY, theX);
      theAlpha =  1.0; // opaque
      return Quantity_Color (Quantity_Parameter (aPixel.r()),
                             Quantity_Parameter (aPixel.g()),
                             Quantity_Parameter (aPixel.b()),
                             Quantity_TOC_RGB);
    }
    case ImgRGBA:
    {
      const Image_ColorRGBA& aPixel = Value<Image_ColorRGBA> (theY, theX);
      theAlpha = Standard_Real (aPixel.a()) / 255.0;
      return Quantity_Color (Quantity_Parameter (Standard_Real (aPixel.r()) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel.g()) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel.b()) / 255.0),
                             Quantity_TOC_RGB);
    }
    case ImgBGRA:
    {
      const Image_ColorBGRA& aPixel = Value<Image_ColorBGRA> (theY, theX);
      theAlpha = Standard_Real (aPixel.a()) / 255.0;
      return Quantity_Color (Quantity_Parameter (Standard_Real (aPixel.r()) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel.g()) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel.b()) / 255.0),
                             Quantity_TOC_RGB);
    }
    case ImgRGB32:
    {
      const Image_ColorRGB32& aPixel = Value<Image_ColorRGB32> (theY, theX);
      theAlpha = 1.0; // opaque
      return Quantity_Color (Quantity_Parameter (Standard_Real (aPixel.r()) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel.g()) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel.b()) / 255.0),
                             Quantity_TOC_RGB);
    }
    case ImgBGR32:
    {
      const Image_ColorBGR32& aPixel = Value<Image_ColorBGR32> (theY, theX);
      theAlpha = 1.0; // opaque
      return Quantity_Color (Quantity_Parameter (Standard_Real (aPixel.r()) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel.g()) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel.b()) / 255.0),
                             Quantity_TOC_RGB);
    }
    case ImgRGB:
    {
      const Image_ColorRGB& aPixel = Value<Image_ColorRGB> (theY, theX);
      theAlpha = 1.0; // opaque
      return Quantity_Color (Quantity_Parameter (Standard_Real (aPixel.r()) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel.g()) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel.b()) / 255.0),
                             Quantity_TOC_RGB);
    }
    case ImgBGR:
    {
      const Image_ColorBGR& aPixel = Value<Image_ColorBGR> (theY, theX);
      theAlpha = 1.0; // opaque
      return Quantity_Color (Quantity_Parameter (Standard_Real (aPixel.r()) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel.g()) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel.b()) / 255.0),
                             Quantity_TOC_RGB);
    }
    case ImgGray:
    {
      const Standard_Byte& aPixel = Value<Standard_Byte> (theY, theX);
      theAlpha = 1.0; // opaque
      return Quantity_Color (Quantity_Parameter (Standard_Real (aPixel) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel) / 255.0),
                             Quantity_Parameter (Standard_Real (aPixel) / 255.0),
                             Quantity_TOC_RGB);
    }
    default:
    {
      // not supported image type
      theAlpha = 0.0; // transparent
      return Quantity_Color (0.0, 0.0, 0.0, Quantity_TOC_RGB);
    }
  }
}
