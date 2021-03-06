/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSegmentItemImageCell : NSImageCell {
    int  _backgroundStyle;
    unsigned long long  _imageState;
}

@property (nonatomic, readwrite) int backgroundStyle;
@property (nonatomic, readwrite) unsigned long long imageState;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (unsigned long long)_currentImageStateForView:(id)arg1;
- (int)_effectiveBackgroundStyleInView:(id)arg1;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsIgnored;
- (int)backgroundStyle;
- (unsigned long long)imageState;
- (void)setBackgroundStyle:(int)arg1;
- (void)setImageState:(unsigned long long)arg1;

@end
