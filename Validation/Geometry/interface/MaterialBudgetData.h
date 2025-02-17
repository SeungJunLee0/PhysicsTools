
#ifndef MaterialBudgetData_h
#define MaterialBudgetData_h 1

#include "Validation/Geometry/interface/MaterialBudgetCategorizer.h"

#include "G4ThreeVector.hh"

#include <CLHEP/Vector/LorentzVector.h>

#include "FWCore/MessageLogger/interface/MessageLogger.h"

#include <memory>

class MaterialBudgetData;
class G4Step;
class G4Track;

typedef std::map<std::string, float> msf;

class MaterialBudgetData {
public:
  MaterialBudgetData();
  ~MaterialBudgetData();

  void dataStartTrack(const G4Track* aTrack);
  void dataEndTrack(const G4Track* aTrack);
  void dataPerStep(const G4Step* aStep);

  void SetAllStepsToTree();

public:
  float getTotalMB() const { return theTotalMB; }

  float getSupportFractionMB() const { return theSupportFractionMB; }
  float getSensitiveFractionMB() const { return theSensitiveFractionMB; }
  float getCablesFractionMB() const { return theCablesFractionMB; }
  float getCoolingFractionMB() const { return theCoolingFractionMB; }
  float getElectronicsFractionMB() const { return theElectronicsFractionMB; }
  float getOtherFractionMB() const { return theOtherFractionMB; }
  float getAirFractionMB() const { return theAirFractionMB; }
  //HGCal
  float getCopperFractionMB() const { return theCopperFractionMB; }
  float getH_ScintillatorFractionMB() const { return theH_ScintillatorFractionMB; }
  float getLeadFractionMB() const { return theLeadFractionMB; }
  float getEpoxyFractionMB() const { return theEpoxyFractionMB; }
  float getKaptonFractionMB() const { return theKaptonFractionMB; }
  float getAluminiumFractionMB() const { return theAluminiumFractionMB; }
  float getHGC_G10_FR4FractionMB() const { return theHGC_G10_FR4FractionMB; }
  float getSiliconFractionMB() const { return theSiliconFractionMB; }
  float getStainlessSteelFractionMB() const { return theStainlessSteelFractionMB; }
  float getWCuFractionMB() const { return theWCuFractionMB; }
  float getPolystyreneFractionMB() const { return thePolystyreneFractionMB; }
  float getHGC_EEConnectorFractionMB() const { return theHGC_EEConnectorFractionMB; }
  float getHGC_HEConnectorFractionMB() const { return theHGC_HEConnectorFractionMB; }

  float getSupportMB() const { return theSupportMB; }
  float getSensitiveMB() const { return theSensitiveMB; }
  float getCablesMB() const { return theCablesMB; }
  float getCoolingMB() const { return theCoolingMB; }
  float getElectronicsMB() const { return theElectronicsMB; }
  float getOtherMB() const { return theOtherMB; }
  float getAirMB() const { return theAirMB; }
  //HGCal
  float getCopperMB() const { return theCopperMB; }
  float getH_ScintillatorMB() const { return theH_ScintillatorMB; }
  float getLeadMB() const { return theLeadMB; }
  float getEpoxyMB() const { return theEpoxyMB; }
  float getKaptonMB() const { return theKaptonMB; }
  float getAluminiumMB() const { return theAluminiumMB; }
  float getHGC_G10_FR4MB() const { return theHGC_G10_FR4MB; }
  float getSiliconMB() const { return theSiliconMB; }
  float getStainlessSteelMB() const { return theStainlessSteelMB; }
  float getWCuMB() const { return theWCuMB; }
  float getPolystyreneMB() const { return thePolystyreneMB; }
  float getHGC_EEConnectorMB() const { return theHGC_EEConnectorMB; }
  float getHGC_HEConnectorMB() const { return theHGC_HEConnectorMB; }

  float getSupportFractionIL() const { return theSupportFractionIL; }
  float getSensitiveFractionIL() const { return theSensitiveFractionIL; }
  float getCablesFractionIL() const { return theCablesFractionIL; }
  float getCoolingFractionIL() const { return theCoolingFractionIL; }
  float getElectronicsFractionIL() const { return theElectronicsFractionIL; }
  float getOtherFractionIL() const { return theOtherFractionIL; }
  float getAirFractionIL() const { return theAirFractionIL; }
  float getCopperFractionIL() const { return theCopperFractionIL; }
  float getH_ScintillatorFractionIL() const { return theH_ScintillatorFractionIL; }
  float getLeadFractionIL() const { return theLeadFractionIL; }
  float getEpoxyFractionIL() const { return theEpoxyFractionIL; }
  float getKaptonFractionIL() const { return theKaptonFractionIL; }
  float getAluminiumFractionIL() const { return theAluminiumFractionIL; }
  float getHGC_G10_FR4FractionIL() const { return theHGC_G10_FR4FractionIL; }
  float getSiliconFractionIL() const { return theSiliconFractionIL; }
  float getStainlessSteelFractionIL() const { return theStainlessSteelFractionIL; }
  float getWCuFractionIL() const { return theWCuFractionIL; }
  float getPolystyreneFractionIL() const { return thePolystyreneFractionIL; }
  float getHGC_EEConnectorFractionIL() const { return theHGC_EEConnectorFractionIL; }
  float getHGC_HEConnectorFractionIL() const { return theHGC_HEConnectorFractionIL; }

  float getTotalIL() const { return theTotalIL; }
  float getSupportIL() const { return theSupportIL; }
  float getSensitiveIL() const { return theSensitiveIL; }
  float getCablesIL() const { return theCablesIL; }
  float getCoolingIL() const { return theCoolingIL; }
  float getElectronicsIL() const { return theElectronicsIL; }
  float getOtherIL() const { return theOtherIL; }
  float getAirIL() const { return theAirIL; }
  float getCopperIL() const { return theCopperIL; }
  float getH_ScintillatorIL() const { return theH_ScintillatorIL; }
  float getLeadIL() const { return theLeadIL; }
  float getEpoxyIL() const { return theEpoxyIL; }
  float getKaptonIL() const { return theKaptonIL; }
  float getAluminiumIL() const { return theAluminiumIL; }
  float getHGC_G10_FR4IL() const { return theHGC_G10_FR4IL; }
  float getSiliconIL() const { return theSiliconIL; }
  float getStainlessSteelIL() const { return theStainlessSteelIL; }
  float getWCuIL() const { return theWCuIL; }
  float getPolystyreneIL() const { return thePolystyreneIL; }
  float getHGC_EEConnectorIL() const { return theHGC_EEConnectorIL; }
  float getHGC_HEConnectorIL() const { return theHGC_HEConnectorIL; }

  float getEta() const { return theEta; }
  float getPhi() const { return thePhi; }

  int getID() const { return theID; }
  float getPt() const { return thePt; }
  float getEnergy() const { return theEnergy; }
  float getMass() const { return theMass; }

  int getNumberOfSteps() const { return theStepN; }

  float getTrkLen() const { return theTrkLen; }
  std::string getPVname() const { return thePVname; }
  int getPVcopyNo() const { return thePVcopyNo; }
  float getRadLen() const { return theRadLen; }
  float getIntLen() const { return theIntLen; }

  float getStepDmb(int is) { return theDmb[is]; }
  float getSupportDmb(int is) const { return theSupportDmb[is]; }
  float getSensitiveDmb(int is) const { return theSensitiveDmb[is]; }
  float getCablesDmb(int is) const { return theCablesDmb[is]; }
  float getCoolingDmb(int is) const { return theCoolingDmb[is]; }
  float getElectronicsDmb(int is) const { return theElectronicsDmb[is]; }
  float getOtherDmb(int is) const { return theOtherDmb[is]; }
  float getAirDmb(int is) const { return theAirDmb[is]; }
  float getCopperDmb(int is) const { return theCopperDmb[is]; }
  float getH_ScintillatorDmb(int is) const { return theH_ScintillatorDmb[is]; }
  float getLeadDmb(int is) const { return theLeadDmb[is]; }
  float getEpoxyDmb(int is) const { return theEpoxyDmb[is]; }
  float getKaptonDmb(int is) const { return theKaptonDmb[is]; }
  float getAluminiumDmb(int is) const { return theAluminiumDmb[is]; }
  float getHGC_G10_FR4Dmb(int is) const { return theHGC_G10_FR4Dmb[is]; }
  float getSiliconDmb(int is) const { return theSiliconDmb[is]; }
  float getStainlessSteelDmb(int is) const { return theStainlessSteelDmb[is]; }
  float getWCuDmb(int is) const { return theWCuDmb[is]; }
  float getPolystyreneDmb(int is) const { return thePolystyreneDmb[is]; }
  float getHGC_EEConnectorDmb(int is) const { return theHGC_EEConnectorDmb[is]; }
  float getHGC_HEConnectorDmb(int is) const { return theHGC_HEConnectorDmb[is]; }

  float getStepDil(int is) { return theDil[is]; }
  float getSupportDil(int is) const { return theSupportDil[is]; }
  float getSensitiveDil(int is) const { return theSensitiveDil[is]; }
  float getCablesDil(int is) const { return theCablesDil[is]; }
  float getCoolingDil(int is) const { return theCoolingDil[is]; }
  float getElectronicsDil(int is) const { return theElectronicsDil[is]; }
  float getOtherDil(int is) const { return theOtherDil[is]; }
  float getAirDil(int is) const { return theAirDil[is]; }
  float getCopperDil(int is) const { return theCopperDil[is]; }
  float getH_ScintillatorDil(int is) const { return theH_ScintillatorDil[is]; }
  float getLeadDil(int is) const { return theLeadDil[is]; }
  float getEpoxyDil(int is) const { return theEpoxyDil[is]; }
  float getKaptonDil(int is) const { return theKaptonDil[is]; }
  float getAluminiumDil(int is) const { return theAluminiumDil[is]; }
  float getHGC_G10_FR4Dil(int is) const { return theHGC_G10_FR4Dil[is]; }
  float getSiliconDil(int is) const { return theSiliconDil[is]; }
  float getStainlessSteelDil(int is) const { return theStainlessSteelDil[is]; }
  float getWCuDil(int is) const { return theWCuDil[is]; }
  float getPolystyreneDil(int is) const { return thePolystyreneDil[is]; }
  float getHGC_EEConnectorDil(int is) const { return theHGC_EEConnectorDil[is]; }
  float getHGC_HEConnectorDil(int is) const { return theHGC_HEConnectorDil[is]; }

  double getStepInitialX(int is) { return theInitialX[is]; }
  double getStepInitialY(int is) { return theInitialY[is]; }
  double getStepInitialZ(int is) { return theInitialZ[is]; }
  double getStepFinalX(int is) { return theFinalX[is]; }
  double getStepFinalY(int is) { return theFinalY[is]; }
  double getStepFinalZ(int is) { return theFinalZ[is]; }
  int getStepID(int is) { return theStepID[is]; }
  float getStepInitialPt(int is) { return theStepInitialPt[is]; }
  float getStepInitialEta(int is) { return theStepInitialEta[is]; }
  float getStepInitialPhi(int is) { return theStepInitialPhi[is]; }
  float getStepInitialEnergy(int is) { return theStepInitialEnergy[is]; }
  float getStepInitialPx(int is) { return theStepInitialPx[is]; }
  float getStepInitialPy(int is) { return theStepInitialPy[is]; }
  float getStepInitialPz(int is) { return theStepInitialPz[is]; }
  float getStepInitialBeta(int is) { return theStepInitialBeta[is]; }
  float getStepInitialGamma(int is) { return theStepInitialGamma[is]; }
  float getStepInitialMass(int is) { return theStepInitialMass[is]; }
  float getStepFinalPt(int is) { return theStepFinalPt[is]; }
  float getStepFinalEta(int is) { return theStepFinalEta[is]; }
  float getStepFinalPhi(int is) { return theStepFinalPhi[is]; }
  float getStepFinalEnergy(int is) { return theStepFinalEnergy[is]; }
  float getStepFinalPx(int is) { return theStepFinalPx[is]; }
  float getStepFinalPy(int is) { return theStepFinalPy[is]; }
  float getStepFinalPz(int is) { return theStepFinalPz[is]; }
  float getStepFinalBeta(int is) { return theStepFinalBeta[is]; }
  float getStepFinalGamma(int is) { return theStepFinalGamma[is]; }
  float getStepFinalMass(int is) { return theStepFinalMass[is]; }
  int getStepPreProcess(int is) { return theStepPreProcess[is]; }
  int getStepPostProcess(int is) { return theStepPostProcess[is]; }

  int getStepVolumeID(int is) { return theVolumeID[is]; }
  std::string getStepVolumeName(int is) { return theVolumeName[is]; }
  int getStepVolumeCopy(int is) { return theVolumeCopy[is]; }
  float getStepVolumeX(int is) { return theVolumeX[is]; }
  float getStepVolumeY(int is) { return theVolumeY[is]; }
  float getStepVolumeZ(int is) { return theVolumeZ[is]; }
  CLHEP::HepLorentzVector getStepVolumeXaxis(int is) {
    return CLHEP::HepLorentzVector(theVolumeXaxis1[is], theVolumeXaxis2[is], theVolumeXaxis3[is]);
  }
  CLHEP::HepLorentzVector getStepVolumeYaxis(int is) {
    return CLHEP::HepLorentzVector(theVolumeYaxis1[is], theVolumeYaxis2[is], theVolumeYaxis3[is]);
  }
  CLHEP::HepLorentzVector getStepVolumeZaxis(int is) {
    return CLHEP::HepLorentzVector(theVolumeZaxis1[is], theVolumeZaxis2[is], theVolumeZaxis3[is]);
  }
  int getStepMaterialID(int is) { return theMaterialID[is]; }
  std::string getStepMaterialName(int is) { return theMaterialName[is]; }
  float getStepMaterialX0(int is) { return theMaterialX0[is]; }
  float getStepMaterialLambda0(int is) { return theMaterialLambda0[is]; }
  float getStepMaterialDensity(int is) { return theMaterialDensity[is]; }

  bool allStepsON() { return allStepsToTree; }

  inline bool getHGCalmode(void) { return isHGCal; }
  inline void setHGCalmode(bool t) { isHGCal = t; }
  inline void setMtdmode(bool t) { isMtd = t; }

private:
  static constexpr int MAXNUMBERSTEPS = 10000;

  float theTotalMB;
  float theEta;
  float thePhi;

  float thePt;
  int theID;
  float theEnergy;
  float theMass;
  float theSupportFractionMB;
  float theSensitiveFractionMB;
  float theCablesFractionMB;
  float theCoolingFractionMB;
  float theElectronicsFractionMB;
  float theOtherFractionMB;
  float theAirFractionMB;
  float theSupportFractionIL;
  float theSensitiveFractionIL;
  float theCablesFractionIL;
  float theCoolingFractionIL;
  float theElectronicsFractionIL;
  float theOtherFractionIL;
  float theAirFractionIL;
  float theSupportMB;
  float theSensitiveMB;
  float theCablesMB;
  float theCoolingMB;
  float theElectronicsMB;
  float theOtherMB;
  float theAirMB;

  //HGCal MB
  float theCopperFractionMB;
  float theH_ScintillatorFractionMB;
  float theLeadFractionMB;
  float theEpoxyFractionMB;
  float theKaptonFractionMB;
  float theAluminiumFractionMB;
  float theHGC_G10_FR4FractionMB;
  float theSiliconFractionMB;
  float theStainlessSteelFractionMB;
  float theWCuFractionMB;
  float thePolystyreneFractionMB;
  float theHGC_EEConnectorFractionMB;
  float theHGC_HEConnectorFractionMB;
  float theCopperMB;
  float theH_ScintillatorMB;
  float theLeadMB;
  float theEpoxyMB;
  float theKaptonMB;
  float theAluminiumMB;
  float theHGC_G10_FR4MB;
  float theSiliconMB;
  float theStainlessSteelMB;
  float theWCuMB;
  float thePolystyreneMB;
  float theHGC_EEConnectorMB;
  float theHGC_HEConnectorMB;
  float theTotalIL;
  float theSupportIL;
  float theSensitiveIL;
  float theCablesIL;
  float theCoolingIL;
  float theElectronicsIL;
  float theOtherIL;
  float theAirIL;

  //HGCal IL
  float theCopperFractionIL;
  float theH_ScintillatorFractionIL;
  float theLeadFractionIL;
  float theEpoxyFractionIL;
  float theKaptonFractionIL;
  float theAluminiumFractionIL;
  float theHGC_G10_FR4FractionIL;
  float theSiliconFractionIL;
  float theStainlessSteelFractionIL;
  float theWCuFractionIL;
  float thePolystyreneFractionIL;
  float theHGC_EEConnectorFractionIL;
  float theHGC_HEConnectorFractionIL;
  float theCopperIL;
  float theH_ScintillatorIL;
  float theLeadIL;
  float theEpoxyIL;
  float theKaptonIL;
  float theAluminiumIL;
  float theHGC_G10_FR4IL;
  float theSiliconIL;
  float theStainlessSteelIL;
  float theWCuIL;
  float thePolystyreneIL;
  float theHGC_EEConnectorIL;
  float theHGC_HEConnectorIL;

  int theStepN;
  std::array<double, MAXNUMBERSTEPS> theInitialX;
  std::array<double, MAXNUMBERSTEPS> theInitialY;
  std::array<double, MAXNUMBERSTEPS> theInitialZ;

  std::array<double, MAXNUMBERSTEPS> theFinalX;
  std::array<double, MAXNUMBERSTEPS> theFinalY;
  std::array<double, MAXNUMBERSTEPS> theFinalZ;

  std::array<float, MAXNUMBERSTEPS> theDmb;
  std::array<float, MAXNUMBERSTEPS> theSupportDmb;
  std::array<float, MAXNUMBERSTEPS> theSensitiveDmb;
  std::array<float, MAXNUMBERSTEPS> theCablesDmb;
  std::array<float, MAXNUMBERSTEPS> theCoolingDmb;
  std::array<float, MAXNUMBERSTEPS> theElectronicsDmb;
  std::array<float, MAXNUMBERSTEPS> theOtherDmb;
  std::array<float, MAXNUMBERSTEPS> theAirDmb;
  std::array<float, MAXNUMBERSTEPS> theCopperDmb;
  std::array<float, MAXNUMBERSTEPS> theH_ScintillatorDmb;
  std::array<float, MAXNUMBERSTEPS> theLeadDmb;
  std::array<float, MAXNUMBERSTEPS> theEpoxyDmb;
  std::array<float, MAXNUMBERSTEPS> theKaptonDmb;
  std::array<float, MAXNUMBERSTEPS> theAluminiumDmb;
  std::array<float, MAXNUMBERSTEPS> theHGC_G10_FR4Dmb;
  std::array<float, MAXNUMBERSTEPS> theSiliconDmb;
  std::array<float, MAXNUMBERSTEPS> theStainlessSteelDmb;
  std::array<float, MAXNUMBERSTEPS> theWCuDmb;
  std::array<float, MAXNUMBERSTEPS> thePolystyreneDmb;
  std::array<float, MAXNUMBERSTEPS> theHGC_EEConnectorDmb;
  std::array<float, MAXNUMBERSTEPS> theHGC_HEConnectorDmb;

  std::array<float, MAXNUMBERSTEPS> theDil;
  std::array<float, MAXNUMBERSTEPS> theSupportDil;
  std::array<float, MAXNUMBERSTEPS> theSensitiveDil;
  std::array<float, MAXNUMBERSTEPS> theCablesDil;
  std::array<float, MAXNUMBERSTEPS> theCoolingDil;
  std::array<float, MAXNUMBERSTEPS> theElectronicsDil;
  std::array<float, MAXNUMBERSTEPS> theOtherDil;
  std::array<float, MAXNUMBERSTEPS> theAirDil;
  std::array<float, MAXNUMBERSTEPS> theCopperDil;
  std::array<float, MAXNUMBERSTEPS> theH_ScintillatorDil;
  std::array<float, MAXNUMBERSTEPS> theLeadDil;
  std::array<float, MAXNUMBERSTEPS> theEpoxyDil;
  std::array<float, MAXNUMBERSTEPS> theKaptonDil;
  std::array<float, MAXNUMBERSTEPS> theAluminiumDil;
  std::array<float, MAXNUMBERSTEPS> theHGC_G10_FR4Dil;
  std::array<float, MAXNUMBERSTEPS> theSiliconDil;
  std::array<float, MAXNUMBERSTEPS> theStainlessSteelDil;
  std::array<float, MAXNUMBERSTEPS> theWCuDil;
  std::array<float, MAXNUMBERSTEPS> thePolystyreneDil;
  std::array<float, MAXNUMBERSTEPS> theHGC_EEConnectorDil;
  std::array<float, MAXNUMBERSTEPS> theHGC_HEConnectorDil;

  std::array<int, MAXNUMBERSTEPS> theVolumeID;
  std::array<std::string, MAXNUMBERSTEPS> theVolumeName;
  std::array<int, MAXNUMBERSTEPS> theVolumeCopy;
  std::array<float, MAXNUMBERSTEPS> theVolumeX;
  std::array<float, MAXNUMBERSTEPS> theVolumeY;
  std::array<float, MAXNUMBERSTEPS> theVolumeZ;
  std::array<float, MAXNUMBERSTEPS> theVolumeXaxis1;
  std::array<float, MAXNUMBERSTEPS> theVolumeXaxis2;
  std::array<float, MAXNUMBERSTEPS> theVolumeXaxis3;
  std::array<float, MAXNUMBERSTEPS> theVolumeYaxis1;
  std::array<float, MAXNUMBERSTEPS> theVolumeYaxis2;
  std::array<float, MAXNUMBERSTEPS> theVolumeYaxis3;
  std::array<float, MAXNUMBERSTEPS> theVolumeZaxis1;
  std::array<float, MAXNUMBERSTEPS> theVolumeZaxis2;
  std::array<float, MAXNUMBERSTEPS> theVolumeZaxis3;

  std::array<int, MAXNUMBERSTEPS> theMaterialID;
  std::array<std::string, MAXNUMBERSTEPS> theMaterialName;
  std::array<float, MAXNUMBERSTEPS> theMaterialX0;
  std::array<float, MAXNUMBERSTEPS> theMaterialLambda0;
  std::array<float, MAXNUMBERSTEPS> theMaterialDensity;

  std::array<int, MAXNUMBERSTEPS> theStepID;
  std::array<float, MAXNUMBERSTEPS> theStepInitialPt;
  std::array<float, MAXNUMBERSTEPS> theStepInitialEta;
  std::array<float, MAXNUMBERSTEPS> theStepInitialPhi;
  std::array<float, MAXNUMBERSTEPS> theStepInitialEnergy;
  std::array<float, MAXNUMBERSTEPS> theStepInitialPx;
  std::array<float, MAXNUMBERSTEPS> theStepInitialPy;
  std::array<float, MAXNUMBERSTEPS> theStepInitialPz;
  std::array<float, MAXNUMBERSTEPS> theStepInitialBeta;
  std::array<float, MAXNUMBERSTEPS> theStepInitialGamma;
  std::array<float, MAXNUMBERSTEPS> theStepInitialMass;
  std::array<float, MAXNUMBERSTEPS> theStepFinalPt;
  std::array<float, MAXNUMBERSTEPS> theStepFinalEta;
  std::array<float, MAXNUMBERSTEPS> theStepFinalPhi;
  std::array<float, MAXNUMBERSTEPS> theStepFinalEnergy;
  std::array<float, MAXNUMBERSTEPS> theStepFinalPx;
  std::array<float, MAXNUMBERSTEPS> theStepFinalPy;
  std::array<float, MAXNUMBERSTEPS> theStepFinalPz;
  std::array<float, MAXNUMBERSTEPS> theStepFinalBeta;
  std::array<float, MAXNUMBERSTEPS> theStepFinalGamma;
  std::array<float, MAXNUMBERSTEPS> theStepFinalMass;
  std::array<int, MAXNUMBERSTEPS> theStepPreProcess;
  std::array<int, MAXNUMBERSTEPS> theStepPostProcess;

  float theTrkLen;

  std::string thePVname;

  int thePVcopyNo;

  std::unique_ptr<MaterialBudgetCategorizer> myMaterialBudgetCategorizer;

  float theRadLen;
  float theIntLen;
  int stepN;
  bool allStepsToTree;
  bool isHGCal;  //HGCal mode
  bool isMtd;    //Mtd mode

  double densityConvertionFactor;
};

#endif
