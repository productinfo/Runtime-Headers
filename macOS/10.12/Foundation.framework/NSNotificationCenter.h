/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSNotificationCenter : NSObject {
    void * _callback;
    void * _impl;
    void * _pad;
}

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

+ (id)defaultCenter;

- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id)arg4;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (BOOL)isEmpty;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// NSNotificationCenter (NSNotificationCenterAppKitExtensions)

- (void)_addObserver:(id)arg1 notificationNamesAndSelectorNames:(id)arg2 object:(id)arg3 onlyIfSelectorIsImplemented:(BOOL)arg4;
- (void)_removeObserver:(id)arg1 notificationNamesAndSelectorNames:(id)arg2 object:(id)arg3;

@end
