import FWCore.ParameterSet.Config as cms

from DQMServices.Core.DQMEDAnalyzer import DQMEDAnalyzer
dtDataIntegrityTask = DQMEDAnalyzer('DTDataIntegrityTask',
                                     fedIntegrityFolder = cms.untracked.string('DT/FEDIntegrity'),
                                     nLinksForFatal     = cms.untracked.int32(15),
                                     processingMode     = cms.untracked.string('Online'),
				     dtFEDlabel         =  cms.InputTag('dtDataIntegrityUnpacker')
)

dtDataIntegrityTaskOffline = DQMEDAnalyzer('DTDataIntegrityROSOffline',
                                     getSCInfo = cms.untracked.bool(True),
                                     fedIntegrityFolder = cms.untracked.string('DT/FEDIntegrity'),
                                     dtDDULabel         = cms.InputTag('dtDataIntegrityUnpacker'),
                                     dtROS25Label       = cms.InputTag('dtDataIntegrityUnpacker'),
)

dtDataIntegrityUrosOffline = DQMEDAnalyzer('DTDataIntegrityTask',
                                     fedIntegrityFolder = cms.untracked.string('DT/FEDIntegrity'),
                                     nLinksForFatal     = cms.untracked.int32(15),
                                     processingMode     = cms.untracked.string('Offline'),
                                     dtFEDlabel         =  cms.InputTag('dtDataIntegrityUnpacker')
)

from Configuration.Eras.Modifier_run2_DT_2018_cff import run2_DT_2018
run2_DT_2018.toReplaceWith(dtDataIntegrityTaskOffline, dtDataIntegrityUrosOffline)

