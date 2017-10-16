/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPageController : NSViewController <DebugHierarchyObject, NSAnimatablePropertyContainer, NSCoding> {
    NSDictionary * _animationsDictionary;
    id  _animator;
    NSMutableArray * _arrangedObjects;
    BOOL * _cancelAnimation;
    NSView * _contentView;
    NSString * _currentIdentifier;
    <NSPageControllerDelegate> * _delegate;
    struct __pcDelegateFlags { 
        unsigned int delegateRespondsToIdentifierForRepresentedObject : 1; 
        unsigned int delegateRespondsToViewControllerForIdentifier : 1; 
        unsigned int delegateRespondsToFrameForRepresentedObject : 1; 
        unsigned int delegateRespondsToPrepareView : 1; 
        unsigned int delegateRespondsToDidTransition : 1; 
        unsigned int delegateRespondsToWillLiveTransition : 1; 
        unsigned int delegateRespondsToDidLiveTransition : 1; 
        unsigned int delegateRespondsToReserved1 : 1; 
        unsigned int reserved : 24; 
    }  _pcDelegateFlags;
    struct __pcFlags { 
        unsigned int templateCacheIsInvalid : 1; 
        unsigned int private1 : 1; 
        unsigned int private2 : 1; 
        unsigned int inSwipeGesture : 1; 
        unsigned int reserved : 28; 
    }  _pcFlags;
    id  _private;
    NSMutableDictionary * _reusueQueue;
    long long  _selectedIndex;
    NSViewController * _selectedViewController;
    NSMutableArray * _snapshots;
    NSMutableDictionary * _templateCache;
    long long  _transitionStyle;
    NSView * _transitionView;
}

@property (atomic, readwrite, copy) NSDictionary *animations;
@property (atomic, readwrite, copy) NSArray *arrangedObjects;
@property (atomic, readwrite) NSView *contentView;
@property (atomic, readwrite, retain) NSString *currentIdentifier;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <NSPageControllerDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) long long selectedIndex;
@property (atomic, readwrite, retain) NSViewController *selectedViewController;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) long long transitionStyle;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (void)_performWithoutAnimation:(id)arg1;
+ (id)defaultAnimationForKey:(id)arg1;

- (void).cxx_destruct;
- (void)_animateImage:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toImage:(id)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 direction:(long long)arg5;
- (void)_animateView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toView:(id)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 direction:(long long)arg5;
- (Class)_animatorClass;
- (void)_cachePotentialViewControllers;
- (void)_cacheReusableViewController:(id)arg1 identifier:(id)arg2;
- (void)_cacheViewController:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 toCompletionHandler:(id)arg3;
- (BOOL)_cacheViewControllerForRepresentedObjectIfNeeded:(id)arg1;
- (id)_cgSnapshotOfView:(id)arg1;
- (double)_destinationAlphaOfDestinationTransitionViewForDirection:(long long)arg1;
- (double)_destinationAlphaOfFilterTansitionViewForDirection:(long long)arg1 destinationValid:(BOOL)arg2;
- (double)_destinationAlphaOfSourceTansitionViewForDirection:(long long)arg1 destinationValid:(BOOL)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_destinationFrameOfSourceTansitionViewForDirection:(long long)arg1 destinationValid:(BOOL)arg2;
- (id)_destinationTransitionView;
- (id)_effectiveContentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfRepresentedObjectFromDelegate:(id)arg1 defaultFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_initializeTransitionViewHierarchy;
- (BOOL)_isInSwipeGesture;
- (id)_makeViewControllerWithIdentifier:(id)arg1;
- (void)_navigateToIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)_performAnimationWithDirection:(long long)arg1 destinationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_prepareViewController:(id)arg1 withObject:(id)arg2;
- (void)_removeFromResponderChainOfView:(id)arg1;
- (void)_setShouldDrawEdgeShadow:(BOOL)arg1;
- (void)_setupTransitionHierarchyWithSourceView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 destinationView:(id)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 forDirection:(long long)arg5 destinationValid:(BOOL)arg6;
- (BOOL)_shouldDrawEdgeShadow;
- (id)_snapshotOfView:(id)arg1;
- (id)_snapshotOfViewController:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_sourceTransitionView;
- (void)_startObservingView:(id)arg1;
- (void)_stopObservingView:(id)arg1;
- (void)_teardownTransitionHierarchy;
- (BOOL)_terminateCurrentAnimation;
- (void)_updateContentView;
- (void)_updateTemplateImageCache;
- (BOOL)_useCachedImageViewsForTransition;
- (void)_viewFrameChanged:(id)arg1;
- (id)animationForKey:(id)arg1;
- (id)animations;
- (id)animator;
- (id)arrangedObjects;
- (void)completeTransition;
- (id)contentView;
- (id)currentIdentifier;
- (void)dealloc;
- (id)delegate;
- (BOOL)dontCacheViewControllers;
- (void)encodeWithCoder:(id)arg1;
- (void)hideTransitionView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)navigateBack:(id)arg1;
- (void)navigateForward:(id)arg1;
- (void)navigateForwardToObject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeForwardNavigableObjects;
- (void)scrollWheel:(id)arg1;
- (long long)selectedIndex;
- (id)selectedViewController;
- (void)setAnimations:(id)arg1;
- (void)setArrangedObjects:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCurrentIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDontCacheViewControllers:(BOOL)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setSelectedViewController:(id)arg1;
- (void)setTransitionStyle:(long long)arg1;
- (void)setView:(id)arg1;
- (void)takeSelectedIndexFrom:(id)arg1;
- (long long)transitionStyle;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1;

// Image: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Debugger/libViewDebuggerSupport.dylib

// NSPageController (DebugHierarchyAdditions)

- (id)debugHierarchyPropertyDescriptions;

@end