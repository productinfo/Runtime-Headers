/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOETAProvider : NSObject <GEOProtobufSessionTaskDelegate> {
    GEOApplicationAuditToken * _auditToken;
    BOOL  _cancelled;
    GEOETATrafficUpdateRequest * _currentRequest;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        BOOL didRun; 
    }  _didStart;
    id  _errorHandler;
    id  _finishedHandler;
    GEOProtobufSession * _protobufSession;
    GEOProtobufSessionTask * _task;
    id  _willSendRequestHandler;
}

@property (atomic, readwrite, retain) GEOETATrafficUpdateRequest *currentRequest;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite, copy) id errorHandler;
@property (nonatomic, readwrite, copy) id finishedHandler;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOProtobufSession *protobufSession;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, retain) GEOProtobufSessionTask *task;
@property (nonatomic, readwrite, copy) id willSendRequestHandler;

- (void).cxx_destruct;
- (void)_startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(id)arg3 finished:(id)arg4 error:(id)arg5;
- (void)cancelRequest;
- (id)currentRequest;
- (id)errorHandler;
- (id)finishedHandler;
- (id)init;
- (id)initWithAuditToken:(id)arg1;
- (id)protobufSession;
- (void)setCurrentRequest:(id)arg1;
- (void)setErrorHandler:(id)arg1;
- (void)setFinishedHandler:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setWillSendRequestHandler:(id)arg1;
- (void)startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(id)arg3 finished:(id)arg4 error:(id)arg5;
- (void)startRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;
- (id)task;
- (void)updateRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;
- (id)willSendRequestHandler;

// GEOETAProvider (TaskDelegate)

- (void)didCompleteTask;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)protobufSession:(id)arg1 willSendRequestForTask:(id)arg2 completionHandler:(id)arg3;

@end
