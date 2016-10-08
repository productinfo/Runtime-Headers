/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding> {
    NSURLSessionTaskMetrics * __backgroundTaskMetrics;
    NSDictionary * __backgroundTaskTimingData;
    NSDictionary * __backgroundTrailers;
    long long  _basePriority;
    NSString * _bundleID;
    long long  _bytesPerSecondLimit;
    long long  _countOfBytesExpectedToReceive;
    long long  _countOfBytesExpectedToSend;
    long long  _countOfBytesReceived;
    long long  _countOfBytesSent;
    double  _creationTime;
    NSURLRequest * _currentRequest;
    BOOL  _disablesRetry;
    BOOL  _discretionary;
    NSURL * _downloadFileURL;
    NSError * _error;
    BOOL  _establishedConnection;
    BOOL  _expectingResumeCallback;
    NSURL * _fileURL;
    BOOL  _hasStarted;
    unsigned long long  _identifier;
    double  _loadingPriority;
    unsigned long long  _lowThroughputTimerRetryCount;
    BOOL  _mayBeDemotedToDiscretionary;
    NSURLRequest * _originalRequest;
    NSString * _pathToDownloadTaskFile;
    NSURLResponse * _response;
    unsigned long long  _retryCount;
    NSString * _sessionID;
    BOOL  _shouldCancelOnDisconnect;
    long long  _state;
    NSString * _storagePartitionIdentifier;
    unsigned long long  _suspendCount;
    NSString * _taskDescription;
    unsigned long long  _taskKind;
    NSString * _uniqueIdentifier;
}

@property (atomic, readwrite, retain) NSURLSessionTaskMetrics *_backgroundTaskMetrics;
@property (atomic, readwrite, copy) NSDictionary *_backgroundTaskTimingData;
@property (atomic, readwrite, retain) NSDictionary *_backgroundTrailers;
@property (atomic, readwrite) long long basePriority;
@property (atomic, readwrite, copy) NSString *bundleID;
@property (atomic, readwrite) long long bytesPerSecondLimit;
@property (atomic, readwrite) long long countOfBytesExpectedToReceive;
@property (atomic, readwrite) long long countOfBytesExpectedToSend;
@property (atomic, readwrite) long long countOfBytesReceived;
@property (atomic, readwrite) long long countOfBytesSent;
@property (atomic, readwrite) double creationTime;
@property (atomic, readwrite, copy) NSURLRequest *currentRequest;
@property (atomic, readwrite) BOOL disablesRetry;
@property (getter=isDiscretionary, atomic, readwrite) BOOL discretionary;
@property (atomic, readwrite, copy) NSURL *downloadFileURL;
@property (atomic, readwrite, copy) NSError *error;
@property (atomic, readwrite) BOOL establishedConnection;
@property (atomic, readwrite) BOOL expectingResumeCallback;
@property (atomic, readwrite, copy) NSURL *fileURL;
@property (atomic, readwrite) BOOL hasStarted;
@property (atomic, readwrite) unsigned long long identifier;
@property (atomic, readwrite) double loadingPriority;
@property (atomic, readwrite) unsigned long long lowThroughputTimerRetryCount;
@property (atomic, readwrite) BOOL mayBeDemotedToDiscretionary;
@property (atomic, readwrite, copy) NSURLRequest *originalRequest;
@property (atomic, readwrite, copy) NSString *pathToDownloadTaskFile;
@property (atomic, readwrite, copy) NSURLResponse *response;
@property (atomic, readwrite) unsigned long long retryCount;
@property (atomic, readwrite, copy) NSString *sessionID;
@property (atomic, readwrite) BOOL shouldCancelOnDisconnect;
@property (atomic, readwrite) long long state;
@property (atomic, readwrite, copy) NSString *storagePartitionIdentifier;
@property (atomic, readwrite) unsigned long long suspendCount;
@property (atomic, readwrite, copy) NSString *taskDescription;
@property (atomic, readwrite) unsigned long long taskKind;
@property (atomic, readwrite, copy) NSString *uniqueIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)_backgroundTaskMetrics;
- (id)_backgroundTaskTimingData;
- (id)_backgroundTrailers;
- (long long)basePriority;
- (id)bundleID;
- (long long)bytesPerSecondLimit;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesReceived;
- (long long)countOfBytesSent;
- (double)creationTime;
- (id)currentRequest;
- (void)dealloc;
- (BOOL)disablesRetry;
- (id)downloadFileURL;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (BOOL)establishedConnection;
- (BOOL)expectingResumeCallback;
- (id)fileURL;
- (BOOL)hasStarted;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithDownloadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithUploadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (BOOL)isDiscretionary;
- (double)loadingPriority;
- (unsigned long long)lowThroughputTimerRetryCount;
- (BOOL)mayBeDemotedToDiscretionary;
- (id)originalRequest;
- (id)pathToDownloadTaskFile;
- (id)response;
- (unsigned long long)retryCount;
- (id)sessionID;
- (void)setBasePriority:(long long)arg1;
- (void)setBundleID:(id)arg1;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCreationTime:(double)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setDisablesRetry:(BOOL)arg1;
- (void)setDiscretionary:(BOOL)arg1;
- (void)setDownloadFileURL:(id)arg1;
- (void)setError:(id)arg1;
- (void)setEstablishedConnection:(BOOL)arg1;
- (void)setExpectingResumeCallback:(BOOL)arg1;
- (void)setFileURL:(id)arg1;
- (void)setHasStarted:(BOOL)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setLoadingPriority:(double)arg1;
- (void)setLowThroughputTimerRetryCount:(unsigned long long)arg1;
- (void)setMayBeDemotedToDiscretionary:(BOOL)arg1;
- (void)setOriginalRequest:(id)arg1;
- (void)setPathToDownloadTaskFile:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setSessionID:(id)arg1;
- (void)setShouldCancelOnDisconnect:(BOOL)arg1;
- (void)setState:(long long)arg1;
- (void)setStoragePartitionIdentifier:(id)arg1;
- (void)setSuspendCount:(unsigned long long)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTaskKind:(unsigned long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)set_backgroundTaskMetrics:(id)arg1;
- (void)set_backgroundTaskTimingData:(id)arg1;
- (void)set_backgroundTrailers:(id)arg1;
- (BOOL)shouldCancelOnDisconnect;
- (long long)state;
- (id)storagePartitionIdentifier;
- (unsigned long long)suspendCount;
- (id)taskDescription;
- (unsigned long long)taskKind;
- (id)uniqueIdentifier;

@end
