/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVFigEndpointRemoteControlSessionOutputContextCommunicationChannelImpl : NSObject <AVOutputContextCommunicationChannelImpl> {
    void * _callbackContextToken;
    AVFigEndpointRemoteControlSessionCommunicationChannelManager * _parentCommChannelManager;
    AVOutputContextCommunicationChannel * _parentCommunicationChannel;
    struct OpaqueFigEndpointRemoteControlSession { } * _remoteControlSession;
    AVWeakReference * _weakObserver;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) AVOutputContextCommunicationChannel *parentCommunicationChannel;
@property (atomic, readwrite) AVFigEndpointRemoteControlSessionCommunicationChannelManager *parentCommunicationChannelManager;
@property (nonatomic, readonly) struct OpaqueFigEndpointRemoteControlSession { }*remoteControlSession;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didClose;
- (void)_didReceiveData:(id)arg1;
- (void)_serverConnectionDied;
- (void)dealloc;
- (id)init;
- (id)initWithRemoteControlSession:(struct OpaqueFigEndpointRemoteControlSession { }*)arg1;
- (void)open;
- (id)parentCommunicationChannel;
- (id)parentCommunicationChannelManager;
- (struct OpaqueFigEndpointRemoteControlSession { }*)remoteControlSession;
- (void)sendData:(id)arg1 completionHandler:(id)arg2;
- (void)setParentCommunicationChannel:(id)arg1;
- (void)setParentCommunicationChannelManager:(id)arg1;

@end