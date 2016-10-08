/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSThemeAutosaveButtonCell : NSButtonCell {
    BOOL  _mouseInside;
}

- (BOOL)_hasRolloverContentArt;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageRectWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (unsigned long long)_interiorContentAppearanceInView:(id)arg1;
- (struct CGSize { double x1; double x2; })_minCellSize;
- (BOOL)_subclassOverridesDrawImage;
- (id)_textAttributes;
- (unsigned long long)_themeImageState;
- (void)_updateMouseInside:(BOOL)arg1;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (long long)interiorBackgroundStyle;
- (void)performClick:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// NSThemeAutosaveButtonCell (NSThemeAutosaveButtonCellAccessibility)

- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityDescriptionAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityRoleAttribute;

@end
