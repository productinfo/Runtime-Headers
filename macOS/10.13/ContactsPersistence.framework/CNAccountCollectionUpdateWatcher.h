/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
 */

@interface CNAccountCollectionUpdateWatcher : NSObject {
    ACAccountStore * _accountStore;
    SEL  _action;
    <CNCancelable> * _cancelationToken;
    id  _target;
}

@property (nonatomic, readwrite, retain) ACAccountStore *accountStore;
@property (atomic, readonly) SEL action;
@property (nonatomic, readwrite, retain) <CNCancelable> *cancelationToken;
@property (atomic, readonly) id target;

+ (id)accountsWithStore:(id)arg1;

- (void).cxx_destruct;
- (id)accountStore;
- (SEL)action;
- (id)cancelationToken;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setAccountStore:(id)arg1;
- (void)setCancelationToken:(id)arg1;
- (void)startObserving;
- (void)startObservingAccountStore:(id)arg1 notificationCenter:(id)arg2;
- (void)stopObserving;
- (id)target;

@end
