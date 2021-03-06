/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
 */

@interface IMKInputSessionXPCInvocation : NSObject {
    SEL  _callerSelector;
    IMKInputSession * _imkInputSession;
    struct __CFRunLoopTimer { } * _replyTimer;
    BOOL  _request_reply_done;
    IMKInputSessionInvocationSentinel * _sentinel;
    BOOL  _timedOut;
}

+ (id)invocationWithSession:(id)arg1 selector:(SEL)arg2;

- (void)dealloc;
- (id)initWithSession:(id)arg1 selector:(SEL)arg2;
- (void)invocationAwaitXPCReply;
- (void)invocationInterruptXPCReply;
- (BOOL)isMarkedDone;
- (void)markDone;
- (id)sentinel;
- (BOOL)timedOut;

@end
