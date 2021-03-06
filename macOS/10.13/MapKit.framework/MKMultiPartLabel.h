/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKMultiPartLabel : NSView <MKMultilineText> {
    NSDictionary * _cachedTextAttributes;
    _MKMultiPartLabelMetrics * _data;
    NSFont * _font;
    MKMultiPartAttributedString * _multiPartString;
    double  _preferredMaxLayoutWidth;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousBounds;
    unsigned long long  _textAlignment;
    NSColor * _textColor;
    NSTextView * _textView;
}

@property (nonatomic, readwrite, retain) _MKMultiPartLabelMetrics *data;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite, retain) NSFont *font;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) unsigned long long lineBreakMode;
@property (nonatomic, readwrite, retain) MKMultiPartAttributedString *multiPartString;
@property (nonatomic, readwrite) unsigned long long numberOfLines;
@property (atomic, readwrite) double preferredMaxLayoutWidth;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, retain) NSString *text;
@property (nonatomic, readwrite) unsigned long long textAlignment;
@property (nonatomic, readwrite, retain) NSColor *textColor;

- (void).cxx_destruct;
- (id)_addDefaultAttributesToAttributedString:(id)arg1;
- (id)_attributedAjudstedMultiPartStringFromString:(id)arg1;
- (void)_setupTextView;
- (id)_textAttributes;
- (void)_updateStrings;
- (void)_updateTextViewTextAndInvalidateLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)data;
- (double)firstBaselineOffsetFromTop;
- (id)font;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)lastBaselineOffsetFromBottom;
- (unsigned long long)lineBreakMode;
- (id)multiPartString;
- (unsigned long long)numberOfLines;
- (double)preferredMaxLayoutWidth;
- (void)setContentCompressionResistancePriority:(float)arg1 forOrientation:(long long)arg2;
- (void)setContentHuggingPriority:(float)arg1 forOrientation:(long long)arg2;
- (void)setData:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(unsigned long long)arg1;
- (void)setMultiPartString:(id)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(unsigned long long)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (unsigned long long)textAlignment;
- (id)textColor;

@end
