/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSWindowTransformAnimation : NSAnimation {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    unsigned int  _animateAlpha;
    id  _completionBlock;
    double  _currentAnimationAlpha;
    NSWindow * _originalParentWindow;
    NSWindow * _originalWindow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalWindowFrame;
    double  _scaleAmount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    unsigned long long  _type;
    NSWindow * _window;
    unsigned int  _windowTransformAnimationReservedFlags;
}

@property (setter=_setAnimatesAlpha:, atomic, readwrite) BOOL _animatesAlpha;
@property (setter=_setScaleAmount:, atomic, readwrite) double _scaleAmount;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } anchorPoint;
@property (atomic, readonly) double currentAnimationAlpha;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } normalizedAnchorPoint;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } startPoint;
@property (atomic, readonly) NSWindow *window;

+ (id)_originalDocumentWindowForWindow:(id)arg1;
+ (void)beginDocumentWindowDuplicationForOriginalDocument:(id)arg1;
+ (void)beginNewDocumentWindowCreation;
+ (void)beginPersistentUIWindowRestoring;
+ (void)endDocumentWindowDuplication;
+ (void)endNewDocumentWindowCreation;
+ (void)endPersistentUIWindowRestoring;
+ (BOOL)isDuplicatingADocumentWindow;
+ (BOOL)isRestoringPersistentWindows;
+ (void)waitForAnimationToCompleteOnWindows:(id)arg1 forFullScreen:(BOOL)arg2;
+ (id)windowTransformAnimationWithWindow:(id)arg1 type:(long long)arg2 interruptingAnimation:(id)arg3;

- (BOOL)_animatesAlpha;
- (void)_cleanUpAnimation;
- (void)_duplicateAnimationStopped;
- (double)_scaleAmount;
- (id)_screen;
- (void)_setAnimatesAlpha:(BOOL)arg1;
- (void)_setScaleAmount:(double)arg1;
- (void)_stopAnimation:(int)arg1 withDisplayLink:(id)arg2;
- (id)_stringForAnimationType;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (double)currentAnimationAlpha;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 type:(long long)arg2 interruptingAnimation:(id)arg3;
- (BOOL)isOrderFrontAnimation;
- (BOOL)isOrderOutAnimation;
- (struct CGPoint { double x1; double x2; })normalizedAnchorPoint;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnimationAlphaValue:(double)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setCurrentProgress:(float)arg1;
- (void)setNormalizedAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setWindowFallOutTranslationProgress:(double)arg1;
- (void)setWindowFlyInTranslationProgress:(double)arg1;
- (void)setWindowMagnification:(double)arg1 forProgress:(double)arg2;
- (void)setWindowShakeProgress:(double)arg1;
- (void)startAnimation;
- (struct CGPoint { double x1; double x2; })startPoint;
- (id)window;

@end
