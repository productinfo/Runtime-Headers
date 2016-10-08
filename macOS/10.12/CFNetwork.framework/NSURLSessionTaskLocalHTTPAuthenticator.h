/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface NSURLSessionTaskLocalHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator {
    <NSURLSessionAppleIDContext> * _externalAuthenticator;
}

@property (atomic, readwrite, copy) <NSURLSessionAppleIDContext> *externalAuthenticator;

- (void)dealloc;
- (id)externalAuthenticator;
- (void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(id)arg4;
- (id)initWithSessionAuthenticator:(id)arg1 statusCodes:(id)arg2;
- (void)setExternalAuthenticator:(id)arg1;

@end
