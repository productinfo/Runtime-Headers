/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABWorkQueue : NSOperationQueue {
    NSObject<ABWorkQueueDelegate> * _delegate;
    <CNScheduler> * _delegateScheduler;
}

@property (atomic, readwrite, retain) NSObject<ABWorkQueueDelegate> *delegate;
@property (nonatomic, readonly) <CNScheduler> *delegateScheduler;

- (void)dealloc;
- (id)delegate;
- (id)delegateScheduler;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)operationCountDidChange:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;

@end
