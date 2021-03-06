/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSInstallationManager : NSObject {
    NSXPCConnection * _connection;
}

@property (readonly) NSXPCConnection *connection;

+ (id)sharedInstance;

- (id)connection;
- (void)dealloc;
- (id)init;
- (bool)removeSystemApplicationWithBundleIdentifier:(id)arg1;
- (bool)restoreSystemApplicationWithBundleIdentifier:(id)arg1;

@end
