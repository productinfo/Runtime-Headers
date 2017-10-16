/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNAnimationEvent : NSObject {
    id  _eventBlock;
    double  _eventTime;
}

+ (id)animationEventWithKeyTime:(double)arg1 block:(id)arg2;

- (void)dealloc;
- (id)eventBlock;
- (id)init;
- (void)setEventBlock:(id)arg1;
- (void)setTime:(double)arg1;
- (double)time;

@end