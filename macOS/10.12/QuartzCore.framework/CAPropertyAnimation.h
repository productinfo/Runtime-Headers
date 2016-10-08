/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
 */

@interface CAPropertyAnimation : CAAnimation

@property (getter=isAdditive, atomic, readwrite) BOOL additive;
@property (getter=isCumulative, atomic, readwrite) BOOL cumulative;
@property (atomic, readwrite, copy) NSString *keyPath;
@property (atomic, readwrite, retain) CAValueFunction *valueFunction;

// Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore

+ (id)animationWithKeyPath:(id)arg1;

- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1 layer:(id)arg2;
- (BOOL)additive;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (BOOL)cumulative;
- (BOOL)isAdditive;
- (BOOL)isCumulative;
- (id)keyPath;
- (void)setAdditive:(BOOL)arg1;
- (void)setCumulative:(BOOL)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setValueFunction:(id)arg1;
- (id)valueFunction;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// CAPropertyAnimation (NSInternal)

- (void)NS_addAffectedKeyPaths:(id)arg1;
- (void)NS_renameKeyPath:(id)arg1 toKeyPath:(id)arg2;
- (void)NS_renameKeyPathsUsingBlock:(id)arg1;

@end
