/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface _NSCFSocksProxy : NSObject <NSProxyConnectionDelegate> {
    NSDictionary * _configuration;
    NSProxyConnection * _inbound;
    NSString * _outHost;
    int  _outPort;
    NSProxyConnection * _outbound;
    NSObject<OS_dispatch_queue> * _queue;
    SocksHandshake * _socksHandshake;
}

@property (atomic, readwrite, retain) NSDictionary *configuration;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSProxyConnection *inbound;
@property (atomic, readwrite, retain) NSProxyConnection *outbound;
@property (atomic, readonly) Class superclass;

+ (void)handleIncomingConnection:(id)arg1 queue:(id)arg2 configuration:(id)arg3;
+ (id)proxyServers;

- (void).cxx_destruct;
- (void)cleanup;
- (id)configuration;
- (void)connected:(int)arg1;
- (void)dealloc;
- (void)handshakeRead;
- (id)inbound;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (id)outbound;
- (void)outboundConnectionCompleteWithError:(int)arg1;
- (void)outboundConnectionReceivedData:(id)arg1 handler:(id)arg2;
- (void)readInbound;
- (void)readOutbound;
- (void)setConfiguration:(id)arg1;
- (void)setInbound:(id)arg1;
- (void)setOutbound:(id)arg1;

@end
