/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSApplicationProxiesOfTypeQuery : _LSQuery {
    BOOL  _legacySPI;
    unsigned long long  _type;
}

@property (nonatomic, readonly) BOOL legacySPI;
@property (nonatomic, readonly) unsigned long long type;

+ (id)queryWithType:(unsigned long long)arg1 legacySPI:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)legacySPI;
- (unsigned long long)type;

@end
