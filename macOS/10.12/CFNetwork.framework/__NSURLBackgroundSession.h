/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface __NSURLBackgroundSession : __NSCFURLSession <NDBackgroundSessionClient, NSURLSessionSubclass> {
    NSString * _appWakeUUID;
    NSURL * _assetDownloadDirectory;
    BOOL  _companionAvailable;
    NSURL * _downloadDirectory;
    unsigned long long  _identSeed;
    id  _invalidateCallback;
    NSObject<OS_dispatch_queue> * _invalidateQueue;
    NSError * _invalidationError;
    BOOL  _isInvalid;
    BOOL  _isPrivileged;
    int  _notifyToken;
    <NDBackgroundSessionProtocol> * _remoteSession;
    NSMutableArray * _taskIDsToFailOnReconnection;
    NSMutableDictionary * _tasks;
    BOOL  _tryToReconnect;
    unsigned long long  _wifiRetainCount;
    NSXPCConnection * _xpcConn;
}

@property (atomic, readwrite, copy) NSString *appWakeUUID;
@property (getter=isCompanionAvailable, atomic, readwrite) BOOL companionAvailable;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)_downloadTaskForRequest:(id)arg1;
- (id)_downloadTaskForResumeData:(id)arg1;
- (void)_onqueue_completeInvalidation:(BOOL)arg1;
- (id)_onqueue_dataTaskForRequest:(id)arg1 completion:(id)arg2;
- (void)_onqueue_disavowTask:(id)arg1;
- (id)_onqueue_downloadTaskForRequest:(id)arg1 resumeData:(id)arg2 completion:(id)arg3;
- (id)_onqueue_dummyTaskForClass:(Class)arg1 withRequest:(id)arg2 error:(id)arg3;
- (void)_onqueue_flushWithCompletionHandler:(id)arg1;
- (void)_onqueue_getTasksWithCompletionHandler:(id)arg1;
- (void)_onqueue_invalidateSession:(BOOL)arg1 withQueue:(id)arg2 completion:(id)arg3;
- (void)_onqueue_invokeInvalidateCallback;
- (void)_onqueue_resetStorageWithCompletionHandler:(id)arg1;
- (void)_onqueue_retryDataTaskWithIdentifier:(unsigned long long)arg1;
- (id)_onqueue_uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id)arg4;
- (id)appWakeUUID;
- (void)backgroundDataTask:(unsigned long long)arg1 didReceiveData:(id)arg2 withReply:(id)arg3;
- (void)backgroundDataTaskDidBecomeDownloadTask:(unsigned long long)arg1;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didFinishDownloadingToURL:(id)arg2 reply:(id)arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)backgroundDownloadsDirectory;
- (id)backgroundResumeDataFromClientResumeData:(id)arg1;
- (id)backgroundResumeDataFromLegacyClientResumeData:(id)arg1;
- (void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(id)arg2;
- (void)backgroundSessionDidStartAppWake:(id)arg1 reply:(id)arg2;
- (void)backgroundTask:(unsigned long long)arg1 _willSendRequestForEstablishedConnection:(id)arg2 reply:(id)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didCompleteWithError:(id)arg2 info:(id)arg3 reply:(id)arg4;
- (void)backgroundTask:(unsigned long long)arg1 didFinishCollectingMetrics:(id)arg2 reply:(id)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveChallenge:(id)arg2 reply:(id)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3 reply:(id)arg4;
- (void)backgroundTask:(unsigned long long)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTask:(unsigned long long)arg1 getAuthHeadersForResponse:(id)arg2 reply:(id)arg3;
- (void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithError:(id)arg2;
- (void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithReason:(long long)arg2;
- (void)backgroundTask:(unsigned long long)arg1 needNewBodyStream:(BOOL)arg2 withReply:(id)arg3;
- (void)backgroundTask:(unsigned long long)arg1 willPerformHTTPRedirection:(id)arg2 withNewRequest:(id)arg3 reply:(id)arg4;
- (void)backgroundTaskDidResume:(unsigned long long)arg1;
- (void)backgroundTaskDidSuspend:(unsigned long long)arg1;
- (void)backgroundTaskHasConnectionWaiting:(unsigned long long)arg1;
- (id)cachesDirectory;
- (void)cleanupConfig;
- (id)connectionLostErrorWithURL:(id)arg1;
- (id)copyTasks;
- (void)credStorage_allCredentialsWithReply:(id)arg1;
- (void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(id)arg2;
- (void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(id)arg2;
- (void)credStorage_getInitialCredentialDictionariesWithReply:(id)arg1;
- (void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)dataTaskForRequest:(id)arg1 completion:(id)arg2;
- (void)dealloc;
- (id)disconnectedErrorWithURL:(id)arg1;
- (id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(id)arg4;
- (id)ensureRemoteSession;
- (void)failDisconnectedTasks;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (BOOL)isCompanionAvailable;
- (void)moveFileForResumeData:(id)arg1 fromDirectory:(id)arg2 toDirectory:(id)arg3;
- (void)moveFileToBackgroundDownloadsDirectoryForLocalResumeData:(id)arg1;
- (void)moveFileToTempForBackgroundResumeData:(id)arg1;
- (void)openFileAtPath:(id)arg1 mode:(int)arg2 withReply:(id)arg3;
- (void)performBlockOnQueueAndRethrowExceptions:(id)arg1;
- (id)placeholderErrorWithURL:(id)arg1;
- (id)placeholderErrorWithURL:(id)arg1 error:(id)arg2;
- (void)recreateExistingTasks:(id)arg1;
- (id)requestWithCookiesApplied:(id)arg1;
- (void)sendInvalidationRequest;
- (void)setAppWakeUUID:(id)arg1;
- (void)setCompanionAvailable:(BOOL)arg1;
- (void)setCookiesFromResponse:(id)arg1 forOriginalRequest:(id)arg2 partitionIdentifier:(id)arg3;
- (void)setPropertyOnStreamWithIdentifier:(unsigned long long)arg1 propDict:(id)arg2 propKey:(id)arg3;
- (void)setupBackgroundSession;
- (void)setupXPCConnection;
- (id)taskForIdentifier:(unsigned long long)arg1;
- (id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id)arg4;
- (void)validateSerializabilityForRequest:(id)arg1 completion:(id)arg2;
- (void)validateUploadFile:(id)arg1;
- (void)willRetryBackgroundDataTask:(unsigned long long)arg1 withError:(id)arg2 timingData:(id)arg3;

@end
