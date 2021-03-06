/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFSystemService : NSObject {
    BOOL  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BOOL  _invalidateCalled;
    SFService * _sfService;
}

@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (void)_handleGetSystemInfoRequest:(id)arg1 responseHandler:(id)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)activate;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;

@end
