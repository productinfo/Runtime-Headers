/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOVoltaireAddressCorrectionProvider : NSObject <GEOProtobufSessionTaskDelegate> {
    id  _initErrorHandler;
    id  _initFinishedHandler;
    GEOProtobufSessionTask * _initializationTask;
    GEOProtobufSession * _protobufSession;
    id  _updateErrorHandler;
    id  _updateFinishedHandler;
    GEOProtobufSessionTask * _updateTask;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, copy) id initErrorHandler;
@property (nonatomic, readwrite, copy) id initFinishedHandler;
@property (nonatomic, readwrite, retain) GEOProtobufSessionTask *initializationTask;
@property (nonatomic, readonly) GEOProtobufSession *protobufSession;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, copy) id updateErrorHandler;
@property (nonatomic, readwrite, copy) id updateFinishedHandler;
@property (nonatomic, readwrite, retain) GEOProtobufSessionTask *updateTask;

+ (id)acInitURL;
+ (id)acUpdateURL;

- (void).cxx_destruct;
- (void)cancelRequest;
- (id)init;
- (id)initErrorHandler;
- (id)initFinishedHandler;
- (id)initializationTask;
- (id)protobufSession;
- (void)setInitErrorHandler:(id)arg1;
- (void)setInitFinishedHandler:(id)arg1;
- (void)setInitializationTask:(id)arg1;
- (void)setUpdateErrorHandler:(id)arg1;
- (void)setUpdateFinishedHandler:(id)arg1;
- (void)setUpdateTask:(id)arg1;
- (void)startInitRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;
- (void)startUpdateRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;
- (id)updateErrorHandler;
- (id)updateFinishedHandler;
- (id)updateTask;

// GEOVoltaireAddressCorrectionProvider (TaskDelegate)

- (id)cancelError;
- (void)didCompleteInitTask;
- (void)didCompleteUpdateTask;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;

@end