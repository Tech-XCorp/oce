// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectBase_HeaderFile
#define _IFSelect_SelectBase_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SelectBase_HeaderFile
#include <Handle_IFSelect_SelectBase.hxx>
#endif

#ifndef _IFSelect_Selection_HeaderFile
#include <IFSelect_Selection.hxx>
#endif
class IFSelect_SelectionIterator;


//! SelectBase works directly from an InterfaceModel : it is the <br>
//!           first base for other Selections. <br>
class IFSelect_SelectBase : public IFSelect_Selection {

public:

  //! Puts in an Iterator the Selections from which "me" depends <br>
//!           This list is empty for all SelectBase type Selections <br>
  Standard_EXPORT     void FillIterator(IFSelect_SelectionIterator& iter) const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectBase)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
