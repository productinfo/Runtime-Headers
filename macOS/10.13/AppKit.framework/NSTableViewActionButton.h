/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTableViewActionButton : NSButton {
    NSColor * _backgroundColor;
    NSImageView * _imageView;
    NSTextField * _label;
    struct CGSize { 
        double width; 
        double height; 
    }  _requiredSize;
    NSTableViewRowAction * _rowAction;
}

@property (atomic, readwrite, retain) NSColor *backgroundColor;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } requiredSize;
@property (atomic, readwrite, retain) NSTableViewRowAction *rowAction;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (Class)cellClass;

- (void)_layoutContents;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (BOOL)allowsVibrancy;
- (id)backgroundColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layout;
- (struct CGSize { double x1; double x2; })requiredSize;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x1; double x2; })arg1;
- (id)rowAction;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setRequiredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRowAction:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
