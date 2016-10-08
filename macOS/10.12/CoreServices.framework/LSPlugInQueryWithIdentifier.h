/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery {
    int  _bindingMap;
    NSString * _identifier;
}

+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id)arg2;
- (id)_identifier;
- (id)_initWithIdentifier:(id)arg1 inMap:(int)arg2;
- (BOOL)_shouldCacheResolvedResults;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
