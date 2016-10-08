/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSColorPickerGridView : NSView {
    NSColorList * _colorList;
    <NSColorPickerGridViewDelegate> * _delegate;
    struct { 
        unsigned int _emptyEnabled : 1; 
        unsigned int _reserved : 30; 
    }  _flags;
    NSIndexPath * _hoveredIndexPath;
    NSImage * _image;
    unsigned long long  _numberOfColumns;
    unsigned long long  _numberOfRows;
    NSColor * _selectedColor;
    NSTrackingArea * _trackArea;
}

@property (atomic, readonly) NSColorList *colorList;
@property (atomic, readwrite) <NSColorPickerGridViewDelegate> *delegate;
@property (getter=isEmptyColorEnabled, atomic, readwrite) BOOL emptyColorEnabled;
@property (atomic, readwrite) unsigned long long numberOfColumns;
@property (atomic, readwrite) unsigned long long numberOfRows;
@property (atomic, readwrite, copy) NSColor *selectedColor;

+ (id)defaultColorList;

- (id)_accessibilityAttributeValue:(id)arg1 forIndexedChild:(id)arg2;
- (id)_accessibilityChildren;
- (unsigned long long)_accessibilityIndexForIndexPath:(id)arg1;
- (id)_bezierPathForColorAtIndexPath:(id)arg1;
- (id)_colorAtIndexPath:(id)arg1;
- (id)_colorIndexPathAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_indexPathForAccessibilityIndex:(unsigned long long)arg1;
- (id)_indexPathForColor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForColorAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForColorAtIndexPath:(id)arg1 expanded:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForColorAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 expanded:(double)arg3;
- (void)_selectColor:(id)arg1 withIndexPath:(id)arg2;
- (void)_updateConfigs;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)colorAtIndex:(unsigned long long)arg1;
- (id)colorList;
- (void)dealloc;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isEmptyColorEnabled;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForColorAtIndex:(unsigned long long)arg1;
- (void)selectColorAtIndex:(unsigned long long)arg1;
- (void)selectColorAtIndexPath:(id)arg1;
- (id)selectedColor;
- (void)setColorList:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmptyColorEnabled:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)setNumberOfRows:(unsigned long long)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSwatchSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateTrackingAreas;

@end
