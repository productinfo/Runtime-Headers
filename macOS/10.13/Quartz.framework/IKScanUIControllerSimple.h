/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKScanUIControllerSimple : IKScanUIController {
    unsigned long long  _documentType;
    IKScanUIViewSimple * _scanUIViewSimple;
    NSIndexSet * _supportedDocumentTypes;
    BOOL  hasOverviewScanResult;
}

@property (nonatomic, readwrite) unsigned long long documentType;
@property (atomic, readwrite) BOOL hasOverviewScanResult;
@property (atomic, readwrite) IKScanUIViewSimple *scanUIViewSimple;
@property (atomic, readwrite, copy) NSIndexSet *supportedDocumentTypes;

- (void)addTroubleShootingInfo:(id)arg1;
- (void)cleanup;
- (void)cleanupDocumentFeederView;
- (void)cleanupFlatbedView;
- (void)copySettingsFromFunctionalUnit:(id)arg1;
- (void)detectSeparateItems;
- (void)didCompleteOverviewScanWithError:(id)arg1;
- (void)didCompleteScanToURL:(id)arg1;
- (void)didCompleteScansToURLs:(id)arg1;
- (void)didReceiveButtonPress:(id)arg1;
- (unsigned long long)documentType;
- (void)downloadsDirectoryChanged:(id)arg1;
- (void)finishedScanSelectionAtIndex:(long long)arg1;
- (void)functionalUnitDidChange:(id)arg1;
- (void)functionalUnitWillSwitchAway:(id)arg1;
- (void)handleAutoDetectionResults:(id)arg1;
- (void)handleOverviewDoneDetectEnclosingBox;
- (void)handleOverviewDoneDetectSeparateItems;
- (void)handleOverviewDoneNoAutoDetection;
- (void)handleUserPressedScanButton;
- (BOOL)hasOverviewScanResult;
- (void)ignoreButtonPress:(id)arg1;
- (id)initWithScannerDeviceViewHandler:(id)arg1;
- (void)initialSetup;
- (void)layoutSubviewsAndRedraw;
- (void)logUsage;
- (void)overviewScanDidFinish:(id)arg1;
- (void)overviewScanDidStart;
- (void)postProcessApplicationChanged:(id)arg1;
- (void)progressCancelButtonPressed;
- (void)restoreDefaultSettings;
- (void)saveDefaultSettings;
- (void)scanAutoDetectedAreas;
- (void)scanDidFinish;
- (void)scanDidStart;
- (void)scanFailed:(id)arg1 error:(id)arg2;
- (void)scanSizePopupChanged:(id)arg1;
- (void)scanSizePopupDetectModeChanged:(id)arg1;
- (id)scanUIViewSimple;
- (void)scannerDeviceChanged:(id)arg1;
- (BOOL)sendDelegateWantsToUseScannedItemsMessage;
- (void)setDocumentLoaded:(BOOL)arg1;
- (void)setDocumentType:(unsigned long long)arg1;
- (void)setHasOverviewScanResult:(BOOL)arg1;
- (void)setScanAreaDocumentViewMode;
- (void)setScanAreaPreviewMode;
- (void)setScanPercentDone:(double)arg1;
- (void)setScanUIEnabled:(BOOL)arg1;
- (void)setScanUIViewSimple:(id)arg1;
- (void)setStatusText:(id)arg1;
- (void)setSupportedDocumentTypes:(id)arg1;
- (void)setTempStatusText:(id)arg1 duration:(long long)arg2;
- (void)setup;
- (BOOL)setupScanRectAtIndex:(unsigned long long)arg1 ikScan:(id)arg2;
- (id)supportedDocumentTypes;
- (void)switchToDocumentFeederView:(id)arg1;
- (void)switchToFlatbedView:(id)arg1;
- (void)updateNoImageSize;
- (void)updateOverviewResolution:(unsigned long long)arg1;
- (void)updateScannerDeviceUI;
- (void)useDocumentFeederCheckboxChanged:(id)arg1;
- (void)userCancelsScan;
- (void)userPressedAddToDocumentButton:(id)arg1;
- (void)userPressedDoneButton:(id)arg1;
- (void)userPressedScanButton:(id)arg1;
- (void)userResquestsAutoScanWithAutoDetection;
- (void)userResquestsDocumentFeederScan;
- (void)userResquestsFixedSizeAutoScan;
- (void)userResquestsOverviewScan;
- (void)userSelectedScannerDevice:(id)arg1;
- (unsigned long long)userSpecifedOverviewResolution;

@end
