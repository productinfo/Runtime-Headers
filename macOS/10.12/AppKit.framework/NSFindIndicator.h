/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSFindIndicator : NSObject <NSImmediateActionAnimationController> {
    double  _animationInProgress;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    id  _completionHandler;
    id  _contentDrawer;
    <NSFindIndicatorDelegate> * _delegate;
    id  _imageProvider;
    id  _invoker;
    NSWindow * _parentWindow;
    NSArray * _rects;
    BOOL  _shouldFade;
    double  _startTime;
    NSTextFinder * _textFinder;
    BOOL  _usesThreadedAnimation;
    NSView * _view;
    BOOL  _visible;
    NSMutableArray * _windows;
}

@property (atomic, readwrite, copy) id completionHandler;
@property (atomic, readwrite, copy) id contentDrawer;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <NSFindIndicatorDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) id imageProvider;
@property (atomic, readwrite, retain) NSWindow *parentWindow;
@property (atomic, readwrite, copy) NSArray *rects;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, retain) NSTextFinder *textFinder;
@property (atomic, readwrite) BOOL usesThreadedAnimation;
@property (atomic, readwrite, retain) NSView *view;
@property (getter=isVisible, atomic, readwrite) BOOL visible;

+ (void)beginDrawing;
+ (void)endDrawing;
+ (BOOL)isDrawing;

- (id)_buildFindIndicatorWindows;
- (void)_cacheDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofView:(id)arg2 toBitmapImageRep:(id)arg3;
- (void)_cancel;
- (id)_contentImage;
- (void)_dissolve:(double)arg1 animate:(BOOL)arg2;
- (id)_effectiveParentWindow;
- (void)_fade:(double)arg1;
- (id)_findIndicatorPathForRects:(id)arg1;
- (id)_indicatorWindowGroupsOfRectGroupsForRects:(id)arg1;
- (void)_pulse:(double)arg1;
- (void)_redrawReusingWindows;
- (id)completionHandler;
- (id)contentDrawer;
- (void)dealloc;
- (id)delegate;
- (void)dissolve;
- (void)focusUAZoom;
- (id)imageProvider;
- (BOOL)isVisible;
- (id)parentWindow;
- (void)pulseAndFade:(BOOL)arg1;
- (void)pulseWithFade:(BOOL)arg1 andDissolve:(BOOL)arg2;
- (void)recognizerDidCancelAnimation:(id)arg1;
- (void)recognizerDidCompleteAnimation:(id)arg1;
- (void)recognizerDidDismissAnimation:(id)arg1;
- (void)recognizerDidUpdateAnimation:(id)arg1;
- (void)recognizerWillBeginAnimation:(id)arg1;
- (id)rects;
- (void)setCompletionHandler:(id)arg1;
- (void)setContentDrawer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setParentWindow:(id)arg1;
- (void)setRects:(id)arg1;
- (void)setTextFinder:(id)arg1;
- (void)setUsesThreadedAnimation:(BOOL)arg1;
- (void)setView:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (id)textFinder;
- (void)updateWithRects:(id)arg1;
- (BOOL)usesThreadedAnimation;
- (id)view;

@end
