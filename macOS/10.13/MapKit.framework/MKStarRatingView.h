/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKStarRatingView : NSView {
    NSImage * _emptyStarHighlightedImage;
    NSImage * _emptyStarImage;
    NSImage * _fullStarHighlightedImage;
    NSImage * _fullStarImage;
    NSImage * _halfStarHighlightedImage;
    NSImage * _halfStarImage;
    BOOL  _highlighted;
    long long  _numLevels;
    long long  _numReviews;
    double  _padding;
    double  _rating;
    NSMutableArray * _ratingViews;
    long long  _starStyle;
}

@property (nonatomic, readwrite, retain) NSImage *emptyStarHighlightedImage;
@property (nonatomic, readwrite, retain) NSImage *emptyStarImage;
@property (nonatomic, readwrite, retain) NSImage *fullStarHighlightedImage;
@property (nonatomic, readwrite, retain) NSImage *fullStarImage;
@property (nonatomic, readwrite, retain) NSImage *halfStarHighlightedImage;
@property (nonatomic, readwrite, retain) NSImage *halfStarImage;
@property (getter=isHighlighted, nonatomic, readwrite) BOOL highlighted;
@property (nonatomic, readwrite) long long numberOfRatingLevels;
@property (nonatomic, readwrite) double rating;
@property (nonatomic, readwrite) long long starStyle;

+ (id)ratingAsAttributedString:(double)arg1 baseFont:(id)arg2 style:(long long)arg3;
+ (id)ratingAsAttributedString:(double)arg1 baseFont:(id)arg2 style:(long long)arg3 theme:(id)arg4;

- (void).cxx_destruct;
- (void)_layoutStarViewsCreatingIfNeeded:(BOOL)arg1;
- (void)_updateLayerGeometryFromView;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)commonInit;
- (id)emptyStarHighlightedImage;
- (id)emptyStarImage;
- (id)fullStarHighlightedImage;
- (id)fullStarImage;
- (id)halfStarHighlightedImage;
- (id)halfStarImage;
- (id)imageWithName:(id)arg1 andColor:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isHighlighted;
- (void)layout;
- (long long)numberOfRatingLevels;
- (double)rating;
- (void)setEmptyStarHighlightedImage:(id)arg1;
- (void)setEmptyStarImage:(id)arg1;
- (void)setFullStarHighlightedImage:(id)arg1;
- (void)setFullStarImage:(id)arg1;
- (void)setHalfStarHighlightedImage:(id)arg1;
- (void)setHalfStarImage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setNumberOfRatingLevels:(long long)arg1;
- (void)setPadding:(double)arg1;
- (void)setRating:(double)arg1;
- (void)setStarStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)starStyle;
- (double)verticalAlignmentCenterPercentage;
- (void)viewDidChangeBackingProperties;

@end
