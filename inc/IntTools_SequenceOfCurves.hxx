// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_SequenceOfCurves_HeaderFile
#define _IntTools_SequenceOfCurves_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_IntTools_SequenceNodeOfSequenceOfCurves_HeaderFile
#include <Handle_IntTools_SequenceNodeOfSequenceOfCurves.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IntTools_Curve;
class IntTools_SequenceNodeOfSequenceOfCurves;



class IntTools_SequenceOfCurves  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      IntTools_SequenceOfCurves();
  
  Standard_EXPORT     void Clear() ;
~IntTools_SequenceOfCurves()
{
  Clear();
}
  
  Standard_EXPORT    const IntTools_SequenceOfCurves& Assign(const IntTools_SequenceOfCurves& Other) ;
   const IntTools_SequenceOfCurves& operator =(const IntTools_SequenceOfCurves& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const IntTools_Curve& T) ;
  
        void Append(IntTools_SequenceOfCurves& S) ;
  
  Standard_EXPORT     void Prepend(const IntTools_Curve& T) ;
  
        void Prepend(IntTools_SequenceOfCurves& S) ;
  
        void InsertBefore(const Standard_Integer Index,const IntTools_Curve& T) ;
  
        void InsertBefore(const Standard_Integer Index,IntTools_SequenceOfCurves& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const IntTools_Curve& T) ;
  
        void InsertAfter(const Standard_Integer Index,IntTools_SequenceOfCurves& S) ;
  
  Standard_EXPORT    const IntTools_Curve& First() const;
  
  Standard_EXPORT    const IntTools_Curve& Last() const;
  
        void Split(const Standard_Integer Index,IntTools_SequenceOfCurves& Sub) ;
  
  Standard_EXPORT    const IntTools_Curve& Value(const Standard_Integer Index) const;
   const IntTools_Curve& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const IntTools_Curve& I) ;
  
  Standard_EXPORT     IntTools_Curve& ChangeValue(const Standard_Integer Index) ;
    IntTools_Curve& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   IntTools_SequenceOfCurves(const IntTools_SequenceOfCurves& Other);




};

#define SeqItem IntTools_Curve
#define SeqItem_hxx <IntTools_Curve.hxx>
#define TCollection_SequenceNode IntTools_SequenceNodeOfSequenceOfCurves
#define TCollection_SequenceNode_hxx <IntTools_SequenceNodeOfSequenceOfCurves.hxx>
#define Handle_TCollection_SequenceNode Handle_IntTools_SequenceNodeOfSequenceOfCurves
#define TCollection_SequenceNode_Type_() IntTools_SequenceNodeOfSequenceOfCurves_Type_()
#define TCollection_Sequence IntTools_SequenceOfCurves
#define TCollection_Sequence_hxx <IntTools_SequenceOfCurves.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
