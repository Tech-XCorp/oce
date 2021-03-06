// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_TypeOfModel_HeaderFile
#define _Visual3d_TypeOfModel_HeaderFile

//! Definition of the rendering (colour shading) model <br>
//!  TOM_NONE        No interpolation, constant shading <br>
//!              (FLAT Shading) <br>
//!  TOM_INTERP_COLOR    Linear interpolation of color <br>
//!              (Gouraud Shading) <br>
//!  TOM_FACET       Interpolation of color based on <br>
//!              dot products <br>
//!              (Quick Phong Shading) <br>
//!  TOM_VERTEX      Interpolation of color based on <br>
//!              normals <br>
//!              (Phong Shading) <br>
enum Visual3d_TypeOfModel {
Visual3d_TOM_NONE,
Visual3d_TOM_INTERP_COLOR,
Visual3d_TOM_FACET,
Visual3d_TOM_VERTEX
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif
