// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ConversionBasedUnitAndSolidAngleUnit_HeaderFile
#define _StepBasic_ConversionBasedUnitAndSolidAngleUnit_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_ConversionBasedUnitAndSolidAngleUnit_HeaderFile
#include <Handle_StepBasic_ConversionBasedUnitAndSolidAngleUnit.hxx>
#endif

#ifndef _Handle_StepBasic_SolidAngleUnit_HeaderFile
#include <Handle_StepBasic_SolidAngleUnit.hxx>
#endif
#ifndef _StepBasic_ConversionBasedUnit_HeaderFile
#include <StepBasic_ConversionBasedUnit.hxx>
#endif
#ifndef _Handle_StepBasic_DimensionalExponents_HeaderFile
#include <Handle_StepBasic_DimensionalExponents.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepBasic_MeasureWithUnit_HeaderFile
#include <Handle_StepBasic_MeasureWithUnit.hxx>
#endif
class StepBasic_SolidAngleUnit;
class StepBasic_DimensionalExponents;
class TCollection_HAsciiString;
class StepBasic_MeasureWithUnit;



class StepBasic_ConversionBasedUnitAndSolidAngleUnit : public StepBasic_ConversionBasedUnit {

public:

  //! Returns a ConversionBasedUnitAndSolidAngleUnit <br>
  Standard_EXPORT   StepBasic_ConversionBasedUnitAndSolidAngleUnit();
  
  Standard_EXPORT   virtual  void Init(const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(StepBasic_DimensionalExponents)& aDimensions,const Handle(TCollection_HAsciiString)& aName,const Handle(StepBasic_MeasureWithUnit)& aConversionFactor) ;
  
  Standard_EXPORT     void SetSolidAngleUnit(const Handle(StepBasic_SolidAngleUnit)& aSolidAngleUnit) ;
  
  Standard_EXPORT     Handle_StepBasic_SolidAngleUnit SolidAngleUnit() const;




  DEFINE_STANDARD_RTTI(StepBasic_ConversionBasedUnitAndSolidAngleUnit)

protected:




private: 


Handle_StepBasic_SolidAngleUnit solidAngleUnit;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
