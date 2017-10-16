/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSWindowTab : NSObject {
    NSView * _accessoryView;
    NSAttributedString * _attributedTitle;
    NSImage * _image;
    NSTabBarItem * _tabBarItem;
    NSString * _title;
    NSString * _toolTip;
    NSWindow * _window;
}

@property (atomic, readwrite, retain) NSView *accessoryView;
@property (atomic, readwrite, copy) NSAttributedString *attributedTitle;
@property (atomic, readwrite, copy) NSImage *image;
@property (atomic, readonly) NSTabBarItem *tabBarItem;
@property (atomic, readwrite, copy) NSString *title;
@property (atomic, readwrite, copy) NSString *toolTip;
@property (atomic, readwrite) NSWindow *window;

- (void).cxx_destruct;
- (id)accessoryView;
- (id)attributedTitle;
- (id)image;
- (void)setAccessoryView:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setToolTip:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)tabBarItem;
- (id)title;
- (id)toolTip;
- (id)window;

@end