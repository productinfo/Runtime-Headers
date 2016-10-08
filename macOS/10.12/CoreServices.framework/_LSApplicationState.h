/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSApplicationState : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    int  _ratingRank;
    unsigned long long  _stateFlags;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) BOOL isAlwaysAvailable;
@property (nonatomic, readonly) BOOL isBlocked;
@property (nonatomic, readonly) BOOL isInstalled;
@property (nonatomic, readonly) BOOL isPlaceholder;
@property (nonatomic, readonly) BOOL isRemovedSystemApp;
@property (nonatomic, readonly) BOOL isRestricted;
@property (nonatomic, readonly) BOOL isValid;

+ (BOOL)supportsSecureCoding;

- (void)addStateFlag:(unsigned long long)arg1;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 stateFlags:(unsigned long long)arg2 ratingRank:(int)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAlwaysAvailable;
- (BOOL)isBlocked;
- (BOOL)isInstalled;
- (BOOL)isPlaceholder;
- (BOOL)isRemovedSystemApp;
- (BOOL)isRestricted;
- (BOOL)isValid;

@end
