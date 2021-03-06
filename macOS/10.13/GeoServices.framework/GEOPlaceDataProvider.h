/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPlaceDataProvider : NSObject {
    id  _errorHandler;
    id  _finishedHandler;
    BOOL  _isLoading;
}

@property (nonatomic, readwrite, copy) id errorHandler;
@property (nonatomic, readwrite, copy) id finishedHandler;
@property (nonatomic, readwrite) BOOL isLoading;

- (void).cxx_destruct;
- (void)cancelProviderRequest;
- (void)cancelRequest;
- (void)dealloc;
- (id)errorHandler;
- (id)finishedHandler;
- (BOOL)isLoading;
- (void)providerDidCancel;
- (void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2;
- (void)providerReceivedResponse:(id)arg1 userInfo:(id)arg2;
- (void)requestCompleted;
- (void)setErrorHandler:(id)arg1;
- (void)setFinishedHandler:(id)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2;
- (void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(id)arg3 error:(id)arg4;

@end
