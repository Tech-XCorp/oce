// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dynamic_SeqOfFuzzyDefinitions_HeaderFile
#define _Dynamic_SeqOfFuzzyDefinitions_HeaderFile

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
#ifndef _Handle_Dynamic_FuzzyDefinition_HeaderFile
#include <Handle_Dynamic_FuzzyDefinition.hxx>
#endif
#ifndef _Handle_Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions_HeaderFile
#include <Handle_Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Dynamic_FuzzyDefinition;
class Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions;



class Dynamic_SeqOfFuzzyDefinitions  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      Dynamic_SeqOfFuzzyDefinitions();
  
  Standard_EXPORT     void Clear() ;
~Dynamic_SeqOfFuzzyDefinitions()
{
  Clear();
}
  
  Standard_EXPORT    const Dynamic_SeqOfFuzzyDefinitions& Assign(const Dynamic_SeqOfFuzzyDefinitions& Other) ;
   const Dynamic_SeqOfFuzzyDefinitions& operator =(const Dynamic_SeqOfFuzzyDefinitions& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Dynamic_FuzzyDefinition)& T) ;
  
        void Append(Dynamic_SeqOfFuzzyDefinitions& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Dynamic_FuzzyDefinition)& T) ;
  
        void Prepend(Dynamic_SeqOfFuzzyDefinitions& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Dynamic_FuzzyDefinition)& T) ;
  
        void InsertBefore(const Standard_Integer Index,Dynamic_SeqOfFuzzyDefinitions& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Dynamic_FuzzyDefinition)& T) ;
  
        void InsertAfter(const Standard_Integer Index,Dynamic_SeqOfFuzzyDefinitions& S) ;
  
  Standard_EXPORT    const Handle_Dynamic_FuzzyDefinition& First() const;
  
  Standard_EXPORT    const Handle_Dynamic_FuzzyDefinition& Last() const;
  
        void Split(const Standard_Integer Index,Dynamic_SeqOfFuzzyDefinitions& Sub) ;
  
  Standard_EXPORT    const Handle_Dynamic_FuzzyDefinition& Value(const Standard_Integer Index) const;
   const Handle_Dynamic_FuzzyDefinition& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Dynamic_FuzzyDefinition)& I) ;
  
  Standard_EXPORT     Handle_Dynamic_FuzzyDefinition& ChangeValue(const Standard_Integer Index) ;
    Handle_Dynamic_FuzzyDefinition& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Dynamic_SeqOfFuzzyDefinitions(const Dynamic_SeqOfFuzzyDefinitions& Other);




};

#define SeqItem Handle_Dynamic_FuzzyDefinition
#define SeqItem_hxx <Dynamic_FuzzyDefinition.hxx>
#define TCollection_SequenceNode Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions
#define TCollection_SequenceNode_hxx <Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions.hxx>
#define Handle_TCollection_SequenceNode Handle_Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions
#define TCollection_SequenceNode_Type_() Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions_Type_()
#define TCollection_Sequence Dynamic_SeqOfFuzzyDefinitions
#define TCollection_Sequence_hxx <Dynamic_SeqOfFuzzyDefinitions.hxx>

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
