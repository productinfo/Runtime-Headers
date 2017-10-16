/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTabBarItem : NSObject <NSSecureCoding> {
    NSArray * _accessoryViews;
    NSImage * _alternateImage;
    NSAttributedString * _attributedTitle;
    NSImage * _image;
    NSString * _label;
    BOOL  _pinned;
    NSColor * _themeColor;
    NSString * _toolTip;
}

@property (atomic, readwrite, copy) NSArray *accessoryViews;
@property (atomic, readwrite, retain) NSImage *alternateImage;
@property (atomic, readwrite, copy) NSAttributedString *attributedTitle;
@property (atomic, readwrite, retain) NSImage *image;
@property (atomic, readwrite, copy) NSString *label;
@property (getter=isPinned, atomic, readwrite) BOOL pinned;
@property (atomic, readwrite, copy) NSColor *themeColor;
@property (atomic, readwrite, copy) NSString *toolTip;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryViews;
- (id)alternateImage;
- (id)attributedTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isPinned;
- (id)label;
- (void)setAccessoryViews:(id)arg1;
- (void)setAlternateImage:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPinned:(BOOL)arg1;
- (void)setThemeColor:(id)arg1;
- (void)setToolTip:(id)arg1;
- (id)themeColor;
- (id)toolTip;

@end