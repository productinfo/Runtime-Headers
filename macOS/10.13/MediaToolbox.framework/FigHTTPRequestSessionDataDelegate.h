/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/Versions/A/MediaToolbox
 */

@interface FigHTTPRequestSessionDataDelegate : NSObject <NSURLSessionDataDelegate> {
    unsigned char  _doesIgnoreDidReceiveResponseDisposition;
    NSMutableDictionary * _taskToFigHTTPRequest;
    struct OpaqueFigReentrantMutex { } * _taskToFigHTTPRequestMutex;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id)arg4;
- (struct FigRetainProxy { }*)_copyAndLockRequestForTask:(id)arg1;
- (void)_deregisterFigHTTPRequestForDataTask:(id)arg1;
- (void)_registerFigHTTPRequest:(struct OpaqueFigHTTPRequest { }*)arg1 forDataTask:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithResponseDispositionOption:(BOOL)arg1;

@end