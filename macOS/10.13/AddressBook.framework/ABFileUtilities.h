/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABFileUtilities : NSObject {
    <ABFileServices> * _services;
    /* Warning: unhandled struct encoding: '{?="object"@"onceToken"q}' */ struct { 
        id object; 
    }  _sharedLockDirectoryUrlOnce;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)initWithFileServices:(id)arg1;
- (BOOL)isFileAtUrlOnARemoteFileSystem:(id)arg1;
- (id)proxyLockUrlForFileAtUrl:(id)arg1;
- (id)sharedLockDirectoryUrl;
- (id)sharedLockUrlWithName:(id)arg1;

@end