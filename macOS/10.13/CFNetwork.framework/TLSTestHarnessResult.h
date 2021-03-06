/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface TLSTestHarnessResult : NSObject {
    NSMutableData * _data;
    NSError * _error;
    NSHTTPURLResponse * _response;
    NSObject<OS_dispatch_semaphore> * _sema;
    NSURLSessionTask * _task;
}

@property (atomic, readwrite, retain) NSMutableData *data;
@property (atomic, readwrite, retain) NSError *error;
@property (atomic, readwrite, retain) NSHTTPURLResponse *response;
@property (atomic, readwrite, retain) NSObject<OS_dispatch_semaphore> *sema;
@property (atomic, readwrite, retain) NSURLSessionTask *task;

- (void)appendResponseData:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)error;
- (id)initWithTask:(id)arg1;
- (id)response;
- (id)sema;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSema:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
