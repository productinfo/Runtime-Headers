/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSScrollingBehaviorLegacy : NSScrollingBehavior {
    id  _endGestureMonitor;
    struct __SblFlags { 
        unsigned int inScrollGesture : 1; 
        unsigned int momentumScrollInProgress : 1; 
        unsigned int ignoreMomentumScrolls : 1; 
        unsigned int momentumScrollPreventsForwarding : 1; 
        unsigned int processingScrollMayBegin : 1; 
        unsigned int acceleratedScrollPreventsForwarding : 1; 
        unsigned int RESERVED : 26; 
    }  _flags;
    double  _lastMomentumScrollTimeStamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPanVelocity;
    _NSScrollingMomentumCalculator * _momentumCalculator;
    struct CGSize { 
        double width; 
        double height; 
    }  _momentumVelocity;
    id  _mouseDownMonitor;
    struct CGSize { 
        double width; 
        double height; 
    }  _overflowScrollDelta;
    NSTimer * _panAnimationTimer;
    _NSScrollingPredominantAxisFilter * _predominantAxisFilter;
    _NSScrollingRubberbandFilter * _rubberbandFilter;
    NSScrollView * _scrollViewRefForCarbonApps;
    _NSPeriodicInvoker * _snapBackAnimator;
    struct CGSize { 
        double width; 
        double height; 
    }  _stretchScrollForce;
}

@property (atomic, readwrite) id endGestureMonitor;
@property (atomic, readwrite, retain) NSScrollView *scrollViewRefForCarbonApps;

- (BOOL)_cancelAnyOutstandingPanAnimation;
- (void)_endSnapBackAnimationIfNeededForScrollView:(id)arg1;
- (void)_latchAcceleratedScrollEventsToScrollView:(id)arg1;
- (void)_latchMomentumScrollEventsToScrollView:(id)arg1;
- (void)_momentumAnimationTimerFire:(id)arg1;
- (void)_scrollView:(id)arg1 discreetScrollWithEvent:(id)arg2;
- (void)_scrollView:(id)arg1 smoothScrollWithEvent:(id)arg2;
- (void)_scrollView:(id)arg1 snabRubberBandWithVelocity:(struct CGSize { double x1; double x2; })arg2;
- (void)_snapRubberBandWhenMouseReleasedFromTrackingLoopOfScrollView:(id)arg1;
- (void)automateLiveScrollOfScrollView:(id)arg1;
- (void)dealloc;
- (id)endGestureMonitor;
- (BOOL)isInScrollGesture;
- (void)scrollView:(id)arg1 endScrollGestureDueToReason:(id)arg2;
- (void)scrollView:(id)arg1 panWithGestureRecognizer:(id)arg2;
- (id)scrollView:(id)arg1 responderToForwardScrollEvents:(id)arg2;
- (void)scrollView:(id)arg1 scrollWheelWithEvent:(id)arg2;
- (id)scrollViewRefForCarbonApps;
- (void)setEndGestureMonitor:(id)arg1;
- (void)setScrollViewRefForCarbonApps:(id)arg1;
- (void)snapRubberBandOfScrollView:(id)arg1;

@end
