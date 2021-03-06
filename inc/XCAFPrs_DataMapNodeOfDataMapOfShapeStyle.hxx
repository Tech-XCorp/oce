// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFPrs_DataMapNodeOfDataMapOfShapeStyle_HeaderFile
#define _XCAFPrs_DataMapNodeOfDataMapOfShapeStyle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XCAFPrs_DataMapNodeOfDataMapOfShapeStyle_HeaderFile
#include <Handle_XCAFPrs_DataMapNodeOfDataMapOfShapeStyle.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _XCAFPrs_Style_HeaderFile
#include <XCAFPrs_Style.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopoDS_Shape;
class XCAFPrs_Style;
class TopTools_ShapeMapHasher;
class XCAFPrs_DataMapOfShapeStyle;
class XCAFPrs_DataMapIteratorOfDataMapOfShapeStyle;



class XCAFPrs_DataMapNodeOfDataMapOfShapeStyle : public TCollection_MapNode {

public:

  
      XCAFPrs_DataMapNodeOfDataMapOfShapeStyle(const TopoDS_Shape& K,const XCAFPrs_Style& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Shape& Key() const;
  
        XCAFPrs_Style& Value() const;




  DEFINE_STANDARD_RTTI(XCAFPrs_DataMapNodeOfDataMapOfShapeStyle)

protected:




private: 


TopoDS_Shape myKey;
XCAFPrs_Style myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem XCAFPrs_Style
#define TheItem_hxx <XCAFPrs_Style.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode XCAFPrs_DataMapNodeOfDataMapOfShapeStyle
#define TCollection_DataMapNode_hxx <XCAFPrs_DataMapNodeOfDataMapOfShapeStyle.hxx>
#define TCollection_DataMapIterator XCAFPrs_DataMapIteratorOfDataMapOfShapeStyle
#define TCollection_DataMapIterator_hxx <XCAFPrs_DataMapIteratorOfDataMapOfShapeStyle.hxx>
#define Handle_TCollection_DataMapNode Handle_XCAFPrs_DataMapNodeOfDataMapOfShapeStyle
#define TCollection_DataMapNode_Type_() XCAFPrs_DataMapNodeOfDataMapOfShapeStyle_Type_()
#define TCollection_DataMap XCAFPrs_DataMapOfShapeStyle
#define TCollection_DataMap_hxx <XCAFPrs_DataMapOfShapeStyle.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
