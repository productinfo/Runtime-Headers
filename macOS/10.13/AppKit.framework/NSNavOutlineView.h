/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSNavOutlineView : NSOutlineView {
    unsigned int  _delegate_displayStateForItem;
    unsigned int  _delegate_labelColorForItem;
    int  _displayStateForDrawingRow;
    NSCell * _fauxHighlightedCell;
    long long  _fauxHighlightedCellCol;
    long long  _fauxHighlightedCellRow;
    unsigned int  _reserved2;
}

@property (atomic, readwrite) <NSNavOutlineViewDelegate> *delegate;
@property (atomic, readonly) int displayStateForDrawingRow;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (unsigned long long)defaultFocusRingType;

- (BOOL)_canUseReorderResizeImageCacheForColumn:(long long)arg1;
- (BOOL)_canUseWhiteDisclosureTriangles;
- (BOOL)_shouldAnimateChanges;
- (BOOL)_shouldContinueExpandAtLevel:(long long)arg1 beganAtLevel:(long long)arg2;
- (BOOL)_shouldSetObjectValueOnCellsForAnimations;
- (double)_sizeToFitWidthOfColumn:(long long)arg1 row:(long long)arg2;
- (BOOL)_supportsTrackingAreasForCells;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)cellAtRow:(long long)arg1 column:(long long)arg2 loaded:(BOOL)arg3;
- (id)delegate;
- (int)displayStateForDrawingRow;
- (void)drawRow:(long long)arg1 clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfOutlineCellAtRow:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)performKeyEquivalent:(id)arg1;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)sendMouseUpActionForDisabledCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (void)setDelegate:(id)arg1;
- (void)setFauxHighlightedCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (BOOL)showsOutlineCell;

@end
