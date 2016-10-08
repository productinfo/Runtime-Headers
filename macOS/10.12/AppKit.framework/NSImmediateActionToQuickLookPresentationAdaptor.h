/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSImmediateActionToQuickLookPresentationAdaptor : NSObject {
    <NSImmediateActionAnimationController> * _animationController;
    <NSImmediateActionGestureRecognizerDelegate> * _delegate;
    long long  _flags;
    NSForceClickMonitor * _forceClickMonitor;
    long long  _presentationState;
    NSEvent * _startEvent;
    NSView * _view;
}

@property (atomic, readwrite, retain) <NSImmediateActionAnimationController> *animationController;
@property (atomic, readonly) double animationProgress;
@property (atomic, readwrite) <NSImmediateActionGestureRecognizerDelegate> *delegate;
@property (atomic, readonly) unsigned long long modifierFlags;
@property (atomic, readwrite) long long presentationState;
@property (atomic, readwrite) NSView *view;

+ (BOOL)isForceClickPossibleFromEvent:(id)arg1;

- (id)_delegate;
- (id)_forceClickMonitor;
- (void)_forceClickMonitorDidChange:(id)arg1;
- (void)_halfReset;
- (void)_presentWithQuickLookEvent:(id)arg1;
- (void)_reset;
- (id)_startEvent;
- (id)animationController;
- (double)animationProgress;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (unsigned long long)modifierFlags;
- (void)presentQuickLookInView:(id)arg1;
- (long long)presentationState;
- (void)setAnimationController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentationState:(long long)arg1;
- (void)setView:(id)arg1;
- (long long)state;
- (id)view;

@end
