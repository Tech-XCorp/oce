// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_PartNumber_HeaderFile
#define _IGESAppli_PartNumber_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESAppli_PartNumber_HeaderFile
#include <Handle_IGESAppli_PartNumber.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
class TCollection_HAsciiString;


//! defines PartNumber, Type <406> Form <9> <br>
//!          in package IGESAppli <br>
//!          Attaches a set of text strings that define the common <br>
//!          part numbers to an entity being used to represent a <br>
//!          physical component <br>
class IGESAppli_PartNumber : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESAppli_PartNumber();
  //! This method is used to set the fields of the class <br>
//!           PartNumber <br>
//!       - nbPropVal : number of property values, always = 4 <br>
//!       - aGenName  : Generic part number or name <br>
//!       - aMilName  : Military Standard (MIL-STD) part number <br>
//!       - aVendName : Vendor part number or name <br>
//!       - anIntName : Internal part number <br>
  Standard_EXPORT     void Init(const Standard_Integer nbPropVal,const Handle(TCollection_HAsciiString)& aGenName,const Handle(TCollection_HAsciiString)& aMilName,const Handle(TCollection_HAsciiString)& aVendName,const Handle(TCollection_HAsciiString)& anIntName) ;
  //! returns number of property values, always = 4 <br>
  Standard_EXPORT     Standard_Integer NbPropertyValues() const;
  //! returns Generic part number or name <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString GenericNumber() const;
  //! returns Military Standard (MIL-STD) part number <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString MilitaryNumber() const;
  //! returns Vendor part number or name <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString VendorNumber() const;
  //! returns Internal part number <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString InternalNumber() const;




  DEFINE_STANDARD_RTTI(IGESAppli_PartNumber)

protected:




private: 


Standard_Integer theNbPropertyValues;
Handle_TCollection_HAsciiString theGenericNumber;
Handle_TCollection_HAsciiString theMilitaryNumber;
Handle_TCollection_HAsciiString theVendorNumber;
Handle_TCollection_HAsciiString theInternalNumber;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
