// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_Real_HeaderFile
#define _PDataStd_Real_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PDataStd_Real_HeaderFile
#include <Handle_PDataStd_Real.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _PDF_Attribute_HeaderFile
#include <PDF_Attribute.hxx>
#endif


class PDataStd_Real : public PDF_Attribute {

public:

  
  Standard_EXPORT   PDataStd_Real();
  
  Standard_EXPORT   PDataStd_Real(const Standard_Real Value,const Standard_Integer Dimension);
  
  Standard_EXPORT     Standard_Real Get() const;
  
  Standard_EXPORT     void Set(const Standard_Real V) ;
  
  Standard_EXPORT     void SetDimension(const Standard_Integer DIM) ;
  
  Standard_EXPORT     Standard_Integer GetDimension() const;

PDataStd_Real(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Standard_Real _CSFDB_GetPDataStd_RealmyValue() const { return myValue; }
    void _CSFDB_SetPDataStd_RealmyValue(const Standard_Real p) { myValue = p; }
    Standard_Integer _CSFDB_GetPDataStd_RealmyDimension() const { return myDimension; }
    void _CSFDB_SetPDataStd_RealmyDimension(const Standard_Integer p) { myDimension = p; }



  DEFINE_STANDARD_RTTI(PDataStd_Real)

protected:




private: 


Standard_Real myValue;
Standard_Integer myDimension;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
