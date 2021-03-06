// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BlendFunc_HeaderFile
#define _BlendFunc_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BlendFunc_SectionShape_HeaderFile
#include <BlendFunc_SectionShape.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Convert_ParameterisationType_HeaderFile
#include <Convert_ParameterisationType.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;
class Adaptor3d_HSurface;
class gp_Pnt2d;
class gp_Vec;
class BlendFunc_ConstRad;
class BlendFunc_ConstRadInv;
class BlendFunc_Ruled;
class BlendFunc_RuledInv;
class BlendFunc_EvolRad;
class BlendFunc_EvolRadInv;
class BlendFunc_CSConstRad;
class BlendFunc_CSCircular;
class BlendFunc_Corde;
class BlendFunc_Chamfer;
class BlendFunc_ChamfInv;
class BlendFunc_ChAsym;
class BlendFunc_ChAsymInv;
class BlendFunc_Tensor;


//! This package provides a set of generic functions, that can <br>
//!          instantiated to compute blendings between two surfaces <br>
//!          (Constant radius, Evolutive radius, Ruled surface). <br>
class BlendFunc  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  void GetShape(const BlendFunc_SectionShape SectShape,const Standard_Real MaxAng,Standard_Integer& NbPoles,Standard_Integer& NbKnots,Standard_Integer& Degree,Convert_ParameterisationType& TypeConv) ;
  
  Standard_EXPORT   static  void Knots(const BlendFunc_SectionShape SectShape,TColStd_Array1OfReal& TKnots) ;
  
  Standard_EXPORT   static  void Mults(const BlendFunc_SectionShape SectShape,TColStd_Array1OfInteger& TMults) ;
  
  Standard_EXPORT   static  void GetMinimalWeights(const BlendFunc_SectionShape SectShape,const Convert_ParameterisationType TConv,const Standard_Real AngleMin,const Standard_Real AngleMax,TColStd_Array1OfReal& Weigths) ;
  //! Used  to obtain the next level of continuity. <br>
  Standard_EXPORT   static  GeomAbs_Shape NextShape(const GeomAbs_Shape S) ;
  
  Standard_EXPORT   static  Standard_Boolean ComputeNormal(const Handle(Adaptor3d_HSurface)& Surf,const gp_Pnt2d& p2d,gp_Vec& Normal) ;
  
  Standard_EXPORT   static  Standard_Boolean ComputeDNormal(const Handle(Adaptor3d_HSurface)& Surf,const gp_Pnt2d& p2d,gp_Vec& Normal,gp_Vec& DNu,gp_Vec& DNv) ;





protected:





private:




friend class BlendFunc_ConstRad;
friend class BlendFunc_ConstRadInv;
friend class BlendFunc_Ruled;
friend class BlendFunc_RuledInv;
friend class BlendFunc_EvolRad;
friend class BlendFunc_EvolRadInv;
friend class BlendFunc_CSConstRad;
friend class BlendFunc_CSCircular;
friend class BlendFunc_Corde;
friend class BlendFunc_Chamfer;
friend class BlendFunc_ChamfInv;
friend class BlendFunc_ChAsym;
friend class BlendFunc_ChAsymInv;
friend class BlendFunc_Tensor;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
