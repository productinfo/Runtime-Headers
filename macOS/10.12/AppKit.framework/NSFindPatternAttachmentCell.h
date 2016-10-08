/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSFindPatternAttachmentCell : NSTextAttachmentCell {
    NSColor * _NSFindPatternColor;
    NSColor * _NSFindPatternRolloverColor;
    NSColor * _NSFindPatternSelectedColor;
    NSTextField<NSFindPatternField> * _field;
    NSFindPattern * _findPattern;
    struct { 
        unsigned int _selected : 1; 
        unsigned int _reserved : 31; 
    }  _tacFlags;
    NSView * _view;
    int  cachedGroupID;
}

@property (atomic, readwrite) NSTextField<NSFindPatternField> *field;
@property (atomic, readwrite, retain) NSFindPattern *findPattern;

- (id)_attributedString;
- (BOOL)_hasMenu;
- (BOOL)_isActiveInView:(id)arg1;
- (void)_setGroupID:(int)arg1;
- (struct CGPoint { double x1; double x2; })cellBaselineOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (struct CGSize { double x1; double x2; })cellSize;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawTokenInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOptions:(id)arg2;
- (void)drawTokenWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)field;
- (id)findPattern;
- (id)init;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)interiorBackgroundStyle;
- (id)menu;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pullDownImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pullDownRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setField:(id)arg1;
- (void)setFindPattern:(id)arg1;
- (id)textColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)tokenColor;

@end
