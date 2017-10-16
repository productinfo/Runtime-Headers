/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFAuthenticationHintsProvider : NSObject <AuthenticationHintsDelegate, NSXPCListenerDelegate> {
    NSXPCConnection * _clientConnection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    <AuthenticationHintsDelegate> * _hintsDelegate;
    NSXPCListener * _listener;
    NSXPCConnection * _userConnection;
    NSMutableDictionary * _userXPCConnections;
}

@property (atomic, readwrite, retain) NSXPCConnection *clientConnection;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) <AuthenticationHintsDelegate> *hintsDelegate;
@property (atomic, readwrite, retain) NSXPCListener *listener;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, retain) NSXPCConnection *userConnection;
@property (atomic, readwrite, retain) NSMutableDictionary *userXPCConnections;

+ (id)sharedInstance;
+ (void)start;

- (void).cxx_destruct;
- (void)activate:(id)arg1 userName:(id)arg2 mode:(long long)arg3 options:(id)arg4 reply:(id)arg5;
- (void)activate:(id)arg1 userName:(id)arg2 sessionUnlocked:(BOOL)arg3 reply:(id)arg4;
- (id)clientConnection;
- (BOOL)connectionHasEntitlement;
- (void)deactivateWithContext:(id)arg1 reply:(id)arg2;
- (id)dispatchQueue;
- (void)event:(long long)arg1 eventHints:(id)arg2 reply:(id)arg3;
- (id)hintsDelegate;
- (id)hintsProviderProxy;
- (id)init;
- (void)invalidateAllUserConnections;
- (id)listener;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)notifyUserNameNotAvailable:(id)arg1;
- (void)setClientConnection:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setHintsDelegate:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setUserConnection:(id)arg1;
- (void)setUserXPCConnections:(id)arg1;
- (void)startListener;
- (unsigned int)uidForUserName:(id)arg1;
- (void)updateXPCConnectionForUserName:(id)arg1;
- (id)userConnection;
- (id)userXPCConnections;

@end