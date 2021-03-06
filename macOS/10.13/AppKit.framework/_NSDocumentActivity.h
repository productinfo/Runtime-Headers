/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSDocumentActivity : _NSDocumentSerializationObject {
    BOOL  _cachedCancellationHandlerResponse;
    id  _cancellationHandler;
    BOOL  _cancelled;
}

@property (atomic, readwrite, copy) id cancellationHandler;
@property (getter=isCancelled, atomic, readwrite) BOOL cancelled;

- (void)cancelAndFinishAsynchronously:(BOOL*)arg1;
- (id)cancellationHandler;
- (void)dealloc;
- (BOOL)isCancelled;
- (void)setCancellationHandler:(id)arg1;
- (void)setCancelled:(BOOL)arg1;

@end
