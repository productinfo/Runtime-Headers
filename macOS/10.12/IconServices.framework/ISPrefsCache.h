/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
 */

@interface ISPrefsCache : NSObject {
    NSNumber * _focusRingTint;
    int  _lock;
}

@property (atomic, readonly) int focusRingTint;
@property (atomic, readonly) int lock;

+ (id)sharedInstance;

- (void)_handleDefaultChangeNotification:(id)arg1;
- (void)dealloc;
- (int)focusRingTint;
- (id)init;
- (int)lock;

@end