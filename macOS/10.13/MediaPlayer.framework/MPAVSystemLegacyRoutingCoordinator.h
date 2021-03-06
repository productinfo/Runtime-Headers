/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
 */

@interface MPAVSystemLegacyRoutingCoordinator : NSObject {
    NSPointerArray * _clientDataSources;
    long long  _clientDiscoveryMode;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)sharedRoutingCoordinator;

- (void).cxx_destruct;
- (id)_init;
- (void)_onQueueUpdateClientRouteDiscoveryMode;
- (void)dealloc;
- (id)init;
- (void)registerClientDataSource:(id)arg1;
- (void)reloadClientRouteDiscoveryMode;
- (void)unregisterClientDataSource:(id)arg1;

@end
