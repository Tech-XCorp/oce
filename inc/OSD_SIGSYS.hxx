// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_SIGSYS_HeaderFile
#define _OSD_SIGSYS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_DefineException_HeaderFile
#include <Standard_DefineException.hxx>
#endif
#ifndef _Standard_SStream_HeaderFile
#include <Standard_SStream.hxx>
#endif

#ifndef _OSD_Signal_HeaderFile
#include <OSD_Signal.hxx>
#endif
#ifndef _Handle_OSD_SIGSYS_HeaderFile
#include <Handle_OSD_SIGSYS.hxx>
#endif

#if !defined No_Exception && !defined No_OSD_SIGSYS
#define OSD_SIGSYS_Raise_if(CONDITION,MESSAGE) \
  if (CONDITION) OSD_SIGSYS::Raise(MESSAGE);
#else
#define OSD_SIGSYS_Raise_if(CONDITION,MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(OSD_SIGSYS,OSD_Signal)

#endif
