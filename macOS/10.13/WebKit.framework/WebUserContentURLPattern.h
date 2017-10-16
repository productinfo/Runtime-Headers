/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate * _private;
}

- (void)dealloc;
- (id)host;
- (id)initWithPatternString:(id)arg1;
- (BOOL)isValid;
- (BOOL)matchesSubdomains;
- (BOOL)matchesURL:(id)arg1;
- (id)scheme;

@end