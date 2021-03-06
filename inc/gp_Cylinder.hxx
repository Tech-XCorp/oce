// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_Cylinder_HeaderFile
#define _gp_Cylinder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Ax3_HeaderFile
#include <gp_Ax3.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Ax1_HeaderFile
#include <gp_Ax1.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_ConstructionError;
class gp_Ax3;
class gp_Ax1;
class gp_Pnt;
class gp_Ax2;
class gp_Trsf;
class gp_Vec;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_Cylinder);


//!  Describes an infinite cylindrical surface. <br>
//! A cylinder is defined by its radius and positioned in space <br>
//! with a coordinate system (a gp_Ax3 object), the "main <br>
//! Axis" of which is the axis of the cylinder. This coordinate <br>
//! system is the "local coordinate system" of the cylinder. <br>
//! Note: when a gp_Cylinder cylinder is converted into a <br>
//! Geom_CylindricalSurface cylinder, some implicit <br>
//! properties of its local coordinate system are used explicitly: <br>
//! -   its origin, "X Direction", "Y Direction" and "main <br>
//! Direction" are used directly to define the parametric <br>
//! directions on the cylinder and the origin of the parameters, <br>
//! -   its implicit orientation (right-handed or left-handed) <br>
//!   gives an orientation (direct or indirect) to the <br>
//!   Geom_CylindricalSurface cylinder. <br>
//! See Also <br>
//! gce_MakeCylinder which provides functions for more <br>
//! complex cylinder constructions <br>
//! Geom_CylindricalSurface which provides additional <br>
//! functions for constructing cylinders and works, in <br>
//! particular, with the parametric equations of cylinders gp_Ax3 <br>
class gp_Cylinder  {

public:

  DEFINE_STANDARD_ALLOC

  //! Creates a indefinite cylinder. <br>
      gp_Cylinder();
  //! Creates a cylinder of radius Radius, whose axis is the "main <br>
//!  Axis" of A3. A3 is the local coordinate system of the cylinder.   Raises ConstructionErrord if R < 0.0 <br>
      gp_Cylinder(const gp_Ax3& A3,const Standard_Real Radius);
  //! Changes the symmetry axis of the cylinder. Raises ConstructionError if the direction of A1 is parallel to the "XDirection" <br>
//!  of the coordinate system of the cylinder. <br>
        void SetAxis(const gp_Ax1& A1) ;
  //! Changes the location of the surface. <br>
        void SetLocation(const gp_Pnt& Loc) ;
  //! Change the local coordinate system of the surface. <br>
        void SetPosition(const gp_Ax3& A3) ;
  //! Modifies the radius of this cylinder. <br>
//! Exceptions <br>
//! Standard_ConstructionError if R is negative. <br>
        void SetRadius(const Standard_Real R) ;
  //! Reverses the   U   parametrization of   the cylinder <br>
//!          reversing the YAxis. <br>
        void UReverse() ;
  //! Reverses the   V   parametrization of   the  plane <br>
//!          reversing the Axis. <br>
        void VReverse() ;
  //! Returns true if the local coordinate system of this cylinder is right-handed. <br>
        Standard_Boolean Direct() const;
  //! Returns the symmetry axis of the cylinder. <br>
       const gp_Ax1& Axis() const;
  
//!  Computes the coefficients of the implicit equation of the quadric <br>
//!  in the absolute cartesian coordinate system : <br>
//!  A1.X**2 + A2.Y**2 + A3.Z**2 + 2.(B1.X.Y + B2.X.Z + B3.Y.Z) + <br>
//!  2.(C1.X + C2.Y + C3.Z) + D = 0.0 <br>
  Standard_EXPORT     void Coefficients(Standard_Real& A1,Standard_Real& A2,Standard_Real& A3,Standard_Real& B1,Standard_Real& B2,Standard_Real& B3,Standard_Real& C1,Standard_Real& C2,Standard_Real& C3,Standard_Real& D) const;
  //!  Returns the "Location" point of the cylinder. <br>
       const gp_Pnt& Location() const;
  
//!  Returns the local coordinate system of the cylinder. <br>
       const gp_Ax3& Position() const;
  //! Returns the radius of the cylinder. <br>
        Standard_Real Radius() const;
  //! Returns the axis X of the cylinder. <br>
        gp_Ax1 XAxis() const;
  //! Returns the axis Y of the cylinder. <br>
        gp_Ax1 YAxis() const;
  
  Standard_EXPORT     void Mirror(const gp_Pnt& P) ;
  
//!  Performs the symmetrical transformation of a cylinder <br>
//!  with respect to the point P which is the center of the <br>
//!  symmetry. <br>
  Standard_EXPORT     gp_Cylinder Mirrored(const gp_Pnt& P) const;
  
  Standard_EXPORT     void Mirror(const gp_Ax1& A1) ;
  
//!  Performs the symmetrical transformation of a cylinder with <br>
//!  respect to an axis placement which is the axis of the <br>
//!  symmetry. <br>
  Standard_EXPORT     gp_Cylinder Mirrored(const gp_Ax1& A1) const;
  
  Standard_EXPORT     void Mirror(const gp_Ax2& A2) ;
  
//!  Performs the symmetrical transformation of a cylinder with respect <br>
//!  to a plane. The axis placement A2 locates the plane of the <br>
//!  of the symmetry : (Location, XDirection, YDirection). <br>
  Standard_EXPORT     gp_Cylinder Mirrored(const gp_Ax2& A2) const;
  
        void Rotate(const gp_Ax1& A1,const Standard_Real Ang) ;
  
//!  Rotates a cylinder. A1 is the axis of the rotation. <br>
//!  Ang is the angular value of the rotation in radians. <br>
        gp_Cylinder Rotated(const gp_Ax1& A1,const Standard_Real Ang) const;
  
        void Scale(const gp_Pnt& P,const Standard_Real S) ;
  
//!  Scales a cylinder. S is the scaling value. <br>
//!  The absolute value of S is used to scale the cylinder <br>
        gp_Cylinder Scaled(const gp_Pnt& P,const Standard_Real S) const;
  
        void Transform(const gp_Trsf& T) ;
  
//!  Transforms a cylinder with the transformation T from class Trsf. <br>
        gp_Cylinder Transformed(const gp_Trsf& T) const;
  
        void Translate(const gp_Vec& V) ;
  
//!  Translates a cylinder in the direction of the vector V. <br>
//!  The magnitude of the translation is the vector's magnitude. <br>
        gp_Cylinder Translated(const gp_Vec& V) const;
  
        void Translate(const gp_Pnt& P1,const gp_Pnt& P2) ;
  
//!  Translates a cylinder from the point P1 to the point P2. <br>
        gp_Cylinder Translated(const gp_Pnt& P1,const gp_Pnt& P2) const;
    const gp_Ax3& _CSFDB_Getgp_Cylinderpos() const { return pos; }
    Standard_Real _CSFDB_Getgp_Cylinderradius() const { return radius; }
    void _CSFDB_Setgp_Cylinderradius(const Standard_Real p) { radius = p; }



protected:




private: 


gp_Ax3 pos;
Standard_Real radius;


};


#include <gp_Cylinder.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
