// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_MappedItem_HeaderFile
#define _StepRepr_MappedItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepRepr_MappedItem_HeaderFile
#include <Handle_StepRepr_MappedItem.hxx>
#endif

#ifndef _Handle_StepRepr_RepresentationMap_HeaderFile
#include <Handle_StepRepr_RepresentationMap.hxx>
#endif
#ifndef _Handle_StepRepr_RepresentationItem_HeaderFile
#include <Handle_StepRepr_RepresentationItem.hxx>
#endif
#ifndef _StepRepr_RepresentationItem_HeaderFile
#include <StepRepr_RepresentationItem.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class StepRepr_RepresentationMap;
class StepRepr_RepresentationItem;
class TCollection_HAsciiString;



class StepRepr_MappedItem : public StepRepr_RepresentationItem {

public:

  //! Returns a MappedItem <br>
  Standard_EXPORT   StepRepr_MappedItem();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepRepr_RepresentationMap)& aMappingSource,const Handle(StepRepr_RepresentationItem)& aMappingTarget) ;
  
  Standard_EXPORT     void SetMappingSource(const Handle(StepRepr_RepresentationMap)& aMappingSource) ;
  
  Standard_EXPORT     Handle_StepRepr_RepresentationMap MappingSource() const;
  
  Standard_EXPORT     void SetMappingTarget(const Handle(StepRepr_RepresentationItem)& aMappingTarget) ;
  
  Standard_EXPORT     Handle_StepRepr_RepresentationItem MappingTarget() const;




  DEFINE_STANDARD_RTTI(StepRepr_MappedItem)

protected:




private: 


Handle_StepRepr_RepresentationMap mappingSource;
Handle_StepRepr_RepresentationItem mappingTarget;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
