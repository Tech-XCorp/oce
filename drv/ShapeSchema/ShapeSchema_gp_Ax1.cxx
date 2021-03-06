#ifndef _ShapeSchema_gp_Ax1_HeaderFile
#include <ShapeSchema_gp_Ax1.hxx>
#endif
#ifndef _gp_Ax1_HeaderFile
#include <gp_Ax1.hxx>
#endif
#include <ShapeSchema_gp_Ax1.ixx>
#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Storage_stCONSTclCOM.hxx>
#endif

void ShapeSchema_gp_Ax1::SWrite(const gp_Ax1& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
    ShapeSchema_gp_Pnt::SWrite(pp._CSFDB_Getgp_Ax1loc(),f,theSchema);
    ShapeSchema_gp_Dir::SWrite(pp._CSFDB_Getgp_Ax1vdir(),f,theSchema);

  f.EndWriteObjectData();
}

void ShapeSchema_gp_Ax1::SRead(gp_Ax1& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    ShapeSchema_gp_Pnt::SRead((gp_Pnt&)pp._CSFDB_Getgp_Ax1loc(),f,theSchema);

    ShapeSchema_gp_Dir::SRead((gp_Dir&)pp._CSFDB_Getgp_Ax1vdir(),f,theSchema);

  f.EndReadObjectData();
}
