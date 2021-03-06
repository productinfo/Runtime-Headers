/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOServiceSession : NSObject {
    GEOProtobufSession * _protobufSession;
    unsigned long long  _urlType;
}

@property (nonatomic, readonly) long long experimentType;
@property (nonatomic, readonly) GEOProtobufSession *protobufSession;
@property (nonatomic, readonly) int serviceType;
@property (nonatomic, readonly) unsigned long long urlType;

+ (id)sharedDispatcherServiceSession;

- (void).cxx_destruct;
- (long long)_experimentType;
- (id)init;
- (id)initWithProtobufSession:(id)arg1 urlType:(unsigned long long)arg2;
- (id)protobufSession;
- (id)serviceTypeNumber;
- (id)taskWithKind:(int)arg1 request:(id)arg2 traits:(id)arg3 timeout:(double)arg4 auditToken:(id)arg5 queue:(id)arg6 completionHandler:(id)arg7;
- (unsigned long long)urlType;

// GEOServiceSession (Service)

- (id)URLForRequest:(id)arg1;
- (int)experimentDispatcherRequestTypeForRequest:(id)arg1;
- (long long)experimentType;
- (int)serviceType;

@end
