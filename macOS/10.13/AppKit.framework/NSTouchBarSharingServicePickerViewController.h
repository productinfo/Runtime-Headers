/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarSharingServicePickerViewController : NSViewController {
    <NSSharingServicePickerTouchBarItemDelegate> * _delegate;
    NSSharingServicePicker * _picker;
    NSStackView * _stackView;
}

@property (atomic, readwrite) <NSSharingServicePickerTouchBarItemDelegate> *delegate;

- (void).cxx_destruct;
- (void)_loadContents;
- (void)_showAppExtensionsPref:(id)arg1;
- (BOOL)_viewControllerSupports10_10Features;
- (id)delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)viewWillAppear;

@end