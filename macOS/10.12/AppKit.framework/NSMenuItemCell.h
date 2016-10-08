/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSMenuItemCell : NSButtonCell {
    id  _extraData;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct __micFlags { 
        unsigned int needsSizing : 1; 
        unsigned int reserved : 1; 
        unsigned int needsDisplay : 1; 
        unsigned int keyEquivGlyphWidth : 16; 
        unsigned int uniqueAgainstMain : 1; 
        unsigned int RESERVED : 12; 
    }  _micFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct CGSize { 
        double width; 
        double height; 
    }  _stateImageSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _titleSize;
}

@property (atomic, readonly) double imageWidth;
@property (atomic, readonly) double keyEquivalentWidth;
@property (atomic, readwrite, retain) NSMenuItem *menuItem;
@property (atomic, readwrite) BOOL needsDisplay;
@property (atomic, readwrite) BOOL needsSizing;
@property (atomic, readonly) double stateImageWidth;
@property (atomic, readwrite) long long tag;
@property (atomic, readonly) double titleWidth;

+ (id)_dimmedImage:(id)arg1;
+ (void)_systemColorsChanged:(id)arg1;
+ (void)initialize;
+ (BOOL)prefersTrackingUntilMouseUp;

- (struct CGSize { double x1; double x2; })_borderInset;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_characterRangeForPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (id)_highlightColor;
- (id)_highlightTextColor;
- (short)_keyEquivalentGlyphWidth;
- (id)_keyEquivalentUniquerCreatingIfNecessary:(BOOL)arg1;
- (BOOL)_obeysHiddenBit;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)_rectsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_resetMeasuredCell;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorRectForCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isFlipped:(BOOL)arg2;
- (id)_sharedTextCell;
- (id)_specialControlView;
- (void)calcSize;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawBorderAndBackgroundWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawImageWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawKeyEquivalentWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawSeparatorItemWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawStateImageWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawTitleWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (id)image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)imageWidth;
- (id)init;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isOpaque;
- (id)keyEquivalentAttributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyEquivalentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)keyEquivalentWidth;
- (id)menuItem;
- (id)menuView;
- (unsigned long long)mnemonicLocation;
- (BOOL)needsDisplay;
- (BOOL)needsSizing;
- (id)representedObject;
- (void)setBordered:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setMenuItem:(id)arg1;
- (void)setMenuView:(id)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setNeedsSizing:(BOOL)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setTag:(long long)arg1;
- (long long)state;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stateImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)stateImageWidth;
- (long long)tag;
- (id)title;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)titleWidth;

@end
