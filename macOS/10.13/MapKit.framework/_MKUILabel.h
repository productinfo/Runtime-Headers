/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface _MKUILabel : NSTextField <MKMultilineText> {
    id  __mapkit_themeColorProvider;
    double  _cachedBaselineOffsetFromBottom;
    BOOL  _collapsesWhenEmpty;
    BOOL  _haveCachedBaselineOffsetFromBottom;
}

@property (nonatomic, readwrite, copy) id _mapkit_themeColorProvider;
@property (nonatomic, readwrite, copy) NSAttributedString *attributedText;
@property (nonatomic, readwrite) BOOL collapsesWhenEmpty;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) long long numberOfLines;
@property (atomic, readwrite) double preferredMaxLayoutWidth;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, copy) NSString *text;
@property (nonatomic, readwrite) unsigned long long textAlignment;

+ (id)keyPathsForValuesAffectingAlignment;
+ (id)keyPathsForValuesAffectingAttributedText;
+ (id)keyPathsForValuesAffectingText;

- (void).cxx_destruct;
- (id)_mapkit_themeColorProvider;
- (id)attributedText;
- (double)baselineOffsetFromBottom;
- (BOOL)collapsesWhenEmpty;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)numberOfLines;
- (void)setAttributedText:(id)arg1;
- (void)setCollapsesWhenEmpty:(BOOL)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(unsigned long long)arg1;
- (void)set_mapkit_themeColorProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (unsigned long long)textAlignment;
- (void)viewWillMoveToWindow:(id)arg1;

@end
