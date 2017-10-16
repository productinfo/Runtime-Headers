/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKTheme : NSObject {
    NSDictionary * _contents;
}

@property (atomic, readonly) NSColor *active1Color;
@property (atomic, readonly) NSGradient *active1Gradient;
@property (atomic, readonly) NSColor *active2Color;
@property (atomic, readonly) NSGradient *active2Gradient;
@property (atomic, readonly) NSColor *background1Color;
@property (atomic, readonly) NSColor *background2Color;
@property (atomic, readonly) NSColor *blackColor;
@property (atomic, readonly) NSColor *blackShadow1Color;
@property (atomic, readonly) NSColor *blackShadow2Color;
@property (atomic, readonly) NSGradient *buttonSeparatorGradient;
@property (atomic, readonly) NSGradient *buttonSeparatorHighlightGradient;
@property (atomic, readonly) NSGradient *glassGradient;
@property (atomic, readonly) NSColor *glassSeparatorColor;
@property (atomic, readonly) NSColor *horizontalGrooved1;
@property (atomic, readonly) NSColor *horizontalGrooved2;
@property (atomic, readonly) NSGradient *horizontalSeparatorTaperedGradient;
@property (atomic, readonly) NSGradient *iconGradient;
@property (atomic, readonly) NSColor *inactiveColor;
@property (atomic, readonly) NSGradient *inactiveGradient;
@property (atomic, readonly) NSColor *parameterTextColor;
@property (atomic, readonly) NSGradient *pathSeparatorGradient;
@property (atomic, readonly) NSGradient *pathSeparatorHighlightGradient;
@property (atomic, readonly) NSGradient *pressedTabBackgroundGradient;
@property (atomic, readonly) NSGradient *scopeBar1Gradient;
@property (atomic, readonly) NSGradient *scopeBar2Gradient;
@property (atomic, readonly) NSGradient *selectedActiveGradient;
@property (atomic, readonly) NSGradient *selectedGlassGradient;
@property (atomic, readonly) NSGradient *selectedIconGradient;
@property (atomic, readonly) NSGradient *selectedTabBackgroundGradient;
@property (atomic, readonly) NSGradient *selectedTabBorderInnerGradient;
@property (atomic, readonly) NSGradient *selectedTabBorderOuterGradient;
@property (atomic, readonly) NSColor *stroke1Color;
@property (atomic, readonly) NSColor *stroke2Color;
@property (atomic, readonly) NSColor *stroke3Color;
@property (atomic, readonly) NSColor *stroke4Color;
@property (atomic, readonly) NSColor *stroke5Color;
@property (atomic, readonly) NSColor *stroke6Color;
@property (atomic, readonly) NSColor *stroke7Color;
@property (atomic, readonly) NSGradient *tabBackgroundGradient;
@property (atomic, readonly) NSColor *whiteColor;
@property (atomic, readonly) NSColor *whiteShadow1Color;
@property (atomic, readonly) NSColor *whiteShadow2Color;
@property (atomic, readonly) NSColor *windowBackgroundColor;

+ (id)_loadThemeFromURL:(id)arg1 error:(id*)arg2;
+ (id)_parseColorElement:(id)arg1 requireName:(BOOL)arg2 name:(id*)arg3 allowLocation:(BOOL)arg4 location:(double*)arg5 error:(id*)arg6;
+ (id)_parseFontElement:(id)arg1 name:(id*)arg2 error:(id*)arg3;
+ (id)_parseGradientElement:(id)arg1 name:(id*)arg2 error:(id*)arg3;
+ (id)_parseInsetElement:(id)arg1 name:(id*)arg2 error:(id*)arg3;
+ (id)currentTheme;

- (id)_initWithDictionary:(id)arg1;
- (id)active1Color;
- (id)active1Gradient;
- (id)active2Color;
- (id)active2Gradient;
- (id)background1Color;
- (id)background2Color;
- (id)blackColor;
- (id)blackShadow1Color;
- (id)blackShadow2Color;
- (id)buttonSeparatorGradient;
- (id)buttonSeparatorHighlightGradient;
- (id)glassGradient;
- (id)glassSeparatorColor;
- (id)horizontalGrooved1;
- (id)horizontalGrooved2;
- (id)horizontalSeparatorTaperedGradient;
- (id)iconGradient;
- (id)inactiveColor;
- (id)inactiveGradient;
- (id)parameterTextColor;
- (id)pathSeparatorGradient;
- (id)pathSeparatorHighlightGradient;
- (id)pressedTabBackgroundGradient;
- (id)scopeBar1Gradient;
- (id)scopeBar2Gradient;
- (id)selectedActiveGradient;
- (id)selectedGlassGradient;
- (id)selectedIconGradient;
- (id)selectedTabBackgroundGradient;
- (id)selectedTabBorderInnerGradient;
- (id)selectedTabBorderOuterGradient;
- (id)stroke1Color;
- (id)stroke2Color;
- (id)stroke3Color;
- (id)stroke4Color;
- (id)stroke5Color;
- (id)stroke6Color;
- (id)stroke7Color;
- (id)tabBackgroundGradient;
- (id)whiteColor;
- (id)whiteShadow1Color;
- (id)whiteShadow2Color;
- (id)windowBackgroundColor;

@end