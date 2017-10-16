/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface CNSchedulerProvider : NSObject <CNSchedulerProvider> {
    <CNScheduler> * _backgroundScheduler;
    <CNScheduler> * _immediateScheduler;
    <CNScheduler> * _inlineScheduler;
    <CNScheduler> * _mainThreadScheduler;
    id  _readerWriterSchedulerProvider;
    id  _serialSchedulerProvider;
    id  _synchronousSerialSchedulerProvider;
}

@property (nonatomic, readonly) <CNScheduler> *backgroundScheduler;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNScheduler> *immediateScheduler;
@property (nonatomic, readonly) <CNScheduler> *inlineScheduler;
@property (nonatomic, readonly) <CNScheduler> *mainThreadScheduler;
@property (nonatomic, readonly, copy) id readerWriterSchedulerProvider;
@property (nonatomic, readonly, copy) id serialSchedulerProvider;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly, copy) id synchronousSerialSchedulerProvider;

+ (id)defaultProvider;
+ (id)makeDefaultProvider;
+ (id)providerWithBackgroundConcurrencyLimit:(long long)arg1;

- (void).cxx_destruct;
- (id)backgroundScheduler;
- (id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
- (id)immediateScheduler;
- (id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 immediateScheduler:(id)arg3 serialSchedulerProvider:(id)arg4 synchronousSerialSchedulerProvider:(id)arg5 readerWriterSchedulerProvider:(id)arg6;
- (id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 inlineScheduler:(id)arg3 immediateScheduler:(id)arg4 serialSchedulerProvider:(id)arg5 synchronousSerialSchedulerProvider:(id)arg6 readerWriterSchedulerProvider:(id)arg7;
- (id)inlineScheduler;
- (id)mainThreadScheduler;
- (id)newReaderWriterSchedulerWithName:(id)arg1;
- (id)newSerialSchedulerWithName:(id)arg1;
- (id)newSynchronousSerialSchedulerWithName:(id)arg1;
- (id)readerWriterSchedulerProvider;
- (id)serialSchedulerProvider;
- (id)synchronousSerialSchedulerProvider;

@end