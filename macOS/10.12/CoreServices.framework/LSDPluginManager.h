/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface LSDPluginManager : NSObject <LSDPluginServiceProtocol, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    NSDictionary * _pluginsByBundleIentifier;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSXPCListener *listener;
@property (atomic, readwrite, retain) NSDictionary *pluginsByBundleIentifier;
@property (atomic, readonly) Class superclass;

+ (id)sharedInstance;

- (void)dealloc;
- (void)endpointForServiceIdentifier:(id)arg1 reply:(id)arg2;
- (id)listener;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)loadPluginsAtURL:(id)arg1;
- (id)pluginsByBundleIentifier;
- (void)setListener:(id)arg1;
- (void)setPluginsByBundleIentifier:(id)arg1;
- (void)startPlugins;

@end
