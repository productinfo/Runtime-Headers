/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
 */

@interface MSVWatchdog : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _interval;
    NSString * _mode;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSRunLoop * _runLoop;
    BOOL  _running;
    BOOL  _scheduled;
    id  _timeoutCallback;
    double  _timeoutInterval;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readwrite) double interval;
@property (nonatomic, readwrite, retain) NSString *mode;
@property (nonatomic, readwrite, retain) NSOperationQueue *operationQueue;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readwrite, retain) NSRunLoop *runLoop;
@property (nonatomic, readwrite) BOOL running;
@property (nonatomic, readwrite) BOOL scheduled;
@property (nonatomic, readwrite, copy) id timeoutCallback;
@property (nonatomic, readwrite) double timeoutInterval;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;
- (void)_cancelTimeout;
- (void)_invokeCallback;
- (void)_scheduleTest;
- (void)_scheduleTimeout;
- (id)dispatchQueue;
- (id)init;
- (double)interval;
- (id)mode;
- (id)operationQueue;
- (id)queue;
- (void)resume;
- (id)runLoop;
- (BOOL)running;
- (void)scheduleInDispatchQueue:(id)arg1;
- (void)scheduleInOperationQueue:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1;
- (BOOL)scheduled;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)setMode:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRunLoop:(id)arg1;
- (void)setRunning:(BOOL)arg1;
- (void)setScheduled:(BOOL)arg1;
- (void)setTimeoutCallback:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setTimer:(id)arg1;
- (void)suspend;
- (id)timeoutCallback;
- (double)timeoutInterval;
- (id)timer;

@end
