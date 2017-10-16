/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSCloudKitMirroringRequestOptions : NSObject {
    BOOL  _allowsCellularAccess;
    long long  _qualityOfService;
}

@property (nonatomic, readwrite) BOOL allowsCellularAccess;
@property (nonatomic, readwrite) long long qualityOfService;

- (BOOL)allowsCellularAccess;
- (void)applyToOperation:(id)arg1;
- (id)copy;
- (id)init;
- (long long)qualityOfService;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setQualityOfService:(long long)arg1;

@end