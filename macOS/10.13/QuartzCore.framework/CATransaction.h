/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
 */

@interface CATransaction : NSObject

// Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore

+ (double)animationDuration;
+ (id)animationTimingFunction;
+ (void)begin;
+ (void)commit;
+ (id)completionBlock;
+ (BOOL)disableActions;
+ (void)flush;
+ (void)lock;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationTimingFunction:(id)arg1;
+ (void)setCompletionBlock:(id)arg1;
+ (void)setDisableActions:(BOOL)arg1;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (void)unlock;
+ (id)valueForKey:(id)arg1;

// CATransaction (CATransactionInternal)

+ (id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2;

// CATransaction (CATransactionPrivate)

+ (void)activate;
+ (void)activateBackground:(BOOL)arg1;
+ (void)addCommitHandler:(id)arg1 forPhase:(int)arg2;
+ (BOOL)animatesFromModelValues;
+ (id)animator;
+ (void)assertInactive;
+ (double)commitTime;
+ (int)currentPhase;
+ (unsigned int)currentState;
+ (BOOL)disableRunLoopObserverCommits;
+ (double)earliestAutomaticCommitTime;
+ (unsigned int)generateSeed;
+ (double)inputTime;
+ (BOOL)lowLatency;
+ (void)popAnimator;
+ (void)pushAnimator:(id)arg1;
+ (void)setAnimatesFromModelValues:(BOOL)arg1;
+ (void)setCommitHandler:(id)arg1;
+ (void)setCommitTime:(double)arg1;
+ (void)setDisableRunLoopObserverCommits:(BOOL)arg1;
+ (void)setEarliestAutomaticCommitTime:(double)arg1;
+ (void)setInputTime:(double)arg1;
+ (void)setLowLatency:(BOOL)arg1;
+ (void)synchronize;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// CATransaction (NSBackground)

+ (BOOL)NS_isBackground;
+ (void)NS_setBackground:(BOOL)arg1;

// CATransaction (NSCATransaction)

+ (void)NS_apply:(long long)arg1 block:(id)arg2;
+ (void)NS_setFlushesWithDisplayRefresh;

@end
