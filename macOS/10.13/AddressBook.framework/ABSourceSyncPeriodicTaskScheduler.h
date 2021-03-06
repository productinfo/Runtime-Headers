/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABSourceSyncPeriodicTaskScheduler : NSObject {
    <ABSyncAgent> * _syncAgent;
}

@property (atomic, readwrite, retain) <ABSyncAgent> *syncAgent;

- (void)checkInWithCentralizedTaskScheduling;
- (void)dealloc;
- (void)handleState:(long long)arg1 activity:(id)arg2;
- (id)machServiceName;
- (void)runWithActivity:(id)arg1;
- (void)setSyncAgent:(id)arg1;
- (id)syncAgent;

@end
