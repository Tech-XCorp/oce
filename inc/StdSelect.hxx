// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdSelect_HeaderFile
#define _StdSelect_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Select3D_Projector_HeaderFile
#include <Handle_Select3D_Projector.hxx>
#endif
#ifndef _Handle_V3d_View_HeaderFile
#include <Handle_V3d_View.hxx>
#endif
#ifndef _Handle_SelectMgr_Selection_HeaderFile
#include <Handle_SelectMgr_Selection.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
class Select3D_Projector;
class V3d_View;
class SelectMgr_Selection;
class Prs3d_Drawer;
class StdSelect_ViewerSelector3d;
class StdSelect_BRepSelectionTool;
class StdSelect_BRepOwner;
class StdSelect_EdgeFilter;
class StdSelect_FaceFilter;
class StdSelect_ShapeTypeFilter;
class StdSelect_Prs;
class StdSelect_Shape;
class StdSelect_IndexedDataMapOfOwnerPrs;
class StdSelect_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs;


//! The StdSelect package provides the following services <br>
//! -   the definition of selection modes for topological shapes <br>
//! -   the definition of several concrete filtertandard <br>
//!   Selection2d.ap classes <br>
//! -   2D and 3D viewer selectors. <br>
//!  Note that each new Interactive Object must have all <br>
//! its selection modes defined. <br>
//!        Standard Classes is useful to build <br>
//!          3D Selectable Objects, and to process <br>
//!          3D Selections: <br>
//! <br>
//!          - Implementation of View Selector for dynamic selection <br>
//!            in Views from V3d. <br>
//! <br>
//!          - Implementation of Tool class to decompose 3D BRep Objects <br>
//!            into sensitive Primitives for every desired mode of selection <br>
//!            (selection of vertex,edges,wires,faces,...) <br>
//! <br>
//!          -  Implementation of dedicated Sensitives Entities: <br>
//!             Text for 2D Views (linked to Specific 2D projectors.) <br>
class StdSelect  {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns the 3D projector for the view aView. <br>
  Standard_EXPORT   static  Handle_Select3D_Projector GetProjector(const Handle(V3d_View)& aView) ;
  //! puts The same drawer in every BRepOwner Of SensitivePrimitive <br>
//!          Used Only for hilight Of BRepOwner... <br>
  Standard_EXPORT   static  void SetDrawerForBRepOwner(const Handle(SelectMgr_Selection)& aSelection,const Handle(Prs3d_Drawer)& aDrawer) ;





protected:





private:




friend class StdSelect_ViewerSelector3d;
friend class StdSelect_BRepSelectionTool;
friend class StdSelect_BRepOwner;
friend class StdSelect_EdgeFilter;
friend class StdSelect_FaceFilter;
friend class StdSelect_ShapeTypeFilter;
friend class StdSelect_Prs;
friend class StdSelect_Shape;
friend class StdSelect_IndexedDataMapOfOwnerPrs;
friend class StdSelect_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
