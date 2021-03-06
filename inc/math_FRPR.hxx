// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_FRPR_HeaderFile
#define _math_FRPR_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _math_Status_HeaderFile
#include <math_Status.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_DimensionError;
class StdFail_NotDone;
class math_MultipleVarFunctionWithGradient;
class math_Vector;



//! this class implements the Fletcher-Reeves-Polak_Ribiere minimization <br>
//! algorithm of a function of multiple variables. <br>
//! Knowledge of the function's gradient is required. <br>
class math_FRPR  {
public:

  DEFINE_STANDARD_ALLOC

  //!	  Computes FRPR minimization function F from input vector <br>
//! StartingPoint. The solution F = Fi is found when 2.0 * <br>
//! abs(Fi - Fi-1) <= Tolerance * (abs(Fi) + abs(Fi-1) + <br>
//! ZEPS). The maximum number of iterations allowed is given <br>
//! by NbIterations. <br>
  Standard_EXPORT   math_FRPR(math_MultipleVarFunctionWithGradient& F,const math_Vector& StartingPoint,const Standard_Real Tolerance,const Standard_Integer NbIterations = 200,const Standard_Real ZEPS = 1.0e-12);
  //! Purpose <br>
//! Initializes the computation of the minimum of F. <br>
//! Warning <br>
//! A call to the Perform method must be made after this <br>
//! initialization to compute the minimum of the function. <br>
  Standard_EXPORT   math_FRPR(math_MultipleVarFunctionWithGradient& F,const Standard_Real Tolerance,const Standard_Integer NbIterations = 200,const Standard_Real ZEPS = 1.0e-12);
  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~math_FRPR(){Delete();}
  //! Use this method after a call to the initialization constructor <br>
//! to compute the minimum of function F. <br>
//! Warning <br>
//! The initialization constructor must have been called before <br>
//! the Perform method is called <br>
  Standard_EXPORT     void Perform(math_MultipleVarFunctionWithGradient& F,const math_Vector& StartingPoint) ;
  
//! The solution F = Fi is found when : <br>
//!   2.0 * abs(Fi - Fi-1) <= Tolerance * (abs(Fi) + abs(Fi-1)) + ZEPS. <br>
//! The maximum number of iterations allowed is given by NbIterations. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsSolutionReached(math_MultipleVarFunctionWithGradient& F) ;
  //! Returns true if the computations are successful, otherwise returns false. <br>
        Standard_Boolean IsDone() const;
  //! returns the location vector of the minimum. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
       const math_Vector& Location() const;
  //! outputs the location vector of the minimum in Loc. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
//! Exception DimensionError is raised if the range of Loc is not <br>
//! equal to the range of the StartingPoint. <br>
        void Location(math_Vector& Loc) const;
  //! returns the value of the minimum. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
        Standard_Real Minimum() const;
  //! returns the gradient vector at the minimum. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
       const math_Vector& Gradient() const;
  //! outputs the gradient vector at the minimum in Grad. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
//! Exception DimensionError is raised if the range of Grad is not <br>
//! equal to the range of the StartingPoint. <br>
        void Gradient(math_Vector& Grad) const;
  //! returns the number of iterations really done during the <br>
//! computation of the minimum. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
        Standard_Integer NbIterations() const;
  //! Prints on the stream o information on the current state <br>
//!          of the object. <br>
//!          Is used to redefine the operator <<. <br>
  Standard_EXPORT     void Dump(Standard_OStream& o) const;





protected:



math_Vector TheLocation;
math_Vector TheGradient;
Standard_Real TheMinimum;
Standard_Real PreviousMinimum;
Standard_Real XTol;
Standard_Real EPSZ;


private:



Standard_Boolean Done;
Standard_Integer Iter;
Standard_Integer State;
math_Status TheStatus;
Standard_Integer Itermax;


};


#include <math_FRPR.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
