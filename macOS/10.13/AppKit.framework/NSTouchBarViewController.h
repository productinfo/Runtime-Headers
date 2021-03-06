/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarViewController : NSViewController {
    NSTouchBarItem * _escapeKeyReplacementItem;
    NSMutableArray * _groupItems;
    BOOL  _needsUpdateTree;
    NSMutableSet * _observedBars;
    NSTouchBarView * _touchBarView;
    NSMutableArray * _touchBars;
}

@property (atomic, readonly) NSTouchBarItem *escapeKeyReplacementItem;
@property (atomic, readonly) NSTouchBarView *touchBarView;
@property (atomic, readwrite, copy) NSArray *touchBars;

- (void)_diffTouchBars:(id)arg1 againstOldTouchBars:(id)arg2 blockForAdding:(id)arg3 blockForRemoving:(id)arg4;
- (id)_expandBars:(id)arg1;
- (void)_noteTouchBarsChanged;
- (void)_startObservingTouchBar:(id)arg1;
- (void)_stopObservingTouchBar:(id)arg1;
- (void)_updateTree;
- (BOOL)_viewControllerSupports10_10Features;
- (void)dealloc;
- (id)escapeKeyReplacementItem;
- (void)forceUpdateTree;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setTouchBars:(id)arg1;
- (id)touchBarView;
- (id)touchBars;
- (void)viewWillLayout;

@end
