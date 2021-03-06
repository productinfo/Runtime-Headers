/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNConstraint : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {
    SCNOrderedDictionary * _animations;
    NSMutableDictionary * _bindings;
    struct __C3DConstraint { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFString {} *x2; float x3; bool x4; bool x5; struct { int (*x_6_1_1)(); int (*x_6_1_2)(); int (*x_6_1_3)(); int (*x_6_1_4)(); int (*x_6_1_5)(); int (*x_6_1_6)(); } x6; void *x7; } * _constraintRef;
    BOOL  _enabled;
    BOOL  _incremental;
    double  _influenceFactor;
}

@property (atomic, readonly) NSArray *animationKeys;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readwrite) BOOL enabled;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isIncremental, nonatomic, readwrite) BOOL incremental;
@property (nonatomic, readwrite) double influenceFactor;
@property (atomic, readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (const void*)__CFObject;
- (BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (void)_syncObjCAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (struct __C3DConstraint { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFString {} *x2; float x3; bool x4; bool x5; struct { int (*x_6_1_1)(); int (*x_6_1_2)(); int (*x_6_1_3)(); int (*x_6_1_4)(); int (*x_6_1_5)(); int (*x_6_1_6)(); } x6; void *x7; }*)constraintRef;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeDecodeConstraint:(id)arg1;
- (double)influenceFactor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (BOOL)isEnabled;
- (BOOL)isIncremental;
- (BOOL)isPausedOrPausedByInheritance;
- (id)name;
- (void)pauseAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setConstraintRef:(struct __C3DConstraint { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFString {} *x2; float x3; bool x4; bool x5; struct { int (*x_6_1_1)(); int (*x_6_1_2)(); int (*x_6_1_3)(); int (*x_6_1_4)(); int (*x_6_1_5)(); int (*x_6_1_6)(); } x6; void *x7; }*)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setIncremental:(BOOL)arg1;
- (void)setInfluenceFactor:(double)arg1;
- (void)setName:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)unbindAnimatablePath:(id)arg1;

@end
