/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSUUID : NSObject <NSCopying, NSSecureCoding>

@property (atomic, readonly, copy) NSString *UUIDString;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

+ (id)UUID;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)supportsSecureCoding;

- (id)UUIDString;
- (struct __CFString { }*)_cfUUIDString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getUUIDBytes:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char)arg1;
- (id)initWithUUIDString:(id)arg1;
- (BOOL)isEqual:(id)arg1;

// Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices

// NSUUID (LaunchServicesAdditions)

+ (id)_LS_UUIDWithData:(id)arg1;
+ (id)_LS_UUIDWithData:(id)arg1 SHA1:(BOOL)arg2;

// NSUUID (OPTC_AppleEvents)

+ (id)_LS_UUIDWithOPTCAppleEvent:(const struct AEDesc { unsigned int x1; struct OpaqueAEDataStorageType {} **x2; }*)arg1;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices

// NSUUID (IconServices)

+ (id)_IS_UUIDWithBinding:(struct _LSBinding { }*)arg1;
+ (id)_IS_UUIDWithData:(id)arg1;

- (void)_IS_getUUIDBytes:(char *)arg1 hash64:(unsigned long long*)arg2;

@end