/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSDClient : NSObject <NSXPCConnectionDelegate> {
    NSXPCConnection * _XPCConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (atomic, readonly, retain) NSXPCConnection *XPCConnection;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)XPCConnection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)dealloc;
- (void)didHandleInvocation:(id)arg1 isReply:(BOOL)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (void)willHandleInvocation:(id)arg1 isReply:(BOOL)arg2;

// _LSDClient (Private)

- (id)initWithXPCConnection:(id)arg1 queue:(id)arg2;

@end
