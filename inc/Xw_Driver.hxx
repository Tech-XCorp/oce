// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Xw_Driver_HeaderFile
#define _Xw_Driver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Xw_Driver_HeaderFile
#include <Handle_Xw_Driver.hxx>
#endif

#ifndef _Xw_TypeOfVisual_HeaderFile
#include <Xw_TypeOfVisual.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Aspect_TypeOfPrimitive_HeaderFile
#include <Aspect_TypeOfPrimitive.hxx>
#endif
#ifndef _Handle_Xw_HListOfMFTFonts_HeaderFile
#include <Handle_Xw_HListOfMFTFonts.hxx>
#endif
#ifndef _Handle_TShort_HArray1OfShortReal_HeaderFile
#include <Handle_TShort_HArray1OfShortReal.hxx>
#endif
#ifndef _Handle_Xw_TextManager_HeaderFile
#include <Handle_Xw_TextManager.hxx>
#endif
#ifndef _Aspect_WindowDriver_HeaderFile
#include <Aspect_WindowDriver.hxx>
#endif
#ifndef _Handle_Xw_Window_HeaderFile
#include <Handle_Xw_Window.hxx>
#endif
#ifndef _Aspect_TypeOfResize_HeaderFile
#include <Aspect_TypeOfResize.hxx>
#endif
#ifndef _Handle_Aspect_ColorMap_HeaderFile
#include <Handle_Aspect_ColorMap.hxx>
#endif
#ifndef _Handle_Aspect_TypeMap_HeaderFile
#include <Handle_Aspect_TypeMap.hxx>
#endif
#ifndef _Handle_Aspect_WidthMap_HeaderFile
#include <Handle_Aspect_WidthMap.hxx>
#endif
#ifndef _Handle_Aspect_FontMap_HeaderFile
#include <Handle_Aspect_FontMap.hxx>
#endif
#ifndef _Handle_Aspect_MarkMap_HeaderFile
#include <Handle_Aspect_MarkMap.hxx>
#endif
#ifndef _Aspect_TypeOfDrawMode_HeaderFile
#include <Aspect_TypeOfDrawMode.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Quantity_Factor_HeaderFile
#include <Quantity_Factor.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Aspect_TypeOfText_HeaderFile
#include <Aspect_TypeOfText.hxx>
#endif
#ifndef _Quantity_Ratio_HeaderFile
#include <Quantity_Ratio.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
class TColStd_HArray1OfInteger;
class Xw_HListOfMFTFonts;
class TShort_HArray1OfShortReal;
class Xw_TextManager;
class Aspect_DriverDefinitionError;
class Aspect_DriverError;
class Xw_Window;
class Aspect_ColorMap;
class Aspect_TypeMap;
class Aspect_WidthMap;
class Aspect_FontMap;
class Aspect_MarkMap;
class Standard_Transient;
class TShort_Array1OfShortReal;
class TCollection_ExtendedString;


//! This class defines a X window Driver. <br>
//!  Warning: A Driver is associated with one window and lets you <br>
//! draw any primitives with any attributes you choose <br>
//! inside that window. All Values and coordinates are <br>
//! defined in Device Window Unit (DWU) space, which is <br>
//! the Normalized Floating Pixel space limited by the size <br>
//! of the window. The Maps Driver must be initialized <br>
//! with Aspect_Driver::SetXXXXMap(aMap) where XXXX <br>
//! may correspond to Color, Mark, Type, Width and Font. <br>
class Xw_Driver : public Aspect_WindowDriver {

public:

  //! Creates the X Window Driver associated to the X window <br>
//!	    <aWindow>. <br>
//!	    Default values : <br>
//!		- DrawMode : TODM_REPLACE <br>
  Standard_EXPORT   Xw_Driver(const Handle(Xw_Window)& aWindow);
  //! Begin graphics and drawn directly to the Window or Pixmap if <br>
  Standard_EXPORT   virtual  void BeginDraw(const Standard_Boolean DoubleBuffer = Standard_True,const Standard_Integer aRetainBuffer = 0) ;
  //! Called by the method Graphic2d_View::Update, this <br>
//!	    method manages the buffer flushing and Wait after up to date <br>
//!	    display when Synchronize is TRUE. <br>
  Standard_EXPORT   virtual  void EndDraw(const Standard_Boolean Synchronize = Standard_False) ;
  //! Resizes the WorkSpace depending of the Window size <br>
//!	    MUST be call after a Resize or Move WindowDriver Event <br>
//!	    Returns the TypeOfResize gravity mode . <br>
//!  Trigger: Raises if the type of resizing is unknown. <br>
  Standard_EXPORT   virtual  Aspect_TypeOfResize ResizeSpace() ;
  //! Defines the draw mode for all primitives drawing. <br>
//!	TypeOfDrawMode is <br>
//!		TODM_REPLACE <br>
//!		TODM_ERASE <br>
//!		TODM_XOR <br>
//!		TODM_XORLIGHT <br>
  Standard_EXPORT   virtual  void SetDrawMode(const Aspect_TypeOfDrawMode aMode) ;
  //! Sets the line attributes. <br>
//!  Category: Methods to set the line attributes <br>
//!  Trigger: Raises if one of the index is out of range. <br>
  Standard_EXPORT   virtual  void SetLineAttrib(const Standard_Integer ColorIndex,const Standard_Integer TypeIndex,const Standard_Integer WidthIndex) ;
  //! Sets the text attributes. <br>
//!  Category: Methods to set the text attributes <br>
//!  Trigger: Raises if one of the index is out of range. <br>
  Standard_EXPORT   virtual  void SetTextAttrib(const Standard_Integer ColorIndex,const Standard_Integer FontIndex) ;
  //! Sets the Extended text attributes. <br>
//!  Category: Methods to set the text attributes <br>
//!  Trigger: Raises if one of the index is out of range. <br>
  Standard_EXPORT   virtual  void SetTextAttrib(const Standard_Integer ColorIndex,const Standard_Integer FontIndex,const Quantity_PlaneAngle aSlant,const Quantity_Factor aHScale,const Quantity_Factor aWScale,const Standard_Boolean isUnderlined = Standard_False) ;
  //! Sets the polygon attributes. <br>
//!  Warning: <br>
//! <ColorIndex> is the background poly color index. <br>
//! <TileIndex> is the background poly fill rule index. <br>
//! If <DrawEdgeFlag> is TRUE the edge of the poly is drawn with the <br>
//!  current line attributes. <br>
//!  Category: Methods to set the poly attributes <br>
//!  Trigger: Raises if one of the index is out of range. <br>
  Standard_EXPORT   virtual  void SetPolyAttrib(const Standard_Integer ColorIndex,const Standard_Integer TileIndex,const Standard_Boolean DrawEdgeFlag = Standard_False) ;
  //! Sets the marker attributes. <br>
//!  Warning: <br>
//! <ColorIndex> is the edge or fill marker color index. <br>
//! <EdgeWidthIndex> is the edge marker thickness index. <br>
//! If <FillMarker> is TRUE the marker is filled on the first set <br>
//!  of consecutive drawn points. <br>
//!  Category: Methods to set the marker attributes <br>
//!  Trigger: Raises if one of the index is out of range. <br>
  Standard_EXPORT   virtual  void SetMarkerAttrib(const Standard_Integer ColorIndex,const Standard_Integer EdgeWidthIndex,const Standard_Boolean FillMarker = Standard_False) ;
  //! Returns Standard_True if the associated driver <br>
//!	    have stored the image and Standard_False if not. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsKnownImage(const Handle(Standard_Transient)& anImage) ;
  //! Returns Standard_True and the Image Size in PIXEL <br>
//!          if the image file exist and can be computed by the driver, <br>
//!          NOTE that only XWD image file type are recognized today. <br>
  Standard_EXPORT   virtual  Standard_Boolean SizeOfImageFile(const Standard_CString anImageFile,Standard_Integer& aWidth,Standard_Integer& aHeight) const;
  //! Clears the image in <me>. <br>
  Standard_EXPORT   virtual  void ClearImage(const Handle(Standard_Transient)& anImageId) ;
  //! Clears the image associated with the image file . <br>
  Standard_EXPORT   virtual  void ClearImageFile(const Standard_CString anImageFile) ;
  //! Draws the image in <me>. <br>
//!	    <aX>, <aY> is the center of the image. <br>
//!	    Image center must be defined in DWU space. <br>
  Standard_EXPORT   virtual  void DrawImage(const Handle(Standard_Transient)& anImageId,const Standard_ShortReal aX,const Standard_ShortReal aY) ;
  //! Draws the image file in <me>. <br>
//!	    <aX>, <aY> is the center of the image. <br>
//!	    <aScale> the scale factor which is apply on this image <br>
//!	    Image center must be defined in DWU space. <br>
//!	    anImageFile must be defined with the full pathname <br>
//!          of the form /..../xxxxx.ext or $DIR/xxxxxx.ext <br>
//!          with DIR defined in a setenv variable. <br>
//!               xxxxxx the image file name. <br>
//!               ext the image file extension. <br>
  Standard_EXPORT   virtual  void DrawImageFile(const Standard_CString anImageFile,const Standard_ShortReal aX,const Standard_ShortReal aY,const Quantity_Factor aScale = 1.0) ;
  //! Stores a complete image and draws it in <me>. <br>
//!	    Image size must be defined in DWU space> <br>
//!  Category: Methods to manage the images <br>
//!  Trigger: Raises if the creation of the image failed. <br>
  Standard_EXPORT   virtual  void FillAndDrawImage(const Handle(Standard_Transient)& anImageId,const Standard_ShortReal aX,const Standard_ShortReal aY,const Standard_Integer Width,const Standard_Integer Height,const Standard_Address anArrayOfPixels) ;
  //! Stores a line of an image and draws it in <me>. <br>
//!  Warning: 0<= anIndexOfLine < aHeight <br>
//!	    anIndexOfLine = 0 must be the first call <br>
//!  Category: Methods to manage the images <br>
//!  Trigger: Raises if the creation of the image failed. <br>
  Standard_EXPORT   virtual  void FillAndDrawImage(const Handle(Standard_Transient)& anImageId,const Standard_ShortReal aX,const Standard_ShortReal aY,const Standard_Integer anIndexOfLine,const Standard_Integer Width,const Standard_Integer Height,const Standard_Address anArrayOfPixels) ;
  //! Draws the polyline depending of SetLineAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!  Trigger: Raises if Polyline has too many points (> 1024) <br>
//!	    Raises if the length of <ListX> is not equal to <br>
//!	    the length of <ListY>. <br>
  Standard_EXPORT   virtual  void DrawPolyline(const TShort_Array1OfShortReal& ListX,const TShort_Array1OfShortReal& ListY) ;
  //! Draws the polygone depending of SetPolyAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!  Trigger:  Raises if Polygone has too many points (> 1024) <br>
//!	    Raises if the length of <ListX> is not equal to <br>
//!	    the length of <ListY>. <br>
  Standard_EXPORT   virtual  void DrawPolygon(const TShort_Array1OfShortReal& ListX,const TShort_Array1OfShortReal& ListY) ;
  //! Draws the segment depending of SetLineAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
  Standard_EXPORT   virtual  void DrawSegment(const Standard_ShortReal X1,const Standard_ShortReal Y1,const Standard_ShortReal X2,const Standard_ShortReal Y2) ;
  //! Draws the text depending of SetTextAttrib() attributes. <br>
//!  Category: Methods to draw primitives <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!  Trigger: Raises if Text has too many chars (> 1024) <br>
  Standard_EXPORT   virtual  void DrawText(const TCollection_ExtendedString& Text,const Standard_ShortReal Xpos,const Standard_ShortReal Ypos,const Standard_ShortReal anAngle = 0.0,const Aspect_TypeOfText aType = Aspect_TOT_SOLID) ;
  //! Draws the text depending of SetTextAttrib() attributes. <br>
//!  Category: Methods to draw primitives <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!	    Angle must be defined in RADIAN. <br>
//!  Trigger: Raises if Text has too many chars (> 1024) <br>
  Standard_EXPORT   virtual  void DrawText(const Standard_CString Text,const Standard_ShortReal Xpos,const Standard_ShortReal Ypos,const Standard_ShortReal anAngle = 0.0,const Aspect_TypeOfText aType = Aspect_TOT_SOLID) ;
  //! Draws an framed text depending of the <br>
//! SetTextAttrib() and SetPolyAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!          <aMarge> defines the ratio of the space between the <br>
//!          polygon borders and the bounding box of the text and <br>
//!	    depending of the height of the text. <br>
  Standard_EXPORT   virtual  void DrawPolyText(const TCollection_ExtendedString& aText,const Standard_ShortReal Xpos,const Standard_ShortReal Ypos,const Quantity_Ratio aMarge = 0.1,const Standard_ShortReal anAngle = 0.0,const Aspect_TypeOfText aType = Aspect_TOT_SOLID) ;
  //! Draws an framed text depending of the <br>
//! SetTextAttrib() and SetPolyAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!          <aMarge> defines the ratio of the space between the <br>
//!          polygon borders and the bounding box of the text and <br>
//!	    depending of the height of the text. <br>
  Standard_EXPORT   virtual  void DrawPolyText(const Standard_CString aText,const Standard_ShortReal Xpos,const Standard_ShortReal Ypos,const Quantity_Ratio aMarge = 0.1,const Standard_ShortReal anAngle = 0.0,const Aspect_TypeOfText aType = Aspect_TOT_SOLID) ;
  //! Draws a 1 PIXEL point depending of the SetMarkerAttrib() <br>
  Standard_EXPORT   virtual  void DrawPoint(const Standard_ShortReal X,const Standard_ShortReal Y) ;
  //! Draws the previously defined marker depending of <br>
//! the SetMarkerAttrib() attributes. <br>
//!  Warning: Coordinates and sizes must be defined in DWU space. <br>
//!	    Angle must be defined in RADIAN. <br>
//!	    A one pixel marker is drawn when aMarker index is undefined. <br>
  Standard_EXPORT   virtual  void DrawMarker(const Standard_Integer aMarker,const Standard_ShortReal Xpos,const Standard_ShortReal Ypos,const Standard_ShortReal Width,const Standard_ShortReal Height,const Standard_ShortReal Angle = 0.0) ;
  //! Draws an Ellipsoid arc of center <X,Y> and Radius <br>
//!  <aXradius,aYradius> of relative angle <anOpenAngle> from <br>
//!  the base angle <aStartAngle> <br>
//!  Warning: Returns FALSE if the hardware can't drawing this <br>
//!  primitive properly,application must to simulate it. <br>
  Standard_EXPORT   virtual  Standard_Boolean DrawArc(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aXradius,const Standard_ShortReal aYradius,const Standard_ShortReal aStartAngle = 0.0,const Standard_ShortReal anOpenAngle = 6.283185) ;
  //! Draws an filled Ellipsoid arc of center <X,Y> and Radius <br>
//!  <anXradius,anYradius> of relative angle <anOpenAngle> from <br>
//!  the base angle <aStartAngle> and  depending of the SetPolyAttrib() <br>
//! attributes. <br>
//!  Warning: Returns FALSE if the hardware can't drawing this <br>
//!  primitive properly,application must to simulate it. <br>
  Standard_EXPORT   virtual  Standard_Boolean DrawPolyArc(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal anXradius,const Standard_ShortReal anYradius,const Standard_ShortReal aStartAngle = 0.0,const Standard_ShortReal anOpenAngle = 6.283185) ;
  //! Begin a polyline primitive of <aNumber> of points . <br>
//!  Warning: Points must be added by the DrawPoint() method. <br>
  Standard_EXPORT   virtual  void BeginPolyline(const Standard_Integer aNumber) ;
  //! Begin a polygon primitive of <aNumber> of points . <br>
//!  Warning: Points must be added by the DrawPoint() method. <br>
  Standard_EXPORT   virtual  void BeginPolygon(const Standard_Integer aNumber) ;
  //! Begin a set of segments . <br>
//!  Warning: Segments must be added by DrawSegment() method. <br>
  Standard_EXPORT   virtual  void BeginSegments() ;
  //! Begin a set of circles or ellips . <br>
//!  Warning: Arcs must be added by the DrawArc() method. <br>
  Standard_EXPORT   virtual  void BeginArcs() ;
  //! Begin a set of polygon circles or ellips . <br>
//!  Warning: Arcs must be added by the DrawPolyArc() method. <br>
  Standard_EXPORT   virtual  void BeginPolyArcs() ;
  //! Begin a set of markers . <br>
//!  Warning: Markers must be added by the DrawMarker() method. <br>
  Standard_EXPORT   virtual  void BeginMarkers() ;
  //! Begin a set of points . <br>
//!  Warning: Points must be added by the DrawPoint() method. <br>
  Standard_EXPORT   virtual  void BeginPoints() ;
  //! Close the last Begining primitive <br>
  Standard_EXPORT   virtual  void ClosePrimitive() ;
  //! Allocate the retain buffer <aRetainBuffer> , <br>
//! Defines the DWU coordinates of the pivot point for all primitives <br>
//!  contains inside. <br>
//! Defines the buffer color, line width and font index : <br>
//!  the default color is the highlight color of the colormap. <br>
//!  the default font is the default system font of the fontmap. <br>
//! The other attributes are fixed : <br>
//!  line type is Solid, <br>
//!  line width is 1 Pixel, <br>
//!  polygon fill mode is Solid, <br>
//!  Warning: The number of allocated buffers is limited,it's <br>
//!  recommended to close unused buffers some time! <br>
//!          The TypeOfDrawMode REPLACE is enabled only if the <br>
//!          background drawing has been drawn with the DoubleBuffer <br>
//!          flag set to ENABLE at the last BeginDraw time. <br>
//!          The TypeOfDrawMode XOR is enabled in any case. <br>
//!          The other TypeOfDrawMode are not authorized. <br>
//! Returns TRUE if the buffer is allocated and enabled for drawing. <br>
  Standard_EXPORT   virtual  Standard_Boolean OpenBuffer(const Standard_Integer aRetainBuffer,const Standard_ShortReal aPivotX = 0.0,const Standard_ShortReal aPivotY = 0.0,const Standard_Integer aWidthIndex = 0,const Standard_Integer aColorIndex = 0,const Standard_Integer aFontIndex = 0,const Aspect_TypeOfDrawMode aDrawMode = Aspect_TODM_REPLACE) ;
  //! Clear & Deallocate the retain buffer <aRetainBuffer>. <br>
  Standard_EXPORT   virtual  void CloseBuffer(const Standard_Integer aRetainBuffer) const;
  //! Erase & Clear ALL primitives retains in the buffer <aRetainBuffer>. <br>
  Standard_EXPORT   virtual  void ClearBuffer(const Standard_Integer aRetainBuffer) const;
  //! Draw ALL primitives retains in the buffer <aRetainBuffer>. <br>
//!  Warning: Note that the aspect of a retain buffer drawing is mono-colored <br>
//! with the current buffer attributes and <br>
//! depending of the DoubleBuffer state flag at the BeginDraw() buffer time, <br>
//! when DB is TRUE,an XOR method is use for drawing and erasing buffers in the <br>
//! same way.In this case,some color side effect can occurs depending of the <br>
//! traversal primitive colors and the supported hardware. <br>
//! when DB is FALSE and the background drawing has been generated with <br>
//! DB at TRUE,no color side effect occurs because the DB is used for restoring <br>
//! the drawing context at EraseBuffer() time,this is more powerfull for the <br>
//! drawing quality excepted for large buffers (flicking) . <br>
  Standard_EXPORT   virtual  void DrawBuffer(const Standard_Integer aRetainBuffer) const;
  //! Erase ALL primitives retains in the buffer <aRetainBuffer>. <br>
  Standard_EXPORT   virtual  void EraseBuffer(const Standard_Integer aRetainBuffer) const;
  //! Erase , Translate and reDraw ALL primitives retains in the buffer <br>
  Standard_EXPORT   virtual  void MoveBuffer(const Standard_Integer aRetainBuffer,const Standard_ShortReal aPivotX = 0.0,const Standard_ShortReal aPivotY = 0.0) const;
  //! Erase , Scale the buffer from the Pivot point and reDraw ALL primitives <br>
  Standard_EXPORT   virtual  void ScaleBuffer(const Standard_Integer aRetainBuffer,const Quantity_Factor aScaleX = 1.0,const Quantity_Factor aScaleY = 1.0) const;
  //! Erase , Rotate the buffer from the Pivot point and reDraw ALL primitives <br>
//!  retains in the buffer <aRetainBuffer>. <br>
//! The transformation is relative since the creation time of the buffer. <br>
//!  <anAngle> is the relative counter-clockwise rotation angle from the <br>
//!  Horizontal axis. <br>
  Standard_EXPORT   virtual  void RotateBuffer(const Standard_Integer aRetainBuffer,const Quantity_PlaneAngle anAngle = 0.0) const;
  //! Returns the Available WorkSpace in DWU coordinates <br>
//!  Category: Inquire methods <br>
  Standard_EXPORT   virtual  void WorkSpace(Quantity_Length& Width,Quantity_Length& Heigth) const;
  //! Returns the TEXT size in DWU space depending <br>
//!          of the required FontIndex if aFontIndex is >= 0 <br>
//!          or the current FontIndex if < 0 (default). <br>
  Standard_EXPORT   virtual  void TextSize(const TCollection_ExtendedString& aText,Standard_ShortReal& aWidth,Standard_ShortReal& aHeight,const Standard_Integer aFontIndex = -1) const;
  //! Returns the extended TEXT size and offsets <br>
//!	    in DWU space depending <br>
//!          of the required FontIndex if aFontIndex is >= 0 <br>
//!          or the current FontIndex if < 0 (default). <br>
//!          NOTE that the text offsets defines the relative position of the <br>
//!         of the text string origin from the lower left corner of the text <br>
//!         boundary limits. <br>
  Standard_EXPORT   virtual  void TextSize(const TCollection_ExtendedString& aText,Standard_ShortReal& aWidth,Standard_ShortReal& aHeight,Standard_ShortReal& anXoffset,Standard_ShortReal& anYoffset,const Standard_Integer aFontIndex = -1) const;
  //! Returns the ascii TEXT size and offsets <br>
//!	    in DWU space depending <br>
//!          of the required FontIndex if aFontIndex is >= 0 <br>
//!          or the current FontIndex if < 0 (default). <br>
//!          NOTE that the text offsets defines the relative position of the <br>
//!         of the text string origin from the lower left corner of the text <br>
//!         boundary limits. <br>
  Standard_EXPORT   virtual  void TextSize(const Standard_CString aText,Standard_ShortReal& aWidth,Standard_ShortReal& aHeight,Standard_ShortReal& anXoffset,Standard_ShortReal& anYoffset,const Standard_Integer aFontIndex = -1) const;
  //! Returns the font string,slant,size and <br>
//!  baseline height in DWU space depending <br>
//!          of the required FontIndex if aFontIndex is >= 0 <br>
//!          or the current FontIndex if < 0 (default). <br>
  Standard_EXPORT   virtual  Standard_CString FontSize(Quantity_PlaneAngle& aSlant,Standard_ShortReal& aSize,Standard_ShortReal& aBheight,const Standard_Integer aFontIndex = -1) const;
  //! Returns the DWU value depending of <br>
//!	    the PIXEL value. <br>
  Standard_EXPORT   virtual  Quantity_Length Convert(const Standard_Integer PV) const;
  //! Returns the PIXEL value depending of <br>
//!	    the DWU value. <br>
  Standard_EXPORT   virtual  Standard_Integer Convert(const Quantity_Length DV) const;
  //! Returns the DWU position depending of <br>
//!	    the PIXEL position . <br>
  Standard_EXPORT   virtual  void Convert(const Standard_Integer PX,const Standard_Integer PY,Quantity_Length& DX,Quantity_Length& DY) const;
  //! Returns the PIXEL position depending of <br>
//!	    the DWU position . <br>
  Standard_EXPORT   virtual  void Convert(const Quantity_Length DX,const Quantity_Length DY,Standard_Integer& PX,Standard_Integer& PY) const;
  //! Returns TRUE if the retain buffer <aRetainBuffer> is enabled <br>
  Standard_EXPORT   virtual  Standard_Boolean BufferIsOpen(const Standard_Integer aRetainBuffer) const;
  //! Returns TRUE if the retain buffer has not been opened or empty. <br>
//!         Returns FALSE if a lot of primitives have been stored inside <br>
//!         because a BeginDraw(..,<aRetainBuffer>) has been done previously. <br>
  Standard_EXPORT   virtual  Standard_Boolean BufferIsEmpty(const Standard_Integer aRetainBuffer) const;
  //! Returns TRUE if the retain buffer s actually displayed at screen. <br>
  Standard_EXPORT   virtual  Standard_Boolean BufferIsDrawn(const Standard_Integer aRetainBuffer) const;
  //! Returns the current buffer rotate angle from the X axis. <br>
  Standard_EXPORT   virtual  void AngleOfBuffer(const Standard_Integer aRetainBuffer,Quantity_PlaneAngle& anAngle) const;
  //! Returns the current buffer scale factors. <br>
  Standard_EXPORT   virtual  void ScaleOfBuffer(const Standard_Integer aRetainBuffer,Quantity_Factor& aScaleX,Quantity_Factor& aScaleY) const;
  //! Returns the current buffer position. <br>
  Standard_EXPORT   virtual  void PositionOfBuffer(const Standard_Integer aRetainBuffer,Standard_ShortReal& aPivotX,Standard_ShortReal& aPivotY) const;
  
//! Returns the min and max driver virtual color indexs. <br>
  Standard_EXPORT   virtual  void ColorBoundIndexs(Standard_Integer& aMinIndex,Standard_Integer& aMaxIndex) const;
  
//! Returns the local colormap hardware index from a virtual driver color <br>
//! index or returns -1 if the index is not defined. <br>
  Standard_EXPORT   virtual  Standard_Integer LocalColorIndex(const Standard_Integer anIndex) const;
  
//! Returns the min and max driver virtual font indexs. <br>
  Standard_EXPORT   virtual  void FontBoundIndexs(Standard_Integer& aMinIndex,Standard_Integer& aMaxIndex) const;
  
//! Returns the associated fontmap hardware index from a virtual driver font <br>
//! index or returns -1 if the index is not defined. <br>
  Standard_EXPORT   virtual  Standard_Integer LocalFontIndex(const Standard_Integer anIndex) const;
  
//! Returns the min and max driver virtual type indexs. <br>
  Standard_EXPORT   virtual  void TypeBoundIndexs(Standard_Integer& aMinIndex,Standard_Integer& aMaxIndex) const;
  
//! Returns the associated typemap hardware index from a virtual driver type <br>
//! index or returns -1 if the index is not defined. <br>
  Standard_EXPORT   virtual  Standard_Integer LocalTypeIndex(const Standard_Integer anIndex) const;
  
//! Returns the min and max driver virtual width indexs. <br>
  Standard_EXPORT   virtual  void WidthBoundIndexs(Standard_Integer& aMinIndex,Standard_Integer& aMaxIndex) const;
  
//! Returns the associated widthmap hardware index from a virtual driver width <br>
//! index or returns -1 if the index is not defined. <br>
  Standard_EXPORT   virtual  Standard_Integer LocalWidthIndex(const Standard_Integer anIndex) const;
  
//! Returns the min and max driver virtual marker indexs. <br>
  Standard_EXPORT   virtual  void MarkBoundIndexs(Standard_Integer& aMinIndex,Standard_Integer& aMaxIndex) const;
  
//! Returns the local markmap hardware index from a virtual driver marker        -- index or returns -1 if the index is not defined. <br>
  Standard_EXPORT   virtual  Standard_Integer LocalMarkIndex(const Standard_Integer anIndex) const;




  DEFINE_STANDARD_RTTI(Xw_Driver)

protected:

  //! Defines the color map. <br>
//!  Level: Public <br>
//!  Trigger: Raises if the definition failed. <br>
  Standard_EXPORT   virtual  void InitializeColorMap(const Handle(Aspect_ColorMap)& Colormap) ;
  //! Defines the line type map. <br>
//!  Level: Public <br>
//!  Trigger: Raises if the definition failed. <br>
  Standard_EXPORT   virtual  void InitializeTypeMap(const Handle(Aspect_TypeMap)& Typemap) ;
  //! Defines the width line map. <br>
//!  Level: Public <br>
//!  Trigger: Raises if the definition failed. <br>
  Standard_EXPORT   virtual  void InitializeWidthMap(const Handle(Aspect_WidthMap)& Widthmap) ;
  //! Defines the font map. <br>
//!  Level: Public <br>
//!  Trigger: Raises if the definition failed. <br>
  Standard_EXPORT   virtual  void InitializeFontMap(const Handle(Aspect_FontMap)& Fontmap) ;
  //! Defines the mark map. <br>
//!  Level: Public <br>
//!  Trigger: Raises if the definition failed. <br>
  Standard_EXPORT   virtual  void InitializeMarkMap(const Handle(Aspect_MarkMap)& Markmap) ;
  //! Print last error or raise depending of the error gravity. <br>
  Standard_EXPORT   static  void PrintError() ;

Xw_TypeOfVisual MyVisualClass;
Standard_Address MyExtendedDrawable;
Standard_Address MyExtendedColorMap;
Standard_Address MyExtendedTypeMap;
Standard_Address MyExtendedWidthMap;
Standard_Address MyExtendedFontMap;
Standard_Address MyExtendedMarkMap;
Standard_Address MyImage;
Standard_Integer MyLineColor;
Standard_Integer MyLineType;
Standard_Integer MyLineWidth;
Standard_Integer MyPolyColor;
Standard_Integer MyPolyType;
Standard_Integer MyPolyTile;
Standard_Integer MyTextColor;
Standard_Integer MyTextFont;
Standard_Integer MyTextType;
Standard_Real MyTextHScale;
Standard_Real MyTextWScale;
Standard_Real MyTextHSize;
Standard_Real MyTextWSize;
Standard_Real MyTextSlant;
Standard_Real MyTextMinHeight;
Standard_Boolean MyTextIsUnderlined;
Standard_Integer MyMarkerColor;
Standard_Boolean MyMarkerType;
Standard_Integer MyMarkerWidth;
Handle_TColStd_HArray1OfInteger MyColorIndexs;
Handle_TColStd_HArray1OfInteger MyTypeIndexs;
Handle_TColStd_HArray1OfInteger MyWidthIndexs;
Handle_TColStd_HArray1OfInteger MyFontIndexs;
Handle_TColStd_HArray1OfInteger MyMarkerIndexs;
Aspect_TypeOfPrimitive MyPrimitiveType;
Handle_Xw_HListOfMFTFonts MyMFTFonts;
Handle_TShort_HArray1OfShortReal MyMFTSizes;
Handle_Xw_TextManager MyTextManager;


private: 

  //! Draw an oriented rectangle <br>
  Standard_EXPORT     void DrawRectangle(const Standard_ShortReal Xpos,const Standard_ShortReal Ypos,const Standard_ShortReal Angle,const Standard_ShortReal Xoffset,const Standard_ShortReal Yoffset,const Standard_ShortReal Width,const Standard_ShortReal Height) const;
  //! Draw an oriented fill rectangle <br>
  Standard_EXPORT     void FillRectangle(const Standard_ShortReal Xpos,const Standard_ShortReal Ypos,const Standard_ShortReal Angle,const Standard_ShortReal Xoffset,const Standard_ShortReal Yoffset,const Standard_ShortReal Width,const Standard_ShortReal Height) const;



};





// other Inline functions and methods (like "C++: function call" methods)


#endif