/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSFilePresenterProxy : NSFileReactorProxy {
    id  _currentWriterPurposeID;
    BOOL  _didObserveMovingByWriter;
    BOOL  _didObserveNonCoordinatedChanges;
    BOOL  _didObserveVersionChangingByWriter;
    BOOL  _disconnected;
    unsigned long long  _filePresenterResponses;
    NSFilePresenterXPCMessenger * _forwardedMessenger;
    BOOL  _inSubarbiter;
    NSSet * _observedUbiquityAttributes;
    NSMutableArray * _previousWriterPurposeIDs;
    NSFileAccessProcessManager * _processManager;
    NSObject<OS_dispatch_queue> * _queue;
    id  _remotePresenter;
    BOOL  _usesMainThreadDuringRelinquishing;
    NSFileWatcher * _watcher;
    unsigned long long  _writingRelinquishmentCount;
}

@property (atomic, readonly) BOOL disconnected;
@property (nonatomic, readwrite) unsigned long long filePresenterResponses;
@property (atomic, readwrite) BOOL inSubarbiter;
@property (atomic, readwrite, copy) NSSet *observedUbiquityAttributes;
@property (atomic, readwrite) BOOL usesMainThreadDuringReliquishing;

+ (id)urlWithItemURL:(id)arg1 subitemPath:(id)arg2;

- (id)_clientProxy;
- (void)_settleNonCoordinatedChanges;
- (void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(id)arg2;
- (BOOL)allowedForURL:(id)arg1;
- (void)dealloc;
- (void)disconnect;
- (BOOL)disconnected;
- (unsigned long long)filePresenterResponses;
- (void)forwardRelinquishmentForWritingClaim:(BOOL)arg1 withID:(id)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 options:(unsigned long long)arg5 completionHandler:(id)arg6;
- (void)forwardUsingProxy:(id)arg1;
- (BOOL)inSubarbiter;
- (id)initWithClient:(id)arg1 remotePresenter:(id)arg2 reactorID:(id)arg3;
- (void)invalidate;
- (void)localFileWasEvicted;
- (void)observeChangeAtSubitemPath:(id)arg1;
- (void)observeChangeOfUbiquityAttributes:(id)arg1;
- (void)observeDisappearanceAtSubitemPath:(id)arg1;
- (void)observeDisconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeMoveByWriterWithPurposeID:(id)arg1 withPhysicalDestinationURL:(id)arg2;
- (void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
- (void)observeNewProvider:(id)arg1;
- (void)observePresenterChange:(BOOL)arg1 atSubitemURL:(id)arg2;
- (void)observeReconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeSharingChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2;
- (void)observeUbiquityChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2;
- (void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4;
- (id)observedUbiquityAttributes;
- (void)promisedFileWasFulfilled;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 resultHandler:(id)arg4;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(id)arg5;
- (void)saveChangesWithCompletionHandler:(id)arg1;
- (void)setFilePresenterResponses:(unsigned long long)arg1;
- (void)setInSubarbiter:(BOOL)arg1;
- (void)setItemLocation:(id)arg1;
- (void)setObservedUbiquityAttributes:(id)arg1;
- (void)setUsesMainThreadDuringReliquishing:(BOOL)arg1;
- (BOOL)shouldSendObservationMessageWithPurposeID:(id)arg1;
- (void)startObservingApplicationStateWithQueue:(id)arg1;
- (void)startWatchingWithQueue:(id)arg1 lastEventID:(id)arg2 unannouncedMoveHandler:(id)arg3;
- (void)stopObservingApplicationState;
- (BOOL)usesMainThreadDuringReliquishing;

@end