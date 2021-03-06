/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNUIBindableView : NSView {
    SEL  action;
    NSString * observedKeyPath;
    NSObject * observer;
    id  target;
}

@property (nonatomic, readwrite) SEL action;
@property (nonatomic, readwrite) id target;

- (void).cxx_destruct;
- (SEL)action;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)triggerBindings;

@end
