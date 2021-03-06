// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_BissecNewton_HeaderFile
#define _math_BissecNewton_HeaderFile

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
#ifndef _math_Status_HeaderFile
#include <math_Status.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class StdFail_NotDone;
class math_FunctionWithDerivative;



//! This class implements a combination of Newton-Raphson and bissection <br>
//!  methods to find the root of the function between two bounds. <br>
//! Knowledge of the derivative is required. <br>
class math_BissecNewton  {
public:

  DEFINE_STANDARD_ALLOC

  
//! A combination of Newton-Raphson and bissection methods is done to find <br>
//! the root of the function F between the bounds Bound1 and Bound2. <br>
//! on the function F. <br>
//! The tolerance required on the root is given by TolX. <br>
//! The solution is found when : <br>
//!    abs(Xi - Xi-1) <= TolX and F(Xi) * F(Xi-1) <= 0 <br>
//! The maximum number of iterations allowed is given by NbIterations. <br>
  Standard_EXPORT   math_BissecNewton(math_FunctionWithDerivative& F,const Standard_Real Bound1,const Standard_Real Bound2,const Standard_Real TolX,const Standard_Integer NbIterations = 100);
  
//! This method is called at the end of each iteration to check if the <br>
//! solution has been found. <br>
//! It can be redefined in a sub-class to implement a specific test to <br>
//! stop the iterations. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsSolutionReached(math_FunctionWithDerivative& F) ;
  //! Tests is the root has been successfully found. <br>
        Standard_Boolean IsDone() const;
  //! returns the value of the root. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
        Standard_Real Root() const;
  //! returns the value of the derivative at the root. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
        Standard_Real Derivative() const;
  //! returns the value of the function at the root. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
        Standard_Real Value() const;
  //! Prints on the stream o information on the current state <br>
//!          of the object. <br>
//!          Is used to redifine the operator <<. <br>
  Standard_EXPORT     void Dump(Standard_OStream& o) const;





protected:

  
  Standard_EXPORT     void Perform(math_FunctionWithDerivative& F,const Standard_Real Bound1,const Standard_Real Bound2,const Standard_Integer NbIterations) ;


math_Status TheStatus;
Standard_Real XTol;
Standard_Real x;
Standard_Real dx;
Standard_Real f;
Standard_Real df;


private:



Standard_Boolean Done;


};


#include <math_BissecNewton.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
