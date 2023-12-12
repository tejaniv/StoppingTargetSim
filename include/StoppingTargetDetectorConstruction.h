// Ed Callaghan
// User-level detector construction
// November 2023

#ifndef STOPPINGTARGETDETECTORCONSTRUCTION_H
#define STOPPINGTARGETDETECTORCONSTRUCTION_H

#include <CLHEP/Units/SystemOfUnits.h>
#include <G4Box.hh>
#include <G4VUserDetectorConstruction.hh>
#include <G4LogicalVolume.hh>
#include <G4Material.hh>
#include <G4NistManager.hh>
#include <G4PVPlacement.hh>
#include <G4VPhysicalVolume.hh>
#include <G4Tubs.hh>
#include <YamlParser.h>
#include <string>

class StoppingTargetDetectorConstruction: public G4VUserDetectorConstruction{
  public:
    StoppingTargetDetectorConstruction();
    StoppingTargetDetectorConstruction(const YamlNode& node);
   ~StoppingTargetDetectorConstruction();

    G4VPhysicalVolume* ConstructCustom();
    G4VPhysicalVolume* Construct();
  protected:
    /**/
  private:
    /**/
};

#endif
