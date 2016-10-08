/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSLabelViewCell : NSActionCell {
    BOOL  _allowsMultipleSelection;
    long long  _focusedPart;
    long long  _hoveredPart;
    unsigned long long  _imagePosition;
    long long  _selectedParts;
}

@property (atomic, readwrite) BOOL allowsMultipleSelection;
@property (atomic, readwrite) long long diskLabelValues;
@property (atomic, readwrite) long long focusedPart;
@property (atomic, readwrite) long long hoveredPart;
@property (atomic, readwrite) unsigned long long imagePosition;
@property (atomic, readonly) long long numParts;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForLabel:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_commonInit;
- (id)_currentLabelName;
- (void)_deselectPart:(long long)arg1;
- (void)_drawBackgroundForPartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isPressedOrHovered:(BOOL)arg2;
- (void)_drawPart:(long long)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_handleMouseMovedForEvent:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (BOOL)_isHoveredPart:(long long)arg1;
- (BOOL)_isSelectedPart:(long long)arg1;
- (id)_labelAttributes;
- (id)_nameForLabelPart:(long long)arg1;
- (long long)_partAtPoint:(struct CGPoint { double x1; double x2; })arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_selectPart:(long long)arg1;
- (void)_valueChanged:(id)arg1;
- (BOOL)allowsMultipleSelection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)diskLabelValues;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (long long)focusedPart;
- (long long)hoveredPart;
- (unsigned long long)imagePosition;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)mouseEntered:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (void)mouseExited:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (long long)numParts;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })part:(long long)arg1 boundsWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)performClick:(id)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setDiskLabelValues:(long long)arg1;
- (void)setFocusedPart:(long long)arg1;
- (void)setHoveredPart:(long long)arg1;
- (void)setImagePosition:(unsigned long long)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;

// NSLabelViewCell (NSLabelViewAccessibility)

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForPart:(long long)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityDescriptionOfChild:(id)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (BOOL)accessibilityIsVisibleChildrenAttributeSettable;
- (void)accessibilityPerformAction:(id)arg1 forChild:(id)arg2;
- (id)accessibilityPositionOfChild:(id)arg1;
- (id)accessibilityRoleAttribute;
- (void)accessibilitySetFocus:(id)arg1 forChild:(id)arg2;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityValueAttribute;
- (id)accessibilityVisibleChildrenAttribute;

@end
