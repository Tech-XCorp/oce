// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Message_SequenceNodeOfSequenceOfProgressScale_HeaderFile
#define _Message_SequenceNodeOfSequenceOfProgressScale_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Message_SequenceNodeOfSequenceOfProgressScale_HeaderFile
#include <Handle_Message_SequenceNodeOfSequenceOfProgressScale.hxx>
#endif

#ifndef _Message_ProgressScale_HeaderFile
#include <Message_ProgressScale.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class Message_ProgressScale;
class Message_SequenceOfProgressScale;



class Message_SequenceNodeOfSequenceOfProgressScale : public TCollection_SeqNode {

public:

  
      Message_SequenceNodeOfSequenceOfProgressScale(const Message_ProgressScale& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Message_ProgressScale& Value() const;




  DEFINE_STANDARD_RTTI(Message_SequenceNodeOfSequenceOfProgressScale)

protected:




private: 


Message_ProgressScale myValue;


};

#define SeqItem Message_ProgressScale
#define SeqItem_hxx <Message_ProgressScale.hxx>
#define TCollection_SequenceNode Message_SequenceNodeOfSequenceOfProgressScale
#define TCollection_SequenceNode_hxx <Message_SequenceNodeOfSequenceOfProgressScale.hxx>
#define Handle_TCollection_SequenceNode Handle_Message_SequenceNodeOfSequenceOfProgressScale
#define TCollection_SequenceNode_Type_() Message_SequenceNodeOfSequenceOfProgressScale_Type_()
#define TCollection_Sequence Message_SequenceOfProgressScale
#define TCollection_Sequence_hxx <Message_SequenceOfProgressScale.hxx>

#include <TCollection_SequenceNode.lxx>

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
