/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSFocusStack : NSObject {
    struct { 
        unsigned int _noAltHandler : 1; 
        unsigned int _reserved : 31; 
    }  _fsFlags;
    struct __CFArray { } * _stack;
    long long  _topIndex;
}

+ (id)currentFocusStack;
+ (void)initialize;

- (BOOL)_handlesException;
- (void)_setHandlesException:(BOOL)arg1;
- (void)dealloc;
- (id)description;
- (void)fixInvalidatedFocusForFocusView;
- (void)focusView:(id)arg1 inWindow:(id)arg2;
- (id)focusedView;
- (id)init;
- (void)invalidateFocus:(id)arg1;
- (BOOL)isWindowInFocusStack:(id)arg1;
- (void)performWithFocusView:(id)arg1 inWindow:(id)arg2 usingBlock:(id)arg3;
- (void)popTopView;
- (void)removeFreedView:(id)arg1;
- (void)removeFreedWindow:(id)arg1;
- (void)unfocusView:(id)arg1;

@end
