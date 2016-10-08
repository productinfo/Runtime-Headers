/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDatePicker : NSControl

@property (atomic, readwrite, copy) NSColor *backgroundColor;
@property (getter=isBezeled, atomic, readwrite) BOOL bezeled;
@property (getter=isBordered, atomic, readwrite) BOOL bordered;
@property (atomic, readwrite, copy) NSCalendar *calendar;
@property (atomic, readwrite) unsigned long long datePickerElements;
@property (atomic, readwrite) unsigned long long datePickerMode;
@property (atomic, readwrite) unsigned long long datePickerStyle;
@property (atomic, readwrite, copy) NSDate *dateValue;
@property (atomic, readwrite) <NSDatePickerCellDelegate> *delegate;
@property (atomic, readwrite) BOOL drawsBackground;
@property (atomic, readwrite, copy) NSLocale *locale;
@property (atomic, readwrite, copy) NSDate *maxDate;
@property (atomic, readwrite, copy) NSDate *minDate;
@property (atomic, readwrite, copy) NSColor *textColor;
@property (atomic, readwrite) double timeInterval;
@property (atomic, readwrite, copy) NSTimeZone *timeZone;

+ (void)initialize;

- (void)_removeAllCellMouseTracking;
- (void)_setMouseTrackingForCell:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)backgroundColor;
- (double)baselineOffsetFromBottom;
- (BOOL)becomeFirstResponder;
- (id)calendar;
- (unsigned long long)datePickerElements;
- (unsigned long long)datePickerMode;
- (unsigned long long)datePickerStyle;
- (id)dateValue;
- (id)delegate;
- (BOOL)drawsBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isBezeled;
- (BOOL)isBordered;
- (BOOL)isOpaque;
- (id)locale;
- (id)maxDate;
- (id)minDate;
- (BOOL)needsPanelToBecomeKey;
- (void)removeFromSuperview;
- (BOOL)resignFirstResponder;
- (void)rightMouseDown:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBezeled:(BOOL)arg1;
- (void)setBordered:(BOOL)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDatePickerElements:(unsigned long long)arg1;
- (void)setDatePickerMode:(unsigned long long)arg1;
- (void)setDatePickerStyle:(unsigned long long)arg1;
- (void)setDateValue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaxDate:(id)arg1;
- (void)setMinDate:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)setTimeZone:(id)arg1;
- (id)textColor;
- (double)timeInterval;
- (id)timeZone;

// NSDatePicker (NSIBDatePickerIntegration)

- (BOOL)ns_hasCalendar;
- (BOOL)ns_hasClock;
- (BOOL)ns_hasClockAndCalendar;
- (BOOL)ns_isGraphical;
- (id)ns_widgetType;

// NSDatePicker (NSPrivate)

- (id)_disabledTextColor;
- (BOOL)_forcesLeadingZeroes;
- (void)_setDisabledTextColor:(id)arg1;
- (void)_setForcesLeadingZeroes:(BOOL)arg1;
- (void)_setWrapsDateComponentArithmetic:(BOOL)arg1;
- (BOOL)_wrapsDateComponentArithmetic;

@end
