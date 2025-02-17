import FWCore.ParameterSet.Config as cms

from DQMOffline.Trigger.JetMonitor_cfi import hltJetMETmonitoring
from DQMOffline.Trigger.HTMonitor_cfi import hltHTmonitoring
from DQMOffline.Trigger.MjjMonitor_cfi import hltMjjmonitoring
from DQMOffline.Trigger.SoftdropMonitor_cfi import hltSoftdropmonitoring
from DQMOffline.Trigger.B2GTnPMonitor_cfi import B2GegmGsfElectronIDsForDQM,B2GegHLTDQMOfflineTnPSource
from DQMOffline.Trigger.TopMonitor_cfi import hltTOPmonitoring

# B2G triggers:
# HLT_PFHT1050_v*
# HLT_AK8PFJet500_v*
# HLT_AK8PFHT750_TrimMass50_v*
# HLT_AK8PFJet380_TrimMass30_v*
# HLT_AK8PFHT800_TrimMass50_v*
# HLT_AK8PFJet400_TrimMass30_v*
# HLT_AK8PFHT850_TrimMass50_v*
# HLT_AK8PFJet420_TrimMass30_v*
# HLT_AK8PFHT900_TrimMass50_v*
# HLT_AK8PFHT700_TrimR0p1PT0p03Mass50

PFHT1050_Mjjmonitoring = hltMjjmonitoring.clone(
    FolderName = 'HLT/B2G/PFHT1050',
    jets = "ak8PFJetsPuppi",
    jetSelection = "pt > 200 && eta < 2.4",
    numGenericTriggerEventPSet= dict(hltPaths = ["HLT_PFHT1050_v*"])     
)

PFHT1050_Softdropmonitoring = hltSoftdropmonitoring.clone(
    FolderName = 'HLT/B2G/PFHT1050',
    jetSelection = "pt > 65 && eta < 2.4",
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_PFHT1050_v*"])        
)

AK8PFJet500_Mjjmonitoring = hltMjjmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFJet500',
    jets = "ak8PFJetsPuppi",
    jetSelection = "pt > 200 && eta < 2.4",
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFJet500_v*"])
)

AK8PFJet500_Softdropmonitoring = hltSoftdropmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFJet500',
    jetSelection = "pt > 65 && eta < 2.4",
    numGenericTriggerEventPSet= dict(hltPaths = ["HLT_AK8PFJet500_v*"])
)

AK8PFHT750_TrimMass50_HTmonitoring = hltHTmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFHT750_TrimMass50',
    jets = "ak8PFJetsPuppi",
    jetSelection      = "pt > 0 && eta < 2.5",
    jetSelection_HT = "pt > 200 && eta < 2.5",
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFHT750_TrimMass50_v*"])
)

AK8PFHT750_TrimMass50_Mjjmonitoring = hltMjjmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFHT750_TrimMass50',
    jets = "ak8PFJetsPuppi",
    jetSelection = "pt > 200 && eta < 2.4",
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFHT750_TrimMass50_v*"])
)

AK8PFHT750_TrimMass50_Softdropmonitoring = hltSoftdropmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFHT750_TrimMass50',
    jetSelection = "pt > 65 && eta < 2.4",
    numGenericTriggerEventPSet= dict(hltPaths = ["HLT_AK8PFHT750_TrimMass50_v*"])
)

AK8PFHT800_TrimMass50_HTmonitoring = hltHTmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFHT800_TrimMass50',
    jets = "ak8PFJetsPuppi",
    jetSelection      = "pt > 0 && eta < 2.5",
    jetSelection_HT = "pt > 200 && eta < 2.5",
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFHT800_TrimMass50_v*"])
)

AK8PFHT800_TrimMass50_Mjjmonitoring = hltMjjmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFHT800_TrimMass50',
    jets = "ak8PFJetsPuppi",
    jetSelection = "pt > 200 && eta < 2.4",
    numGenericTriggerEventPSet= dict(hltPaths = ["HLT_AK8PFHT800_TrimMass50_v*"])
)

AK8PFHT800_TrimMass50_Softdropmonitoring = hltSoftdropmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFHT800_TrimMass50',
    jetSelection = "pt > 65 && eta < 2.4",
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFHT800_TrimMass50_v*"])
)

AK8PFHT850_TrimMass50_HTmonitoring = hltHTmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFHT850_TrimMass50',
    jets = "ak8PFJetsPuppi",
    jetSelection      = "pt > 0 && eta < 2.5",
    jetSelection_HT = "pt > 200 && eta < 2.5",
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFHT850_TrimMass50_v*"])
)

AK8PFHT850_TrimMass50_Mjjmonitoring = hltMjjmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFHT850_TrimMass50',
    jets = "ak8PFJetsPuppi",
    jetSelection = "pt > 200 && eta < 2.4",
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFHT850_TrimMass50_v*"])
)

AK8PFHT850_TrimMass50_Softdropmonitoring = hltSoftdropmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFHT850_TrimMass50',
    jetSelection = "pt > 65 && eta < 2.4",
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFHT850_TrimMass50_v*"])
)

AK8PFHT900_TrimMass50_HTmonitoring = hltHTmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFHT900_TrimMass50',
    jets = "ak8PFJetsPuppi",
    jetSelection      = "pt > 0 && eta < 2.5",
    jetSelection_HT = "pt > 200 && eta < 2.5",
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFHT900_TrimMass50_v*"])
)

AK8PFHT900_TrimMass50_Mjjmonitoring = hltMjjmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFHT900_TrimMass50',
    jets = "ak8PFJetsPuppi",
    jetSelection = "pt > 200 && eta < 2.4",
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFHT900_TrimMass50_v*"])
)

AK8PFHT900_TrimMass50_Softdropmonitoring = hltSoftdropmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFHT900_TrimMass50',
    jetSelection = "pt > 65 && eta < 2.4",
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFHT900_TrimMass50_v*"])
)


AK8PFJet360_TrimMass30_PromptMonitoring = hltJetMETmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFJet360_TrimMass30',
    ptcut = 360,
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFJet360_TrimMass30_v*"])
)

AK8PFJet380_TrimMass30_PromptMonitoring = hltJetMETmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFJet380_TrimMass30',
    ptcut = 380,
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFJet380_TrimMass30_v*"])
)


AK8PFJet400_TrimMass30_PromptMonitoring = hltJetMETmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFJet400_TrimMass30',
    ptcut = 400,
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFJet400_TrimMass30_v*"])
)

AK8PFJet420_TrimMass30_PromptMonitoring = hltJetMETmonitoring.clone(
    FolderName = 'HLT/B2G/AK8PFJet420_TrimMass30',
    ptcut = 420,
    numGenericTriggerEventPSet = dict(hltPaths = ["HLT_AK8PFJet420_TrimMass30_v*"])
)

hltDQMonitorB2G_MuEle = hltTOPmonitoring.clone(
    FolderName = 'HLT/B2G/Dileptonic/HLT_MuXX_EleXX_CaloIdL_MW',
    nelectrons = 1,
    eleSelection = 'pt>20 & abs(eta)<2.5',
    nmuons = 1,
    muoSelection = 'pt>20 & abs(eta)<2.4 & ((pfIsolationR04.sumChargedHadronPt + max(pfIsolationR04.sumNeutralHadronEt + pfIsolationR04.sumPhotonEt - (pfIsolationR04.sumPUPt)/2.,0.))/pt < 0.25)  & isPFMuon & (isTrackerMuon || isGlobalMuon)',
    numGenericTriggerEventPSet = dict(hltPaths = ['HLT_Mu37_Ele27_CaloIdL_MW_v*', 'HLT_Mu27_Ele37_CaloIdL_MW_v*'])
)

hltDQMonitorB2G_MuTkMu = hltTOPmonitoring.clone(
    FolderName = 'HLT/B2G/Dileptonic/HLT_Mu37_TkMu27',
    nmuons = 2,
    muoSelection = 'pt>20 & abs(eta)<2.4 & ((pfIsolationR04.sumChargedHadronPt + max(pfIsolationR04.sumNeutralHadronEt + pfIsolationR04.sumPhotonEt - (pfIsolationR04.sumPUPt)/2.,0.))/pt < 0.25)  & isPFMuon & (isTrackerMuon || isGlobalMuon)',
    numGenericTriggerEventPSet = dict(hltPaths = ['HLT_Mu37_TkMu27_v*'])
)

b2gMonitorHLT = cms.Sequence(

    PFHT1050_Mjjmonitoring +
#    PFHT1050_Softdropmonitoring +

    AK8PFJet500_Mjjmonitoring +
#    AK8PFJet500_Softdropmonitoring +

    AK8PFHT750_TrimMass50_HTmonitoring +
    AK8PFHT750_TrimMass50_Mjjmonitoring +
#    AK8PFHT750_TrimMass50_Softdropmonitoring +

    AK8PFHT800_TrimMass50_HTmonitoring +
    AK8PFHT800_TrimMass50_Mjjmonitoring +
#    AK8PFHT800_TrimMass50_Softdropmonitoring +

    AK8PFHT850_TrimMass50_HTmonitoring +
    AK8PFHT850_TrimMass50_Mjjmonitoring +
#    AK8PFHT850_TrimMass50_Softdropmonitoring +

    AK8PFHT900_TrimMass50_HTmonitoring +
    AK8PFHT900_TrimMass50_Mjjmonitoring +
#    AK8PFHT900_TrimMass50_Softdropmonitoring +

    AK8PFJet360_TrimMass30_PromptMonitoring +
    AK8PFJet380_TrimMass30_PromptMonitoring +

    AK8PFJet400_TrimMass30_PromptMonitoring +
    AK8PFJet420_TrimMass30_PromptMonitoring +

    B2GegHLTDQMOfflineTnPSource

  * hltDQMonitorB2G_MuEle
  * hltDQMonitorB2G_MuTkMu

  , cms.Task(B2GegmGsfElectronIDsForDQM) ## unschedule execution [Use of electron VID requires this module being executed first]
)

## as reported in https://github.com/cms-sw/cmssw/issues/24444
## it turned out that all softdrop modules rely on a jet collection which is available only if the miniAOD step is run @Tier0
## ==> it is fine in the PromptReco workflow, but this collection is not available in the Express reconstruction
## in addition, it is not available in the AOD (!!!!) ==> these modules needs to be run *WithRECO* step workflow (actually w/ the miniAOD step ....)
b2gHLTDQMSourceWithRECO = cms.Sequence(
    PFHT1050_Softdropmonitoring +
    AK8PFJet500_Softdropmonitoring +
    AK8PFHT750_TrimMass50_Softdropmonitoring +
    AK8PFHT800_TrimMass50_Softdropmonitoring +
    AK8PFHT850_TrimMass50_Softdropmonitoring +
    AK8PFHT900_TrimMass50_Softdropmonitoring
)

b2gHLTDQMSourceExtra = cms.Sequence(
)
