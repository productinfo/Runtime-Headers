/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSFileProviderXPCMessenger : NSObject <NSFileProviderXPCInterface> {
    <NSFileProvider> * _fileProvider;
    NSFileProviderProxy * _fileProviderProxy;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 options:(unsigned long long)arg3 forAccessClaimWithID:(id)arg4 processIdentifier:(int)arg5 completionHandler:(id)arg6;
- (oneway void)cancelProvidingItemAtURL:(id)arg1 forClaimWithID:(id)arg2;
- (void)checkInProviderWithReply:(id)arg1;
- (void)collectDebuggingInformationWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (id)initWithFileProvider:(id)arg1 queue:(id)arg2;
- (id)initWithFileProviderProxy:(id)arg1;
- (void)invalidate;
- (oneway void)observeEndOfWriteAtURL:(id)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3;
- (oneway void)observePresentationChangeOfKind:(id)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 url:(id)arg4 newURL:(id)arg5;
- (void)provideItemAtURL:(id)arg1 forClaimWithID:(id)arg2 madeByClientWithProcessIdentifier:(int)arg3 options:(unsigned long long)arg4 completionHandler:(id)arg5;
- (void)providePhysicalItemForURL:(id)arg1 completionHandler:(id)arg2;

@end
