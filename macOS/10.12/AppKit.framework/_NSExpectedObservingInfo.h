/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSExpectedObservingInfo : NSObject {
    id  _allSuppressedObject;
    NSString * _specificSuppressedKeyPath;
    id  _specificSuppressedObject;
    unsigned long long  _suppressAllNotificationCounter;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)shouldSuppressNotificationFromObject:(id)arg1 keyPath:(id)arg2;
- (void)suppressAllNotifications;
- (void)suppressAllNotificationsFromObject:(id)arg1;
- (void)suppressSpecificNotificationFromObject:(id)arg1 keyPath:(id)arg2;
- (void)unsuppressAllNotifications;
- (void)unsuppressAllNotificationsFromObject:(id)arg1;
- (void)unsuppressSpecificNotificationFromObject:(id)arg1 keyPath:(id)arg2;

@end
