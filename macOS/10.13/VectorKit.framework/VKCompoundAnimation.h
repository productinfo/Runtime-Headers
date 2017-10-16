/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKCompoundAnimation : VKAnimation {
    NSMutableArray * _animations;
    id  _groupStepHandler;
}

@property (nonatomic, readonly) NSMutableArray *animations;
@property (nonatomic, readwrite, copy) id groupStepHandler;

- (id)animations;
- (void)dealloc;
- (double)duration;
- (id)groupStepHandler;
- (id)initWithAnimations:(id)arg1;
- (void)onTimerFired:(double)arg1;
- (void)pause;
- (void)resume;
- (BOOL)running;
- (BOOL)runsForever;
- (void)setDuration:(double)arg1;
- (void)setGroupStepHandler:(id)arg1;
- (void)setRunsForever:(BOOL)arg1;
- (void)startWithRunner:(id)arg1;
- (void)stopAnimation:(BOOL)arg1;
- (BOOL)timed;

@end