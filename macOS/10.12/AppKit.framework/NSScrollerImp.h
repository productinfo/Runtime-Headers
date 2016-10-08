/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSScrollerImp : NSObject {
    double  _expansionTransitionProgress;
    struct __sImpFlags2 { 
        unsigned int hitPart : 4; 
        unsigned int controlSize : 2; 
        unsigned int inMaxEnd : 1; 
        unsigned int setFloatValueOverridden : 1; 
        unsigned int setFloatValueKnobProportionOverridden : 1; 
        unsigned int style : 1; 
        unsigned int overlayScrollerState : 2; 
        unsigned int enabled : 1; 
        unsigned int avoidingOtherScrollerThumb : 1; 
        unsigned int tracking : 1; 
        unsigned int rangeIndicatorsShown : 1; 
        unsigned int knobStyle : 2; 
        unsigned int shouldDrawRolloverState : 1; 
        unsigned int isExpanded : 1; 
        unsigned int rectForPartUsesExpandedParts : 1; 
        unsigned int rectForPartUsesPresentationValue : 1; 
        unsigned int usePresentationValue : 1; 
        unsigned int useCoreUILayerContents : 1; 
        unsigned int userInterfaceLayoutDirection : 1; 
        unsigned int invalid : 1; 
        unsigned int reserved : 7; 
    }  _sFlags2;
    double  _uiStateTransitionProgress;
    id  _unused1;
    SEL  action;
    struct CGSize { 
        double width; 
        double height; 
    }  boundsSize;
    NSTrackingArea * contentViewTrackingArea;
    <NSScrollerImpDelegate> * delegate;
    double  doubleValue;
    double  knobAlpha;
    CALayer * knobLayer;
    double  knobLength;
    double  knobProportion;
    CALayer * layer;
    BOOL * outstandingRolloverAnimationCancelledPtr;
    double  presentationValue;
    double  rangeIndicatorAlpha;
    struct _sImpFlags { 
        unsigned int isHoriz : 1; 
        unsigned int arrowsLoc : 2; 
        unsigned int partsUsable : 2; 
        unsigned int fine : 1; 
        unsigned int needsEnableFlush : 1; 
        unsigned int thumbing : 1; 
        unsigned int slotDrawn : 1; 
        unsigned int knobDrawn : 1; 
        unsigned int lit : 1; 
        unsigned int knobLit : 1; 
        unsigned int reserved : 1; 
        unsigned int controlTint : 3; 
        unsigned int repeatCount : 16; 
    }  sFlags;
    NSScroller * scroller;
    id  target;
    double  trackAlpha;
    CALayer * trackLayer;
    id  unused0;
}

@property (atomic, readwrite) SEL action;
@property (atomic, readwrite) BOOL avoidingOtherScrollerThumb;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } boundsSize;
@property (atomic, readonly) unsigned long long controlSize;
@property (atomic, readwrite) <NSScrollerImpDelegate> *delegate;
@property (atomic, readwrite) double doubleValue;
@property (getter=isEnabled, atomic, readwrite) BOOL enabled;
@property (getter=isExpanded, atomic, readwrite) BOOL expanded;
@property (atomic, readwrite) double expansionTransitionProgress;
@property (getter=isHorizontal, atomic, readwrite) BOOL horizontal;
@property (atomic, readwrite) double knobAlpha;
@property (atomic, readonly) double knobEndInset;
@property (atomic, readwrite, retain) CALayer *knobLayer;
@property (atomic, readonly) double knobLength;
@property (atomic, readonly) double knobMinLength;
@property (atomic, readonly) double knobOverlapEndInset;
@property (atomic, readwrite) double knobProportion;
@property (atomic, readwrite) long long knobStyle;
@property (atomic, readwrite, retain) CALayer *layer;
@property (atomic, readwrite) double presentationValue;
@property (atomic, readwrite) double rangeIndicatorAlpha;
@property (atomic, readwrite) NSScroller *scroller;
@property (atomic, readonly) long long scrollerStyle;
@property (atomic, readwrite) BOOL shouldDrawRolloverState;
@property (atomic, readwrite) id target;
@property (atomic, readwrite) double trackAlpha;
@property (atomic, readonly) double trackBoxWidth;
@property (atomic, readonly) double trackEndInset;
@property (atomic, readwrite, retain) CALayer *trackLayer;
@property (atomic, readonly) double trackOverlapEndInset;
@property (atomic, readonly) double trackSideInset;
@property (atomic, readonly) double trackWidth;
@property (atomic, readwrite) double uiStateTransitionProgress;
@property (getter=shouldUsePresentationValue, atomic, readwrite) BOOL usePresentationValue;
@property (atomic, readwrite) long long userInterfaceLayoutDirection;

+ (Class)scrollerImpClassForStyle:(long long)arg1 controlSize:(unsigned long long)arg2;
+ (id)scrollerImpWithStyle:(long long)arg1 controlSize:(unsigned long long)arg2 horizontal:(BOOL)arg3 replacingScrollerImp:(id)arg4;
+ (double)scrollerWidth;
+ (double)scrollerWidthForControlSize:(unsigned long long)arg1 scrollerStyle:(long long)arg2;

- (void)_animateCollapse;
- (void)_animateExpansion;
- (void)_animateOutOfRolloverState;
- (void)_animateToRolloverState;
- (void)_compositeScrollerPart:(unsigned long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withAlpha:(double)arg3 drawHandler:(id)arg4;
- (void)_doWork:(id)arg1;
- (double)_expandedKnobMinLength;
- (double)_expandedTrackBoxWidth;
- (double)_expandedTrackWidth;
- (BOOL)_hasCustomScroller;
- (void)_installDelayedRolloverAnimation;
- (id)_makeMaskLayer;
- (id)_makeScrollerPartLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rolloverTrackingRect;
- (void)_setUseCoreUILayerContents:(BOOL)arg1;
- (void)_setupCommonLayerProperties:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_threadsafeRectForPart:(unsigned long long)arg1 preBlock:(id)arg2 postBlock:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unsafeRectForPart:(unsigned long long)arg1;
- (void)_updateKnobPresentation;
- (void)_updateLayerGeometry;
- (BOOL)_useCoreUILayerContents;
- (BOOL)_usesSeparateLayersPerPart;
- (id)_vibrancyFilterForAppearance:(id)arg1;
- (BOOL)_wantsRedisplayOnExpansionProgress;
- (SEL)action;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)allowsVibrancyForAppearance:(id)arg1;
- (BOOL)avoidingOtherScrollerThumb;
- (struct CGSize { double x1; double x2; })boundsSize;
- (void)checkSpaceForParts;
- (unsigned long long)controlSize;
- (struct __CFDictionary { }*)copyCoreUIKnobOptions;
- (struct __CFDictionary { }*)copyCoreUIOptions;
- (struct __CFDictionary { }*)copyCoreUITrackOptions;
- (void)dealloc;
- (id)delegate;
- (void)displayLayer:(id)arg1;
- (double)doubleValue;
- (void)drawKnob;
- (void)drawKnobSlotInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 highlight:(BOOL)arg2;
- (void)drawKnobSlotInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 highlight:(BOOL)arg2 alpha:(double)arg3;
- (void)drawKnobWithAlpha:(double)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (double)expansionTransitionProgress;
- (BOOL)hitTestForLocalPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (void)invalidate;
- (BOOL)isEnabled;
- (BOOL)isExpanded;
- (BOOL)isHorizontal;
- (BOOL)isTracking;
- (double)knobAlpha;
- (double)knobEndInset;
- (double)knobInset;
- (id)knobLayer;
- (double)knobLength;
- (double)knobMinLength;
- (double)knobOverlapEndInset;
- (double)knobProportion;
- (long long)knobStyle;
- (id)layer;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)loadImages;
- (void)mouseEnteredScroller;
- (void)mouseExitedScroller;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)overlayScrollerState;
- (double)presentationValue;
- (double)rangeIndicatorAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPart:(unsigned long long)arg1;
- (void)removeTrackingAreas;
- (id)scroller;
- (long long)scrollerStyle;
- (void)setAction:(SEL)arg1;
- (void)setAvoidingOtherScrollerThumb:(BOOL)arg1;
- (void)setBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setExpansionTransitionProgress:(double)arg1;
- (void)setHorizontal:(BOOL)arg1;
- (void)setKnobAlpha:(double)arg1;
- (void)setKnobLayer:(id)arg1;
- (void)setKnobProportion:(double)arg1;
- (void)setKnobStyle:(long long)arg1;
- (void)setLayer:(id)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOverlayScrollerState:(unsigned long long)arg1 forceImmediately:(BOOL)arg2;
- (void)setPresentationValue:(double)arg1;
- (void)setRangeIndicatorAlpha:(double)arg1;
- (void)setScroller:(id)arg1;
- (void)setShouldDrawRolloverState:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (void)setTrackAlpha:(double)arg1;
- (void)setTrackLayer:(id)arg1;
- (void)setTracking:(BOOL)arg1;
- (void)setUiStateTransitionProgress:(double)arg1;
- (void)setUsePresentationValue:(BOOL)arg1;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (BOOL)shouldDrawRolloverState;
- (BOOL)shouldUsePresentationValue;
- (id)target;
- (double)trackAlpha;
- (double)trackBoxWidth;
- (double)trackEndInset;
- (id)trackLayer;
- (double)trackOverlapEndInset;
- (double)trackSideInset;
- (double)trackWidth;
- (double)uiStateTransitionProgress;
- (void)updateTrackingAreas;
- (unsigned long long)usableParts;
- (long long)userInterfaceLayoutDirection;

@end
