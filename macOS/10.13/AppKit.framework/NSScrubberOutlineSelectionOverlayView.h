/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSScrubberOutlineSelectionOverlayView : NSScrubberSelectionView {
    unsigned int  _allowsHighlight;
    unsigned int  _previousDrawHighlight;
    unsigned int  _previousDrawSelected;
    unsigned int  _reservedOverlayFlags;
}

@property (atomic, readwrite) BOOL showsHighlight;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (struct __CFDictionary { }*)_coreUIDrawOptions;
- (void)_outlineCommonInit;
- (void)_previousDrawStateSelected:(BOOL*)arg1 highlighted:(BOOL*)arg2;
- (void)_setPreviousDrawStateSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
- (BOOL)_shouldDraw;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)itemCornerRadius;
- (void)setShowsHighlight:(BOOL)arg1;
- (BOOL)showsHighlight;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end