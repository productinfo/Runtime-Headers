/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDocument : NSObject <NSFilePresenter, NSUIActivityProvider, NSUserInterfaceValidations> {
    id  _displayName;
    struct __docFlags { 
        unsigned int inClose : 1; 
        unsigned int hasUndoManager : 1; 
        unsigned int unused : 1; 
        unsigned int reconciledToFileName : 1; 
        unsigned int checkingDisplayName : 1; 
        unsigned int hasInvalidRestorableState : 1; 
        unsigned int hasEverHadInvalidRestorableState : 1; 
        unsigned int RESERVED : 25; 
    }  _docFlags;
    long long  _documentReserved;
    NSString * _fileType;
    NSURL * _fileURL;
    NSPrintInfo * _printInfo;
    id  _privateData;
    NSString * _savePanelSaveType;
    NSUndoManager * _undoManager;
    NSWindow * _window;
    id  _windowControllers;
    NSView * savePanelAccessory;
}

@property (atomic, readonly) NSPrintOperation *PDFPrintOperation;
@property (atomic, readwrite, copy) NSURL *autosavedContentsFileURL;
@property (atomic, readonly, copy) NSString *autosavingFileType;
@property (atomic, readonly) BOOL autosavingIsImplicitlyCancellable;
@property (atomic, readonly, copy) NSURL *backupFileURL;
@property (getter=isBrowsingVersions, atomic, readonly) BOOL browsingVersions;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, copy) NSString *displayName;
@property (getter=isDocumentEdited, atomic, readonly) BOOL documentEdited;
@property (getter=isDraft, atomic, readwrite) BOOL draft;
@property (getter=isEntireFileLoaded, atomic, readonly) BOOL entireFileLoaded;
@property (atomic, readwrite, copy) NSDate *fileModificationDate;
@property (atomic, readonly) BOOL fileNameExtensionWasHiddenInLastRunSavePanel;
@property (atomic, readwrite, copy) NSString *fileType;
@property (atomic, readonly, copy) NSString *fileTypeFromLastRunSavePanel;
@property (atomic, readwrite, copy) NSURL *fileURL;
@property (atomic, readonly) BOOL hasUnautosavedChanges;
@property (atomic, readwrite) BOOL hasUndoManager;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isInViewingMode, atomic, readonly) BOOL inViewingMode;
@property (atomic, readonly) BOOL keepBackupFile;
@property (atomic, readwrite, copy) NSString *lastComponentOfFileName;
@property (getter=isLocked, atomic, readonly) BOOL locked;
@property (atomic, readonly) NSScriptObjectSpecifier *objectSpecifier;
@property (atomic, readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (atomic, readonly, copy) NSURL *presentedItemURL;
@property (atomic, readonly, copy) NSURL *primaryPresentedItemURL;
@property (atomic, readwrite, copy) NSPrintInfo *printInfo;
@property (atomic, readonly) BOOL shouldRunSavePanelWithAccessoryView;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, retain) NSUndoManager *undoManager;
@property (atomic, readwrite, retain) NSUserActivity *userActivity;
@property (atomic, readonly, copy) NSArray *windowControllers;
@property (atomic, readonly) NSWindow *windowForSheet;
@property (atomic, readonly, copy) NSString *windowNibName;

+ (void)_alertSheetDidOrderOnScreen:(id)arg1;
+ (BOOL)_autosavesDrafts;
+ (BOOL)_autosavesInPlace;
+ (BOOL)_autosavingIsQuestionableAtURL:(id)arg1 errorInfo:(id*)arg2;
+ (long long)_autosavingSafetyConcernForURL:(id)arg1 ignoringAutolocking:(BOOL)arg2;
+ (void)_autosavingTimerDidFireSoContinue:(id)arg1;
+ (id)_backupFileNameForURL:(id)arg1;
+ (long long)_bucketForNonModalErrorCode:(long long)arg1;
+ (BOOL)_canTryToOverrideAutosavingSafetyConcern:(long long)arg1;
+ (BOOL)_conflictsExistForFileAtURL:(id)arg1;
+ (id)_destinationURLForRenamingItemAtURL:(id)arg1 directoryURL:(id)arg2 displayName:(id)arg3 fileType:(id)arg4 proposedName:(id)arg5 fallbackExtension:(id)arg6 outFileName:(id*)arg7 extensionHidden:(BOOL*)arg8 error:(id*)arg9;
+ (id)_directoryURLForNewDocuments;
+ (id)_errorDescriptionForAutosavingSafetyConcern:(long long)arg1 presentableFileName:(id)arg2;
+ (id)_errorDescriptionForUnlockingFailureWithUnderlyingError:(id)arg1 presentableFileName:(id)arg2;
+ (id)_errorFailureReasonForAutosavingSafetyConcern:(long long)arg1;
+ (id)_errorFailureReasonForUnlockingFailureWithUnderlyingError:(id)arg1;
+ (id)_errorForAutosavingSafetyConcern:(long long)arg1 displayName:(id)arg2 userInfo:(id)arg3;
+ (BOOL)_fileIsOldEnoughToQuestionAutosavingAtURL:(id)arg1;
+ (id)_fileModificationDateForURL:(id)arg1;
+ (id)_fileURLForNewDocumentWithBaseName:(id)arg1 extension:(id)arg2 isDuplicate:(BOOL)arg3 number:(long long*)arg4 unique:(BOOL)arg5 directoryURL:(id)arg6;
+ (void)_handleConflictsForDocument:(id)arg1 atURL:(id)arg2 modalForWindow:(id)arg3 completionHandler:(id)arg4;
+ (void)_handleConflictsForDocumentAtURL:(id)arg1 modalForWindow:(id)arg2 completionHandler:(id)arg3;
+ (BOOL)_hasOverrideForSelector:(SEL)arg1;
+ (BOOL)_isICloudEnabled;
+ (BOOL)_isURL:(id)arg1 containedByURL:(id)arg2;
+ (id)_nonSandboxedURLForURL:(id)arg1;
+ (void)_openPurchaseICloudStorageUI;
+ (void)_parseBaseDraftName:(id*)arg1 number:(long long*)arg2 fromDisplayName:(id)arg3;
+ (void)_parseBaseName:(id*)arg1 number:(long long*)arg2 fromDisplayName:(id)arg3;
+ (BOOL)_parseName:(id*)arg1 number:(long long*)arg2 fromDisplayName:(id)arg3 withTemplate:(id)arg4;
+ (void)_presentNameConflictAlertForURL:(id)arg1 window:(id)arg2 thenContinue:(id)arg3;
+ (unsigned long long)_presentedDocumentTypeForContentType:(id)arg1;
+ (BOOL)_presentsVersionsUserInterface;
+ (BOOL)_preservesVersions;
+ (void)_resolveConflictsForDocument:(id)arg1 atURL:(id)arg2 byKeepingVersions:(id)arg3 otherVersions:(id)arg4 currentVersion:(id)arg5 completionHandler:(id)arg6;
+ (void)_setTagNames:(id)arg1 forURL:(id)arg2;
+ (BOOL)_shouldShowUbiquityConflictPanel;
+ (void)_something:(id)arg1 wasPresentedWithResult:(long long)arg2 soContinue:(id)arg3;
+ (id)_sortedNonModalErrors:(id)arg1;
+ (BOOL)_stillObservesWillCloseUndoGroup;
+ (id)_tagNamesForURL:(id)arg1;
+ (id)_uniqueAutosavedContentsURLWithFileNameExtension:(id)arg1;
+ (BOOL)_url:(id)arg1 matchesURL:(id)arg2;
+ (id)_userHandleForSpotlight;
+ (BOOL)_usesICloudDocumentLibrary;
+ (BOOL)_validateDraftDocumentName:(id)arg1;
+ (BOOL)_validateDuplicateDocumentName:(id)arg1 withOriginalName:(id)arg2;
+ (id)_willPresentConflictResolutionError:(id)arg1;
+ (BOOL)autosavesDrafts;
+ (BOOL)autosavesInPlace;
+ (BOOL)canConcurrentlyReadDocumentsOfType:(id)arg1;
+ (void)initialize;
+ (BOOL)isNativeType:(id)arg1;
+ (BOOL)preservesVersions;
+ (id)readableTypes;
+ (BOOL)usesUbiquitousStorage;
+ (id)writableTypes;

- (id)PDFPrintOperation;
- (void)__setDisplayName:(id)arg1;
- (void)_addNonModalError:(id)arg1;
- (void)_addRevertItemsToMenu:(id)arg1;
- (BOOL)_allUnautosavedChangesAreDiscardable;
- (void)_attemptNonModalErrorRecovery:(id)arg1;
- (void)_attemptToFreeDiskSpace;
- (id)_autoDuplicateOriginalDocumentURL;
- (void)_automaticallyDuplicateThenUpdateChangeCount:(unsigned long long)arg1;
- (void)_autosaveDocumentBecauseOfTimerWithCancellability:(BOOL)arg1;
- (void)_autosaveDocumentWithDelegate:(id)arg1 didAutosaveSelector:(SEL)arg2 implicitCancellability:(BOOL)arg3 contextInfo:(void*)arg4;
- (unsigned long long)_autosaveElsewhereReason;
- (double)_autosavingDelay;
- (id)_autosavingError;
- (long long)_autosavingPossibilityConcern;
- (void)_beginVersionsButtonUpdates;
- (id)_bookmarkData;
- (BOOL)_canDisplayDocumentPopovers;
- (BOOL)_canImplicitlySaveDocument;
- (BOOL)_canNonModallyPresentAutosavingError:(id)arg1;
- (BOOL)_canRevertToDiscardRecentChanges;
- (BOOL)_canRevertToSaved;
- (BOOL)_canSave;
- (BOOL)_cancelTitleEditing;
- (void)_changeWasDone:(id)arg1;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (void)_changeWillBeDone:(id)arg1;
- (void)_checkAdvisoryAutosavingSafety;
- (BOOL)_checkAutosavingAndReturnError:(id*)arg1;
- (void)_checkAutosavingAndUpdateLockedState;
- (void)_checkAutosavingIgnoringSafetyChecksThenContinue:(id)arg1;
- (BOOL)_checkAutosavingPossibilityAndReturnError:(id*)arg1;
- (void)_checkAutosavingThenContinue:(id)arg1;
- (void)_checkAutosavingThenUpdateChangeCount:(unsigned long long)arg1;
- (BOOL)_checkAutosavingThenUpdateChangeCountShouldInterruptMainThreadBlocking;
- (void)_checkShouldRevertToChosenVersionThenContinue:(id)arg1;
- (void)_cleanupUbiquitousQuery;
- (void)_clearNonModalErrorForBucket:(long long)arg1;
- (void)_clearNonModalErrorsForSaveOperation:(unsigned long long)arg1;
- (void)_closeOtherDocumentWithURL:(id)arg1;
- (void)_commitEditingThenContinue:(id)arg1;
- (void)_commitEditingWithDelegate:(id)arg1 didSomethingSelector:(SEL)arg2 contextInfo:(void*)arg3 thenContinue:(id)arg4;
- (void)_commonSetCurrentStateForTitlebarPopoverViewBridgeInfo:(id)arg1;
- (void)_configureTitlebarPopoverViewBridgeInfo:(id)arg1;
- (BOOL)_coordinateReadingContentsAndReturnError:(id*)arg1 byAccessor:(id)arg2;
- (id)_currentFileModificationDate;
- (unsigned long long)_currentFileSize;
- (void)_disablePeriodicAutosaving;
- (void)_discardEditing;
- (id)_displayNameForDuplicating;
- (id)_displayNameForURL:(id)arg1;
- (long long)_documentEditingState;
- (BOOL)_documentShowsPanelOnClose;
- (BOOL)_documentShowsPanelOnCloseAndIsVisibleInWindow:(BOOL*)arg1;
- (long long)_documentUniquingNumber;
- (id)_draftHashForName:(id)arg1;
- (id)_duplicateDocumentDestinationURL;
- (BOOL)_duplicateHasAutomaticallyChosenName;
- (void)_editor:(id)arg1 didCommit:(BOOL)arg2 soContinue:(id)arg3;
- (void)_enablePeriodicAutosaving;
- (void)_endVersionsButtonUpdates;
- (void)_ensureDocumentIsUnlockedForMoveOrRenameThenContinue:(id)arg1;
- (id)_errorForAutosavingSafetyConcern:(long long)arg1 allowingDuplicate:(BOOL)arg2 userInfo:(id)arg3;
- (id)_errorForExistingFileWhenChangingTypesWithURL:(id)arg1;
- (id)_errorForOverwrittenFileWithSandboxExtension:(char *)arg1 andSaver:(id)arg2;
- (id)_errorForUnlockFailureWithUnderlyingError:(id)arg1;
- (id)_errorUserInfoForNonModalErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (id)_fileURLForNewDocumentWithFileSystemUniquing:(BOOL)arg1 customDirectoryURL:(id)arg2;
- (void)_handleConflicts;
- (void)_handleDocumentFileChanges:(id)arg1;
- (void)_handleOtherFromDocumentTitlebarPopoverThenContinue:(id)arg1;
- (void)_handlePurgedDocumentWithURL:(id)arg1 completionHandler:(id)arg2;
- (void)_handleRemoteDeletionValidationWithCompletionHandler:(id)arg1;
- (BOOL)_initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id*)arg4;
- (BOOL)_initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (BOOL)_initWithType:(id)arg1 error:(id*)arg2;
- (BOOL)_isAutoDuplicate;
- (BOOL)_isAutoDuplicateFromEmailAttachment;
- (BOOL)_isBeingEdited;
- (BOOL)_isDuplicate;
- (BOOL)_isDuplicateDocumentDestinationWritable;
- (BOOL)_isEmailAttachment;
- (BOOL)_isExpendableAsUnsavedDocument;
- (BOOL)_isHandlingConflicts;
- (BOOL)_isLocatedByURL:(id)arg1 becauseOfAutosavedContentsFile:(BOOL*)arg2;
- (BOOL)_isOtherWellKnownAttachment;
- (BOOL)_isPeriodicAutosavingEnabled;
- (BOOL)_isSharingParticipant;
- (BOOL)_isViewOnlyForSharing;
- (id)_localizedSharingOwnerName;
- (id)_makeNonModalErrorOfType:(long long)arg1 underlyingError:(id)arg2;
- (void)_moveDocumentToURL:(id)arg1 andHideExtension:(BOOL)arg2 completionHandler:(id)arg3;
- (void)_moveToURL:(id)arg1 completionHandler:(id)arg2;
- (id)_nonModalError;
- (id)_nonModalErrors;
- (id)_openPanelForOtherInMovePanel:(id)arg1;
- (void)_operationWithSandboxToken:(long long)arg1 didSucceed:(BOOL)arg2;
- (id)_originalDisplayName;
- (id)_originalDocumentURL;
- (void)_populateRevertToMenu:(id)arg1;
- (void)_prepareToMoveToURL:(id)arg1 completionHandler:(id)arg2;
- (id)_preparedMovePanel;
- (void)_presentAlertForRemoteDeletionValidationWithCompletionHandler:(id)arg1;
- (void)_presentAlertWithPrimaryMessage:(id)arg1 secondaryMessage:(id)arg2 defaultButtonLabel:(id)arg3 alternateButtonLabel:(id)arg4 otherButtonLabel:(id)arg5 ignoreAccidentalEvents:(BOOL)arg6 thenContinue:(id)arg7;
- (void)_presentAlertWithPrimaryMessage:(id)arg1 secondaryMessage:(id)arg2 firstButtonLabel:(id)arg3 isDefault:(BOOL)arg4 alternateButtonLabel:(id)arg5 otherButtonLabel:(id)arg6 ignoreAccidentalEvents:(BOOL)arg7 showSuppressionButton:(BOOL)arg8 thenContinue:(id)arg9;
- (void)_presentAlertWithPrimaryMessage:(id)arg1 secondaryMessage:(id)arg2 firstButtonLabel:(id)arg3 isDefault:(BOOL)arg4 alternateButtonLabel:(id)arg5 otherButtonLabel:(id)arg6 ignoreAccidentalEvents:(BOOL)arg7 thenContinue:(id)arg8;
- (void)_presentError:(id)arg1 ignoreAccidentalEvents:(BOOL)arg2 thenContinue:(id)arg3;
- (void)_presentError:(id)arg1 thenContinue:(id)arg2;
- (void)_presentErrors:(id)arg1 thenContinue:(id)arg2;
- (id)_presentableFileNameForSaveOperation:(unsigned long long)arg1 url:(id)arg2;
- (id)_presentedItemTemporaryVersionStorageIdentifier;
- (BOOL)_presentsVersionsUserInterface;
- (BOOL)_preventEditing;
- (id)_printJobTitle;
- (void)_readFileIsDraft;
- (BOOL)_reconcileDisplayNameAndTrackingInfoToFileURL;
- (id)_recoverableRenameFileError:(id)arg1 proposedName:(id)arg2 destinationURL:(id)arg3 retryRenamer:(id)arg4 renameCanceler:(id)arg5;
- (id)_recoverableVariantOfOverwritingError:(id)arg1 forOperation:(unsigned long long)arg2 url:(id)arg3 type:(id)arg4 temporaryDirectoryURL:(id)arg5 newContentsURL:(id)arg6 writer:(id)arg7;
- (void)_releaseUndoManager;
- (void)_renameWithProposedName:(id)arg1 grantHandler:(id)arg2 destinationURL:(id)arg3 hideExtensions:(BOOL)arg4 nameChecked:(BOOL)arg5 trashChecked:(BOOL)arg6 overwriteChecked:(BOOL)arg7 completionHandler:(id)arg8;
- (id)_replacementTypeForSaveAsInsteadOfMoveToURL:(id)arg1 modifiedURL:(id*)arg2 hideExtension:(BOOL*)arg3;
- (void)_requestViewControllerForDocumentTitlebarPopover:(id)arg1 thenDisplayPopoverUsingBlock:(id)arg2;
- (void)_rescheduleAutosaving;
- (BOOL)_revertToAlternateContents:(id)arg1 preservingFirst:(BOOL)arg2 error:(id*)arg3;
- (void)_revertToChosenVersion:(id)arg1 orAlternateContents:(id)arg2 thenContinue:(id)arg3;
- (BOOL)_revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (void)_revertToDiscardRecentChangesOrBrowseVersions:(BOOL)arg1 thenContinue:(id)arg2;
- (BOOL)_revertToDiscardRecentChangesPreservingFirst:(BOOL)arg1 error:(id*)arg2;
- (void)_revertToSavedThenContinue:(id)arg1;
- (BOOL)_revertToVersion:(id)arg1 preservingFirst:(BOOL)arg2 error:(id*)arg3;
- (void)_revertToVersion:(id)arg1 thenContinue:(id)arg2;
- (void)_revertToVersionForTag:(long long)arg1 thenContinue:(id)arg2;
- (void)_runModalOpenPanel:(id)arg1 thenContinue:(id)arg2;
- (void)_saveIfNecessaryWithDelegate:(id)arg1 didSaveSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(BOOL)arg2;
- (void)_setAutoDuplicate:(BOOL)arg1;
- (void)_setAutoDuplicateFromEmailAttachment:(BOOL)arg1;
- (void)_setAutoDuplicateOriginalDocumentURL:(id)arg1;
- (void)_setAutosavingError:(id)arg1 presented:(BOOL)arg2;
- (void)_setDisplayName:(id)arg1;
- (void)_setDocumentUniquingNumber:(long long)arg1;
- (void)_setDuplicate:(BOOL)arg1;
- (void)_setDuplicateDocumentDestinationURL:(id)arg1;
- (void)_setFileAtURL:(id)arg1 isDraft:(BOOL)arg2;
- (void)_setFileIsDraft:(BOOL)arg1;
- (void)_setFileTagNames:(id)arg1;
- (void)_setFileURL:(id)arg1;
- (void)_setFileURLSandboxExtensionToken:(long long)arg1;
- (void)_setHandlingConflicts:(BOOL)arg1;
- (void)_setNonModalErrors:(id)arg1;
- (void)_setOriginalDisplayName:(id)arg1;
- (void)_setOriginalDocumentURL:(id)arg1;
- (void)_setShowAutosaveButton:(BOOL)arg1;
- (void)_setSuppressWindowTitleDisplayNameEmbellishment:(BOOL)arg1;
- (void)_setTagNames:(id)arg1;
- (BOOL)_shouldAutomaticallyDuplicate;
- (BOOL)_shouldDeleteOnClose;
- (BOOL)_shouldModallyPresentAutosavingError:(id)arg1;
- (BOOL)_shouldSaveDuplicateAtDestinationWithUserEnteredName:(BOOL)arg1;
- (BOOL)_shouldSetDraftAttributeForSaveOperation:(unsigned long long)arg1;
- (BOOL)_shouldSetTagsForSaveOperation:(unsigned long long)arg1;
- (BOOL)_shouldShowAutosaveButtonForWindow:(id)arg1;
- (void)_showAlertForPurgedDocumentWithAlternateContents:(id)arg1;
- (id)_silentlyRecoverableVariantOfDiskFullError:(id)arg1 resaver:(id)arg2;
- (id)_silentlyRecoverableVariantOfSavingError:(id)arg1 resaver:(id)arg2;
- (void)_something:(id)arg1 didSomething:(BOOL)arg2 soContinue:(id)arg3;
- (void)_something:(id)arg1 didSomethingSoContinue:(id)arg2;
- (void)_something:(id)arg1 wasPresentedWithResult:(long long)arg2 soContinue:(id)arg3;
- (void)_somethingDidSomething:(BOOL)arg1 soContinue:(id)arg2;
- (BOOL)_suppressWindowTitleDisplayNameEmbellishment;
- (void)_synchronizeWindowTitles;
- (id)_tabbingIdentifier;
- (id)_tagNames;
- (id)_topEditor;
- (id)_transferWindowOwnership;
- (void)_ubiquitousQueryUpdate:(id)arg1;
- (void)_ubiquityIdentityChanged;
- (BOOL)_unlockAndReturnError:(id*)arg1;
- (void)_updateAfterRevertingToContentsOfOwnFileURL:(id)arg1 ofType:(id)arg2;
- (void)_updateDocumentEditedAndAnimate:(BOOL)arg1;
- (void)_updateLockedStateWithAutosavingSafetyError:(id)arg1;
- (void)_updatePersistentVersionsAfterRevertingToVersion:(id)arg1;
- (void)_updateStateFromEdited:(BOOL)arg1 recentChanges:(BOOL)arg2;
- (void)_updateStateFromEdited:(BOOL)arg1 showsPanel:(BOOL)arg2 recentChanges:(BOOL)arg3;
- (void)_updateSuddenTermination;
- (void)_updateTitleForMenuItem:(id)arg1 originalTitle:(id)arg2;
- (void)_updateTitlebarPopoverViewBridgeInfo:(id)arg1;
- (void)_updateUbiquitousQuery;
- (void)_updateWindowControllersWithNonModalError:(id)arg1;
- (void)_updateWindowControllersWithShowsPanelOnClose:(BOOL)arg1;
- (void)_waitForEditorCommittingThenPerformBlock:(id)arg1;
- (void)_warmupTitlebarPopover;
- (id)_willPresentMovingError:(id)arg1;
- (id)_willPresentPrintingError:(id)arg1;
- (id)_willPresentRevertingError:(id)arg1;
- (id)_willPresentSavingError:(id)arg1 withURL:(id)arg2 ofType:(id)arg3 forOperation:(unsigned long long)arg4 recoveryContinuer:(id)arg5;
- (id)_windowTitleDisplayName;
- (void)_windowsDidShow;
- (BOOL)_windowsShouldDisplayDocumentShowsPanel;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (void)accommodatePresentedItemDisconnectionWithCompletionHandler:(id)arg1;
- (void)addWindowController:(id)arg1;
- (id)alternateContents;
- (unsigned long long)alternateContentsDisassociationReason;
- (void)autosaveDocumentWithDelegate:(id)arg1 didAutosaveSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (void)autosaveWithImplicitCancellability:(BOOL)arg1 completionHandler:(id)arg2;
- (id)autosavedContentsFileURL;
- (double)autosavingDelay;
- (id)autosavingFileType;
- (BOOL)autosavingIsImplicitlyCancellable;
- (id)backupFileURL;
- (void)browseDocumentVersions:(id)arg1;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (BOOL)canEditTags;
- (id)changeCountTokenForSaveOperation:(unsigned long long)arg1;
- (void)changeSaveType:(id)arg1;
- (BOOL)checkAutosavingPossibilityAndReturnError:(id*)arg1;
- (BOOL)checkAutosavingSafetyAndReturnError:(id*)arg1;
- (void)close;
- (void)continueActivityUsingBlock:(id)arg1;
- (void)continueAsynchronousWorkOnMainThreadUsingBlock:(id)arg1;
- (id)dataOfType:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)defaultDraftName;
- (void)disassociateAlternateContentsWithCompletionHandler:(id)arg1;
- (id)displayName;
- (id)duplicateAndReturnError:(id*)arg1;
- (void)duplicateDocument:(id)arg1;
- (void)duplicateDocumentWithDelegate:(id)arg1 didDuplicateSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (BOOL)editingShouldAutomaticallyDuplicate;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)fileAttributesToWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5;
- (id)fileModificationDate;
- (id)fileNameExtensionForType:(id)arg1 saveOperation:(unsigned long long)arg2;
- (BOOL)fileNameExtensionWasHiddenInLastRunSavePanel;
- (id)fileType;
- (id)fileTypeFromLastRunSavePanel;
- (id)fileURL;
- (id)fileWrapperOfType:(id)arg1 error:(id*)arg2;
- (BOOL)hasExplicitChanges;
- (BOOL)hasRecentChanges;
- (BOOL)hasUnautosavedChanges;
- (BOOL)hasUndoManager;
- (id)init;
- (id)initForURL:(id)arg1 withAlternateContents:(id)arg2 ofType:(id)arg3 error:(id*)arg4;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id*)arg4;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)initWithType:(id)arg1 error:(id*)arg2;
- (BOOL)isAlternateContentsMergeRequiredWhenMovingFromURL:(id)arg1 toURL:(id)arg2;
- (BOOL)isAutosavingCritical;
- (BOOL)isBrowsingVersions;
- (BOOL)isClosed;
- (BOOL)isConnectedToCollaborationServer;
- (BOOL)isDocumentEdited;
- (BOOL)isDraft;
- (BOOL)isEntireFileLoaded;
- (BOOL)isInViewingMode;
- (BOOL)isLocked;
- (BOOL)keepBackupFile;
- (void)lockDocument:(id)arg1;
- (void)lockDocumentWithCompletionHandler:(id)arg1;
- (void)lockWithCompletionHandler:(id)arg1;
- (void)makeWindowControllers;
- (void)mergeAlternateContentsToURL:(id)arg1 completionHandler:(id)arg2;
- (void)moveDocument:(id)arg1;
- (void)moveDocumentToUbiquityContainer:(id)arg1;
- (void)moveDocumentWithCompletionHandler:(id)arg1;
- (void)moveToURL:(id)arg1 completionHandler:(id)arg2;
- (BOOL)needsAutosaveAsDraft;
- (void)objectDidBeginEditing:(id)arg1;
- (void)objectDidEndEditing:(id)arg1;
- (void)performActivityWithSynchronousWaiting:(BOOL)arg1 usingBlock:(id)arg2;
- (void)performAsynchronousFileAccessUsingBlock:(id)arg1;
- (void)performSynchronousFileAccessUsingBlock:(id)arg1;
- (BOOL)prepareCloudSharingPanel:(id)arg1;
- (BOOL)prepareMovePanel:(id)arg1;
- (BOOL)preparePageLayout:(id)arg1;
- (void)prepareRenameSession:(id)arg1;
- (BOOL)prepareSavePanel:(id)arg1;
- (void)prepareToDisassociateAlternateContentsWithCompletionHandler:(id)arg1;
- (void)presentAlertForPurgedUbiquitousDocumentWithFormerAlternateContents:(id)arg1 completionHandler:(id)arg2;
- (BOOL)presentError:(id)arg1;
- (void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (void)presentedItemDidChange;
- (void)presentedItemDidDisconnect;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedItemHasUnsavedChangesWithCompletionHandler:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (BOOL)preservesLocalVersions;
- (void)printDocument:(id)arg1;
- (void)printDocumentWithSettings:(id)arg1 showPrintPanel:(BOOL)arg2 delegate:(id)arg3 didPrintSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (id)printInfo;
- (id)printOperationWithSettings:(id)arg1 error:(id*)arg2;
- (BOOL)readFromAlternateContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (BOOL)readFromFileWrapper:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (unsigned int)recentDocumentID;
- (void)relinquishPresentedItemToReader:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)removeWindowController:(id)arg1;
- (void)renameDocument:(id)arg1;
- (void)renameDocumentToURL:(id)arg1 automaticallyChosen:(BOOL)arg2 extensionHidden:(BOOL)arg3 completionHandler:(id)arg4;
- (void)renameToDisplayName:(id)arg1 grantHandler:(id)arg2 completionHandler:(id)arg3;
- (void)renameToURL:(id)arg1 extensionHidden:(BOOL)arg2 completionHandler:(id)arg3;
- (void)restoreStateWithCoder:(id)arg1;
- (void)revertDocumentToSaved:(id)arg1;
- (BOOL)revertToAlternateContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (void)runModalMovePanelWithDelegate:(id)arg1 didMoveSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (void)runModalPageLayoutWithPrintInfo:(id)arg1 delegate:(id)arg2 didRunSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (void)runModalPrintOperation:(id)arg1 delegate:(id)arg2 didRunSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (void)runModalSavePanelForSaveOperation:(unsigned long long)arg1 delegate:(id)arg2 didSaveSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (void)runPageLayout:(id)arg1;
- (void)saveDocument:(id)arg1;
- (void)saveDocumentAs:(id)arg1;
- (void)saveDocumentTo:(id)arg1;
- (void)saveDocumentToPDF:(id)arg1;
- (void)saveDocumentWithDelegate:(id)arg1 didSaveSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (void)savePresentedItemChangesWithCompletionHandler:(id)arg1;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 delegate:(id)arg4 didSaveSelector:(SEL)arg5 contextInfo:(void*)arg6;
- (void)scheduleAutosaving;
- (void)setAlternateContents:(id)arg1;
- (void)setAutosavedContentsFileURL:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDraft:(BOOL)arg1;
- (void)setFileModificationDate:(id)arg1;
- (void)setFileType:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setHasUndoManager:(BOOL)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setPrintInfo:(id)arg1;
- (void)setRecentDocumentID:(unsigned int)arg1;
- (void)setUndoManager:(id)arg1;
- (void)setWindow:(id)arg1;
- (void)shareUbiquitousDocument:(id)arg1;
- (void)shareUbiquitousDocumentWithCompletionHandler:(id)arg1;
- (unsigned long long)sharingState;
- (BOOL)shouldChangePrintInfo:(id)arg1;
- (void)shouldCloseWindowController:(id)arg1 delegate:(id)arg2 shouldCloseSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (BOOL)shouldRunSavePanelWithAccessoryView;
- (void)showWindows;
- (void)stopBrowsingVersionsWithCompletionHandler:(id)arg1;
- (id)tagNamesFromLastRunSavePanel;
- (id)tagsFromLastRunSavePanel;
- (void)unblockUserInteraction;
- (id)undoManager;
- (void)unlockDocument:(id)arg1;
- (void)unlockDocumentWithCompletionHandler:(id)arg1;
- (void)unlockWithCompletionHandler:(id)arg1;
- (void)updateChangeCount:(unsigned long long)arg1;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(unsigned long long)arg2;
- (void)updateDocumentTitlebarButtonState;
- (void)validatePresentedItemRemoteDeletionWithCompletionHandler:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)willHandleConflictsWithCompletionHandler:(id)arg1;
- (void)willNotPresentError:(id)arg1;
- (id)willPresentError:(id)arg1;
- (void)willRestoreVersion:(id)arg1 completionHandler:(id)arg2;
- (void)windowControllerDidLoadNib:(id)arg1;
- (void)windowControllerWillLoadNib:(id)arg1;
- (id)windowControllers;
- (id)windowForSheet;
- (id)windowNibName;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5;

// NSDocument (NSDeprecated)

- (id)dataRepresentationOfType:(id)arg1;
- (id)fileAttributesToWriteToFile:(id)arg1 ofType:(id)arg2 saveOperation:(unsigned long long)arg3;
- (id)fileName;
- (id)fileWrapperRepresentationOfType:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 ofType:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2;
- (BOOL)loadDataRepresentation:(id)arg1 ofType:(id)arg2;
- (BOOL)loadFileWrapperRepresentation:(id)arg1 ofType:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (void)printShowingPrintPanel:(BOOL)arg1;
- (BOOL)readFromFile:(id)arg1 ofType:(id)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2;
- (BOOL)revertToSavedFromFile:(id)arg1 ofType:(id)arg2;
- (BOOL)revertToSavedFromURL:(id)arg1 ofType:(id)arg2;
- (long long)runModalPageLayoutWithPrintInfo:(id)arg1;
- (void)saveToFile:(id)arg1 saveOperation:(unsigned long long)arg2 delegate:(id)arg3 didSaveSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (BOOL)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id*)arg4;
- (void)setFileName:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)writeToFile:(id)arg1 ofType:(id)arg2;
- (BOOL)writeToFile:(id)arg1 ofType:(id)arg2 originalFile:(id)arg3 saveOperation:(unsigned long long)arg4;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2;
- (BOOL)writeWithBackupToFile:(id)arg1 ofType:(id)arg2 saveOperation:(unsigned long long)arg3;

// NSDocument (NSDeprecatedLongAgo)

- (BOOL)canCloseDocument;
- (id)fileNameFromRunningSavePanelForSaveOperation:(unsigned long long)arg1;
- (long long)runModalSavePanel:(id)arg1 withAccessoryView:(id)arg2;
- (BOOL)shouldCloseWindowController:(id)arg1;

// NSDocument (NSDocumentSaving)

+ (id)_attributesOfItemAtURL:(id)arg1;
+ (void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(BOOL)arg4;
+ (BOOL)_parentDirectoryIsWritableForURL:(id)arg1;
+ (void)_setAttributes:(id)arg1 ofItemAtURL:(id)arg2;

- (id)_allowedTypesFromSavePanelType;
- (void)_asynchronousWritingDidBeginAfterUnblockingUserInteraction;
- (void)_asynchronousWritingDidEnd;
- (void)_blockUserInteraction;
- (BOOL)_canAsynchronouslyPreserveVersionAfterWriting;
- (BOOL)_canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (BOOL)_canUseVersionBackupFileOptimization;
- (BOOL)_checkFileModificationDateBeforeSavingToURL:(id)arg1 saveOperation:(unsigned long long)arg2;
- (void)_checkForFileChangesThenSave:(id)arg1 saveAs:(id)arg2 orCancel:(id)arg3;
- (void)_cleanupBackupFileAtURL:(id)arg1;
- (void)_coordinateReadingContentsAndWritingItemAtURL:(id)arg1 byAccessor:(id)arg2;
- (BOOL)_coordinateReadingContentsAndWritingItemAtURL:(id)arg1 error:(id*)arg2 byAccessor:(id)arg3;
- (id)_defaultDirectoryURLForSaveOperation:(unsigned long long)arg1;
- (id)_defaultFromWritableTypeNames:(id)arg1;
- (void)_deleteAutosavedContents;
- (void)_didUnblockUserInteraction;
- (id)_fileAttributesToWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5;
- (void)_fileCoordinator:(id)arg1 asynchronouslyCoordinateReadingContentsAndWritingItemAtURL:(id)arg2 byAccessor:(id)arg3;
- (void)_fileCoordinator:(id)arg1 coordinateReadingContentsAndWritingItemAtURL:(id)arg2 byAccessor:(id)arg3;
- (BOOL)_fileNameExtensionAttributesIsOverridden;
- (id)_fileNameExtensionsForType:(id)arg1 forUseInSavePanel:(BOOL)arg2;
- (void)_finishPreservingAfterSavingForSaveOperation:(unsigned long long)arg1 freshlyPreservedVersion:(id)arg2;
- (void)_finishSavingToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 changeCount:(id)arg4;
- (BOOL)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4;
- (BOOL)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id*)arg6;
- (BOOL)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 replacingOriginalItemAtURL:(id)arg3 addingAttributes:(id)arg4 usingTemporaryDirectoryAtURL:(id)arg5 backupFileName:(id)arg6 error:(id*)arg7;
- (void)_prepareToSaveToURL:(id)arg1 forSaveOperation:(unsigned long long)arg2 completionHandler:(id)arg3;
- (id)_preparedSavePanelForOperation:(unsigned long long)arg1;
- (void)_presentAlertForFileOverwritten:(BOOL)arg1 moved:(BOOL)arg2 renamed:(BOOL)arg3 inTrash:(BOOL)arg4 orUnavailable:(BOOL)arg5 thenSave:(id)arg6 saveAs:(id)arg7 orCancel:(id)arg8;
- (void)_resetMoveAndRenameSensing;
- (void)_runModalSavePanelForSaveOperation:(unsigned long long)arg1 delegate:(id)arg2 didSaveSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (void)_saveDocumentWithDelegate:(id)arg1 didSaveSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (id)_savePanelAccessoryViewForWritableTypes:(id)arg1 defaultType:(id)arg2;
- (void)_saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(id)arg4;
- (BOOL)_saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id*)arg4;
- (void)_setAutosavingCheckingIsDisabledForScripting:(BOOL)arg1;
- (void)_setFileNameExtensionWasHiddenInLastRunSavePanel:(BOOL)arg1;
- (void)_setSaveType:(id)arg1;
- (void)_setTagNamesFromLastRunSavePanel:(id)arg1;
- (void)_unsetFileNameExtensionWasHiddenInLastRunSavePanel;
- (void)_waitForUserInteractionUnblocking;
- (BOOL)_writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)_writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 forceTemporaryDirectory:(BOOL)arg4 error:(id*)arg5;

// NSDocument (NSDocumentSerializationAPIs)

+ (id)_debuggingInformationForFileCoordination;

- (id)_activityCompletionHandlerForActivity:(id)arg1;
- (void)_beginNextActivity;
- (void)_beginNextFileAccess;
- (void)_cancelAllActivitiesAndFinishAsynchronously:(BOOL*)arg1;
- (void)_continueActivityUsingBlock:(id)arg1;
- (void)_continueCurrentFileAccessDuringBlock:(id)arg1;
- (void)_discontinueFileAccessUsingBlock:(id)arg1;
- (void)_enqueueActivity:(id)arg1;
- (void)_enqueueFileAccess:(id)arg1;
- (id)_fileAccessCompletionHandlerForFileAccess:(id)arg1;
- (void)_fileAccessStabilizedFileURL;
- (BOOL)_interruptingSynchronousFileAccess;
- (BOOL)_isFileAccessContinuing;
- (id)_makeNewActivity;
- (void)_performActivity:(id)arg1;
- (void)_performAsynchronousFileAccessUsingBlock:(id)arg1;
- (void)_performFileAccess:(id)arg1;
- (void)_performSynchronousFileAccessUsingBlock:(id)arg1;
- (void)_removeActivity:(id)arg1;
- (void)_synchronouslyCheckFileURLUsingBlock:(id)arg1;
- (void)continueFileAccessUsingBlock:(id)arg1;
- (void)performActivityWithSynchronousWaiting:(BOOL)arg1 usingBlock:(id)arg2 cancellationHandler:(id)arg3;

// NSDocument (NSDocument_Versioning)

- (void)_browseVersions;
- (BOOL)_canRevertToVersionForTag:(long long)arg1;
- (void)_cleanupOldVersions:(id)arg1 keepingVersions:(id)arg2;
- (void)_deleteAllVersions;
- (void)_deleteAllVersions:(id)arg1;
- (void)_deleteThisVersion:(id)arg1;
- (void)_didChangePersistentVersions;
- (void)_doCleanupOldVersions;
- (id)_errorDescriptionForTemporaryVersionStorageWarning;
- (BOOL)_fileContentsDeservesPreserving;
- (id)_lastOpenedVersion;
- (id)_lastSavedVersion;
- (BOOL)_needsTemporaryVersionStorageWarning;
- (id)_oldVersion;
- (id)_originalDocument;
- (int)_preservationActionAfterSaveOperation:(unsigned long long)arg1;
- (BOOL)_preserveContentsIfNecessaryAfterWriting:(BOOL)arg1 toURL:(id)arg2 forSaveOperation:(unsigned long long)arg3 version:(id*)arg4 error:(id*)arg5;
- (id)_preserveContentsOfURL:(id)arg1 forURL:(id)arg2 reason:(unsigned long long)arg3 comment:(id)arg4 options:(unsigned long long)arg5 error:(id*)arg6;
- (BOOL)_preserveCurrentVersionForReason:(unsigned long long)arg1 error:(id*)arg2;
- (BOOL)_preserveFileContentsIfNecessaryAndReturnError:(id*)arg1;
- (void)_preserveVersionAfterWritingToURL:(id)arg1 forSaveOperation:(unsigned long long)arg2 byMovingBackupFileAtURL:(id)arg3 version:(id*)arg4;
- (id)_previousSavedVersion;
- (void)_recordPreviousSaveDateForVersion:(id)arg1;
- (void)_resetTemporaryVersionStorageAlert;
- (void)_scheduleCleanupOldVersions;
- (void)_setFileContentsDeservesPreservingForReason:(unsigned long long)arg1;
- (void)_setShouldSkipTemporaryVersionStorageAlert;
- (void)_setTemporaryVersionStorageIdentifier:(id)arg1;
- (id)_temporaryVersionStorageIdentifier;
- (void)_updateTemporaryVersionStorageState;
- (id)_versionForTag:(long long)arg1;
- (id)_versionModificationDateForTag:(long long)arg1;
- (void)_versionWasDeleted:(id)arg1;
- (void)_willChangePersistentVersions;
- (BOOL)canRestoreLocalVersions;

// NSDocument (NSJavaInternal)

+ (BOOL)_hasJavaOverrideForInitializerSelector:(SEL)arg1;
+ (BOOL)_isJavaSubclass;

- (id)_invokeJavaOverrideForSelector:(SEL)arg1 withErrorAndOtherArguments:(id*)arg2;
- (id)_javaLastError;
- (void)_setJavaLastError:(id)arg1;

// NSDocument (NSPersistentUISupport)

+ (id)restorableStateKeyPaths;

- (id)_copyPersistentUIChildren;
- (void)_encodeObjectIntoRestorableState:(id)arg1 forKey:(id)arg2;
- (BOOL)_hasEverHadInvalidRestorableState;
- (BOOL)_hasInvalidRestorableState;
- (void)_markAsEverHavingInvalidRestorableState;
- (id)_persistentUIEncodedReference;
- (id)_persistentUIIdentifier;
- (void)_restorePersistentState:(id)arg1;
- (void)_setHasInvalidRestorableState:(BOOL)arg1;
- (void)invalidateRestorableState;
- (void)restoreDocumentWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;

// NSDocument (NSScripting)

- (void)_document:(id)arg1 didSucceed:(BOOL)arg2 forScriptCommand:(id)arg3;
- (void)_document:(id)arg1 shouldClose:(BOOL)arg2 forScriptCommand:(id)arg3;
- (void)_saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 didSaveSelector:(SEL)arg4 scriptCommand:(id)arg5;
- (id)_writableTypeForFileNameExtension:(id)arg1 saveOperation:(unsigned long long)arg2;
- (id)_writableTypeForType:(id)arg1 saveOperation:(unsigned long long)arg2;
- (id)handleCloseScriptCommand:(id)arg1;
- (id)handlePrintScriptCommand:(id)arg1;
- (id)handleSaveScriptCommand:(id)arg1;
- (id)lastComponentOfFileName;
- (id)objectSpecifier;
- (void)setLastComponentOfFileName:(id)arg1;

// NSDocument (NSUIActivityProvider)

- (void)_becomeCurrentUserActivityIfNecessary;
- (void)_cleanUpUserActivity;
- (void)_didRestoreUserActivity:(id)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (void)updateUserActivityState:(id)arg1;
- (id)userActivity;
- (void)userActivityWasContinued:(id)arg1;

@end
