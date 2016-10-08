/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSColorPickerPencilView : NSView {
    NSLayoutConstraint * _aspectRatioConstraint;
    NSColorPickerPencils * _controllingPicker;
    NSColoredPencil * _currentFocusedPencil;
    unsigned int  _didCompleteScaledPencilRender;
    unsigned int  _didHoverOutsideSelectedPencil;
    NSColoredPencil * _hoveredPencil;
    NSColorList * _pencilColorList;
    NSMutableDictionary * _pencilLayers;
    NSMutableArray * _pencils;
    unsigned int  _reservedFlags;
    NSColoredPencil * _selectedPencil;
    NSTrackingArea * _trackingArea;
}

@property (atomic, readonly) NSColorList *_colorList;
@property (atomic, readonly) NSColoredPencil *_focusedPencil;
@property (atomic, readonly) BOOL _hasFocusRing;
@property (atomic, readonly, copy) NSArray *_pencils;
@property (atomic, readonly) NSColoredPencil *_selectedPencil;
@property (atomic, readonly) BOOL _shouldShowFocusRing;
@property (atomic, readwrite, copy) NSColor *color;
@property (atomic, readonly, copy) NSString *localizedColorNameComponent;

- (id)_layerForPencil:(id)arg1;
- (id)_namedPencil;
- (void)_pencilViewCommonInit;
- (void)_removeAllPencilLayers;
- (void)_setLayer:(id)arg1 forPencil:(id)arg2;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (void)_updateFramesForPencils:(id)arg1 duration:(double)arg2;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstResponder;
- (void)awakeFromNib;
- (BOOL)becomeFirstResponder;
- (id)color;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isFlipped;
- (void)layout;
- (id)localizedColorNameComponent;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)resignFirstResponder;
- (void)setColor:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;

// NSColorPickerPencilView (NSColorPickerPencilViewAccessibility)

- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityLabel;
- (id)accessibilityRoleAttribute;
- (id)accessibilityValueAttribute;

// NSColorPickerPencilView (NSKeyboardUI)

- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveUp:(id)arg1;

// NSColorPickerPencilView (NSMouseUI)

- (void)_hoverAndSelectPencilWithEvent:(id)arg1;
- (id)_pencilAtEventLocation:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseDragged:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)updateTrackingAreas;

// NSColorPickerPencilView (NSPencilCore)

- (id)_colorList;
- (void)_enumeratePencilsWithBlock:(id)arg1;
- (id)_pencilAtRow:(long long)arg1 column:(long long)arg2;
- (id)_pencilWithColor:(id)arg1;
- (id)_pencils;
- (void)_row:(long long*)arg1 column:(long long*)arg2 ofPencil:(id)arg3;
- (id)_selectedPencil;
- (void)_updatePencilsFromColorList;

// NSColorPickerPencilView (NSPencilFocusRing)

- (void)_addFocusToLayer:(id)arg1;
- (void)_addFocusToLayer:(id)arg1 animate:(BOOL)arg2;
- (id)_focusedPencil;
- (BOOL)_hasFocusRing;
- (void)_removeFocusFromLayer:(id)arg1;
- (BOOL)_shouldShowFocusRing;
- (void)_updateFocusRing;

// NSColorPickerPencilView (NSPencilGeometryMeasurement)

+ (id)_representativePencilImage;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateFrameForPencil:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateFrameForPencil:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfPencil:(id)arg1;
- (id)_pencilAtViewPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unobscuredFrameOfPencil:(id)arg1;

// NSColorPickerPencilView (NSPencilNavigation)

- (id)_bottomMostPencil;
- (id)_leftMostPencil;
- (id)_pencilAbove:(id)arg1;
- (id)_pencilBelow:(id)arg1;
- (id)_pencilLeftOf:(id)arg1;
- (id)_pencilRightOf:(id)arg1;
- (id)_rightMostPencil;
- (id)_topMostPencil;

// NSColorPickerPencilView (NSPencilSelectionAndHovering)

- (void)_hoverPencil:(id)arg1;
- (void)_selectPencil:(id)arg1 updateSelection:(BOOL)arg2 animate:(BOOL)arg3;

@end
