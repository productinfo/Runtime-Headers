/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarCustomizationPreviewSectionShade : NSView <NSAccessibilityButton, NSCollectionViewElement> {
    NSString * _accessibilityLabel;
    SEL  _action;
    long long  _tag;
    id  _target;
}

@property (atomic, readwrite, copy) NSString *accessibilityLabel;
@property (atomic, readwrite) SEL action;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) NSString *identifier;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) long long tag;
@property (atomic, readwrite) id target;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (void).cxx_destruct;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (SEL)action;
- (void)handleClick:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (void)prepareForReuse;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTag:(long long)arg1;
- (void)setTarget:(id)arg1;
- (long long)tag;
- (id)target;

@end