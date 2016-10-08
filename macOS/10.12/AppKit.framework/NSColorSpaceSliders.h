/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSColorSpaceSliders : NSObject <NSSliderViewRequiredMethods> {
    NSColorSpace * activeColorSpace;
    id  colorPanel;
    NSColorPickerSliders * controllingPicker;
}

+ (id)genericColorSpace;

- (void)_adjustControls:(id)arg1 andSetColor:(BOOL)arg2;
- (id)activeColorSpace;
- (void)adjustControls:(id)arg1;
- (void)dealloc;
- (id)fieldEditableControl;
- (void)finishProvideNewSubviewSetup;
- (id)provideNewSubview:(id)arg1;
- (id)regularColorIfPossible:(id)arg1;
- (struct CGSize { double x1; double x2; })requiredMinSize;
- (void)setActiveColorSpace:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setMatchedColor:(id)arg1;
- (void)takeColorSpaceFrom:(id)arg1;

@end
