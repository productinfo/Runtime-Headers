/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSLevelIndicatorCell : NSActionCell {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cellFrame;
    double  _criticalValue;
    struct { 
        unsigned int indicatorStyle : 4; 
        unsigned int tickMarkPosition : 1; 
        unsigned int selectable : 1; 
        unsigned int ratingPlaceholder : 1; 
        unsigned int reserved : 25; 
    }  _liFlags;
    double  _maxValue;
    double  _minValue;
    int  _numberOfMajorTickMarks;
    int  _numberOfTickMarks;
    int  _reserved1;
    int  _reserved2;
    int  _reserved3;
    int  _reserved4;
    double  _value;
    double  _warningValue;
}

@property (atomic, readwrite) double criticalValue;
@property (atomic, readwrite) unsigned long long levelIndicatorStyle;
@property (atomic, readwrite) double maxValue;
@property (atomic, readwrite) double minValue;
@property (atomic, readwrite) long long numberOfMajorTickMarks;
@property (atomic, readwrite) long long numberOfTickMarks;
@property (atomic, readwrite) unsigned long long tickMarkPosition;
@property (atomic, readwrite) double warningValue;

+ (void)initialize;
+ (BOOL)prefersTrackingUntilMouseUp;

- (BOOL)_shouldDrawRTL;
- (BOOL)acceptsFirstResponder;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)continueTracking:(struct CGPoint { double x1; double x2; })arg1 at:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3;
- (double)criticalValue;
- (double)doubleValue;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (id)init;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLevelIndicatorStyle:(unsigned long long)arg1;
- (int)intValue;
- (long long)integerValue;
- (BOOL)isOpaque;
- (BOOL)isSelectable;
- (BOOL)keyDown:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (unsigned long long)levelIndicatorStyle;
- (double)maxValue;
- (double)minValue;
- (long long)numberOfMajorTickMarks;
- (long long)numberOfTickMarks;
- (id)objectValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfTickMarkAtIndex:(long long)arg1;
- (void)setCriticalValue:(double)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setFloatValue:(float)arg1;
- (void)setImage:(id)arg1;
- (void)setIntValue:(int)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setLevelIndicatorStyle:(unsigned long long)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setNumberOfMajorTickMarks:(long long)arg1;
- (void)setNumberOfTickMarks:(long long)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setSelectable:(BOOL)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTickMarkPosition:(unsigned long long)arg1;
- (void)setWarningValue:(double)arg1;
- (BOOL)startTrackingAt:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)stopTracking:(struct CGPoint { double x1; double x2; })arg1 at:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (id)stringValue;
- (unsigned long long)tickMarkPosition;
- (double)tickMarkValueAtIndex:(long long)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (double)warningValue;

// NSLevelIndicatorCell (NSLevelIndicatorCellAccessibility)

- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAllowedValuesAttribute;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityCriticalValueAttribute;
- (BOOL)accessibilityIsAllowedValuesAttributeSettable;
- (BOOL)accessibilityIsChildrenValueAttributeSettable;
- (BOOL)accessibilityIsCriticalValueAttributeSettable;
- (BOOL)accessibilityIsMaxValueAttributeSettable;
- (BOOL)accessibilityIsMinValueAttributeSettable;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (BOOL)accessibilityIsWarningValueAttributeSettable;
- (id)accessibilityMaxValueAttribute;
- (id)accessibilityMinValueAttribute;
- (id)accessibilityOrientationAttribute;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityRoleAttribute;
- (void)accessibilitySetValueAttribute:(id)arg1;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityValueAttribute;
- (id)accessibilityWarningValueAttribute;

// NSLevelIndicatorCell (NSPrivate)

- (double)_dotFadeAlpha;
- (void)_drawContinuousCapacityWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)_drawDiscreteCapacityWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)_drawRatingWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)_drawRelevancyWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)_drawTickMarksWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (BOOL)_efectiveDrawRatingPlaceholder;
- (struct CGSize { double x1; double x2; })_rankIndicatorSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectOfDiscreteBrickAtIndex:(long long)arg1 withDrawingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_starColorOnDark:(BOOL)arg1;
- (void)_updateTrackingValueForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)alwaysDrawRatingPlaceholder;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (void)setAlwaysDrawRatingPlaceholder:(BOOL)arg1;

@end
