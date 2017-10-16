/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVAssetResourceLoadingContentInformationRequest : NSObject {
    AVAssetResourceLoadingContentInformationRequestInternal * _contentInformationRequest;
}

@property (getter=isByteRangeAccessSupported, nonatomic, readwrite) BOOL byteRangeAccessSupported;
@property (nonatomic, readwrite) long long contentLength;
@property (nonatomic, readwrite, copy) NSString *contentType;
@property (nonatomic, readwrite, copy) NSDate *renewalDate;

- (long long)contentLength;
- (id)contentType;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithLoadingRequest:(id)arg1;
- (BOOL)isByteRangeAccessSupported;
- (BOOL)isDiskCachingPermitted;
- (id)propertyList;
- (id)renewalDate;
- (void)setByteRangeAccessSupported:(BOOL)arg1;
- (void)setContentLength:(long long)arg1;
- (void)setContentType:(id)arg1;
- (void)setDiskCachingPermitted:(BOOL)arg1;
- (void)setRenewalDate:(id)arg1;

@end