/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface CFPDSourceLookUpKey : NSObject {
    BOOL  byHost;
    BOOL  cloud;
    struct __CFString { } * cloudPath;
    struct __CFString { } * containerPath;
    struct __CFString { } * domain;
    BOOL  managed;
    struct __CFString { } * userName;
}

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
