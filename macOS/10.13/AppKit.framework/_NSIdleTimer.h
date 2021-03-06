/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSIdleTimer : NSObject {
    id  _handler;
    unsigned long long  _id;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _suspensionCount;
}

@property (atomic, readwrite, copy) id handler;

+ (void)addIdleTimer:(id)arg1;
+ (void)idle;
+ (void)removeIdleTimer:(id)arg1;

- (void)dealloc;
- (id)handler;
- (void)idle;
- (id)init;
- (void)resume;
- (void)setHandler:(id)arg1;
- (void)suspend;

@end
