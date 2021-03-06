// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_StyleContextSelect_HeaderFile
#define _StepVisual_StyleContextSelect_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepRepr_Representation_HeaderFile
#include <Handle_StepRepr_Representation.hxx>
#endif
#ifndef _Handle_StepRepr_RepresentationItem_HeaderFile
#include <Handle_StepRepr_RepresentationItem.hxx>
#endif
#ifndef _Handle_StepVisual_PresentationSet_HeaderFile
#include <Handle_StepVisual_PresentationSet.hxx>
#endif
class Standard_Transient;
class StepRepr_Representation;
class StepRepr_RepresentationItem;
class StepVisual_PresentationSet;



class StepVisual_StyleContextSelect  : public StepData_SelectType {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns a StyleContextSelect SelectType <br>
  Standard_EXPORT   StepVisual_StyleContextSelect();
  //! Recognizes a StyleContextSelect Kind Entity that is : <br>
//!        1 -> Representation <br>
//!        2 -> RepresentationItem <br>
//!        3 -> PresentationSet <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a Representation (Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_Representation Representation() const;
  //! returns Value as a RepresentationItem (Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_RepresentationItem RepresentationItem() const;
  //! returns Value as a PresentationSet (Null if another type) <br>
  Standard_EXPORT     Handle_StepVisual_PresentationSet PresentationSet() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
