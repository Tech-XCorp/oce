// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_Jacobi_HeaderFile
#define _math_Jacobi_HeaderFile

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
#ifndef _math_Matrix_HeaderFile
#include <math_Matrix.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class StdFail_NotDone;
class math_Matrix;
class math_Vector;



//! This class implements the Jacobi method to find the eigenvalues and <br>
//! the eigenvectors of a real symmetric square matrix. <br>
//! A sort of eigenvalues is done. <br>
class math_Jacobi  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Given a Real n X n matrix A, this constructor computes all its <br>
//! eigenvalues and eigenvectors using the Jacobi method. <br>
//! The exception NotSquare is raised if the matrix is not square. <br>
//! No verification that the matrix A is really symmetric is done. <br>
  Standard_EXPORT   math_Jacobi(const math_Matrix& A);
  //! Returns true if the computations are successful, otherwise returns false. <br>
        Standard_Boolean IsDone() const;
  //! Returns the eigenvalues vector. <br>
//! Exception NotDone is raised if calculation is not done successfully. <br>
       const math_Vector& Values() const;
  //! returns the eigenvalue number Num. <br>
//! Eigenvalues are in the range (1..n). <br>
//! Exception NotDone is raised if calculation is not done successfully. <br>
        Standard_Real Value(const Standard_Integer Num) const;
  //! returns the eigenvectors matrix. <br>
//! Exception NotDone is raised if calculation is not done successfully. <br>
       const math_Matrix& Vectors() const;
  //! Returns the eigenvector V of number Num. <br>
//! Eigenvectors are in the range (1..n). <br>
//! Exception NotDone is raised if calculation is not done successfully. <br>
        void Vector(const Standard_Integer Num,math_Vector& V) const;
  //! Prints information on the current state of the object. <br>
//!          Is used to redefine the operator <<. <br>
  Standard_EXPORT     void Dump(Standard_OStream& o) const;





protected:





private:



Standard_Boolean Done;
math_Matrix AA;
Standard_Integer NbRotations;
math_Vector EigenValues;
math_Matrix EigenVectors;


};


#include <math_Jacobi.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
