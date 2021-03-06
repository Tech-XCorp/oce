// Created on: 1993-07-08
// Created by: Jean Yves LEBEY
// Copyright (c) 1993-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <TopOpeBRepTool_HBoxTool.ixx>

#include <TopAbs.hxx>
#include <TopExp_Explorer.hxx>
#include <BRep_Tool.hxx>
#include <TopoDS.hxx>
#include <gp_Pnt.hxx>
#include <BRepBndLib.hxx>
#include <Standard_ProgramError.hxx>
#include <TopOpeBRepTool_box.hxx>
#include <TopOpeBRepTool_define.hxx>
#include <Precision.hxx>

#ifdef DEB
#define TBOX TopOpeBRepTool_GettraceBOX()
#endif

//=======================================================================
//function : TopOpeBRepTool_HBoxTool
//purpose  : 
//=======================================================================

TopOpeBRepTool_HBoxTool::TopOpeBRepTool_HBoxTool()
{
}

//=======================================================================
//function : Clear
//purpose  : 
//=======================================================================
void TopOpeBRepTool_HBoxTool::Clear()
{
  myIMS.Clear();
}

//=======================================================================
//function : ComputeBoxes
//purpose  : 
//=======================================================================
void TopOpeBRepTool_HBoxTool::AddBoxes(const TopoDS_Shape& S,const TopAbs_ShapeEnum TS,const TopAbs_ShapeEnum TA)
{
  TopExp_Explorer ex;
  for (ex.Init(S,TS,TA);ex.More();ex.Next()) {
//  for (TopExp_Explorer ex(S,TS,TA);ex.More();ex.Next()) {
    const TopoDS_Shape& ss = ex.Current();
    AddBox(ss);
  }
}

//=======================================================================
//function : AddBox
//purpose  : 
//=======================================================================
void TopOpeBRepTool_HBoxTool::AddBox(const TopoDS_Shape& S)
{
#ifdef DEB
  TopAbs_ShapeEnum t = 
#endif
    S.ShapeType();
  Standard_Boolean hasb = HasBox(S);
  if (hasb) return;

  Bnd_Box B;
  ComputeBox(S,B);
  myIMS.Add(S,B);
#ifdef DEB
  if (TBOX) {
    DumpB(Box(S));cout<<"; # HBT::AddBox "<<Index(S)<<" : ";TopAbs::Print(t,cout);cout<<"\n";cout<<endl;
  }
#endif
}

//=======================================================================
//function : ComputeBox
//purpose  : 
//=======================================================================
void TopOpeBRepTool_HBoxTool::ComputeBox(const TopoDS_Shape& S,Bnd_Box& B)
{
  TopAbs_ShapeEnum t = S.ShapeType();
  if      ( t == TopAbs_FACE ) BRepBndLib::Add(S,B);
  else if ( t == TopAbs_EDGE ) BRepBndLib::Add(S,B);
  //modified by NIZHNY-MZV  Tue Sep 21 14:04:33 1999
  else if ( t == TopAbs_SOLID) BRepBndLib::Add(S,B);
  else if ( t == TopAbs_COMPOUND) BRepBndLib::Add(S,B);
  //modified by NIZHNY-MZV  Wed Apr  5 10:05:53 2000
  else if ( t == TopAbs_VERTEX) BRepBndLib::Add(S,B);
  else {
    Standard_ProgramError::Raise("HBT::ComputeBox : invalid type");
  }
}

//=======================================================================
//function : ComputeBoxOnVertices
//purpose  : 
//=======================================================================
void TopOpeBRepTool_HBoxTool::ComputeBoxOnVertices(const TopoDS_Shape& S,Bnd_Box& B)
{
  TopExp_Explorer ex(S,TopAbs_VERTEX);
  if (!ex.More()) {
    B.Update(-1.e5,-1.e5,-1.e5,1.e5,1.e5,1.e5);
    return;
  }
  Standard_Real tol = Precision::Confusion();
  for (; ex.More(); ex.Next() ) {
    Standard_Real x,y,z;
    BRep_Tool::Pnt(TopoDS::Vertex(ex.Current())).Coord(x,y,z);
    B.Update(x,y,z);
    tol = Max(tol,BRep_Tool::Tolerance(TopoDS::Vertex(ex.Current())));
  }
  B.Enlarge(tol);
}

//=======================================================================
//function : Box
//purpose  : 
//=======================================================================
const Bnd_Box& TopOpeBRepTool_HBoxTool::Box(const TopoDS_Shape& S)
{
  Standard_Boolean hb = HasBox(S);
  if (!hb) {
    Standard_ProgramError::Raise("HBT::Box1");
  }

  const Bnd_Box& B = myIMS.FindFromKey(S);
  return B;
}

//=======================================================================
//function : Box
//purpose  : 
//=======================================================================
const Bnd_Box& TopOpeBRepTool_HBoxTool::Box(const Standard_Integer I) const
{
  Standard_Integer iu = Extent();
  Standard_Integer hb = (I >= 1 && I <= iu);
  if (!hb) {
    Standard_ProgramError::Raise("HBT::Box2");
  }
  const Bnd_Box& B = myIMS.FindFromIndex(I);
  return B;
}

//=======================================================================
//function : HasBox
//purpose  : 
//=======================================================================
Standard_Boolean TopOpeBRepTool_HBoxTool::HasBox(const TopoDS_Shape& S) const 
{
  Standard_Boolean hb = myIMS.Contains(S);
  return hb;
}

//=======================================================================
//function : Shape
//purpose  : 
//=======================================================================
const TopoDS_Shape& TopOpeBRepTool_HBoxTool::Shape(const Standard_Integer I) const
{
  Standard_Integer iu = Extent();
  Standard_Integer hs = (I >= 1 && I <= iu);
  if (!hs) {
    Standard_ProgramError::Raise("HBT::Box4");
  }
  const TopoDS_Shape& S = myIMS.FindKey(I);
  return S;
}

//=======================================================================
//function : Index
//purpose  : 
//=======================================================================
Standard_Integer TopOpeBRepTool_HBoxTool::Index(const TopoDS_Shape& S) const 
{
  Standard_Integer i = myIMS.FindIndex(S);
  return i;
}

//=======================================================================
//function : Extent
//purpose  : 
//=======================================================================
Standard_Integer TopOpeBRepTool_HBoxTool::Extent() const 
{
  Standard_Integer n = myIMS.Extent();
  return n;
}

//=======================================================================
//function : ChangeIMS
//purpose  : 
//=======================================================================
TopOpeBRepTool_IndexedDataMapOfShapeBox& TopOpeBRepTool_HBoxTool::ChangeIMS()
{
  return myIMS;
}

//=======================================================================
//function : IMS
//purpose  : 
//=======================================================================
const TopOpeBRepTool_IndexedDataMapOfShapeBox& TopOpeBRepTool_HBoxTool::IMS() const
{
  return myIMS;
}

//=======================================================================
//function : DumpB
//purpose  : 
//=======================================================================
void TopOpeBRepTool_HBoxTool::DumpB 
#ifdef DEB
(const Bnd_Box& B)
{
  if      (B.IsVoid()) cout<<"# IsVoid";
  else if (B.IsWhole()) cout<<"# IsWhole";
  else {
    Standard_Real x,y,z,X,Y,Z; 
    B.Get(x,y,z,X,Y,Z);
    cout<<"bounding "<<x<<" "<<y<<" "<<z<<" "<<X<<" "<<Y<<" "<<Z;
    cout.flush();
  }
}
#else
(const Bnd_Box& )
{
}
#endif

