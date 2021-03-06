/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig <GEOServiceRequestConfiguring> {
    NSNumber * _requestPriority;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (id)additionalHTTPHeaders;
- (id)additionalURLQueryItems;
- (int)dataRequestKindForRequest:(id)arg1;
- (long long)experimentType;
- (id)initWithRequestPriority:(id)arg1;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
- (id)serviceTypeNumber;
- (unsigned long long)urlType;

@end
