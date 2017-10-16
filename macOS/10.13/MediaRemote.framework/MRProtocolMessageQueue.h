/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface MRProtocolMessageQueue : NSObject {
    MRWeakRef * _datasource;
    MRWeakRef * _delegate;
    MRPendingMessageQueue * _pendingMessageQueue;
    NSMutableDictionary * _pendingReplyQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readwrite) <MRProtocolMessageQueueDataSource> *datasource;
@property (nonatomic, readwrite) <MRProtocolMessageQueueDelegate> *delegate;

- (id)_dataForMessage:(id)arg1;
- (id)datasource;
- (void)dealloc;
- (id)delegate;
- (void)enqueueMessage:(id)arg1 reply:(id)arg2 queue:(id)arg3;
- (void)flush;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1;
- (BOOL)reply:(id)arg1;
- (void)setDatasource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end