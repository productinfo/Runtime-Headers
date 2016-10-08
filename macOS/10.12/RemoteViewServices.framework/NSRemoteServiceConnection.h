/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
 */

@interface NSRemoteServiceConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSString * _connectionName;
    <NSObject><NSRemoteServiceConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSArray * _delegateStackTrace;
    NSRemoteServiceEndpoint * _endpoint;
    unsigned char  _errorsAreFatal;
    NSObject<OS_dispatch_queue> * _internalQueue;
    RVSLogger * _logger;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (atomic, readwrite) id delegate;
@property (atomic, readwrite) NSObject<OS_dispatch_queue> *delegateQueue;
@property (atomic, readwrite) unsigned char errorsAreFatal;
@property (atomic, readonly) RVSLogger *logger;

- (id)_sendSynchronousRequest:(id)arg1 withTimeout:(unsigned long long)arg2;
- (BOOL)_setupConnection;
- (int)asid;
- (void)auditToken:(struct { unsigned int x1[8]; }*)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (unsigned int)egid;
- (unsigned char)errorsAreFatal;
- (unsigned int)euid;
- (id)initWithServiceConnection:(id)arg1;
- (id)initWithServiceConnection:(id)arg1 endpoint:(id)arg2;
- (id)logger;
- (int)pid;
- (void)resume;
- (void)sendReply:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendRequest:(id)arg1 replyQueue:(id)arg2;
- (id)sendSynchronousRequest:(id)arg1;
- (id)sendSynchronousRequest:(id)arg1 withTimeout:(double)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setErrorsAreFatal:(unsigned char)arg1;
- (void)suspend;

@end
