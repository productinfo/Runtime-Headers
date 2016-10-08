/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSMenuServicesView : NSView {
    double  _actualWidths;
    NSString * _bundlePath;
    NSString * _categoryName;
    double  _categoryNameWidth;
    NSMenuItem * _explicitMenuItem;
    struct { 
        unsigned int _shouldDrawCategoryArea : 1; 
        unsigned int _shouldDrawCategoryName : 1; 
        unsigned int _imageLoadHasBegun : 1; 
        unsigned int _imageIsLoaded : 1; 
        unsigned int _inDrawRect : 1; 
        unsigned int _isSpacer : 1; 
        unsigned int _isEditServicesItem : 1; 
        unsigned int _isNoServiceApplyItem : 1; 
        unsigned int _iconIsDefaultBrowser : 1; 
        unsigned int reserved : 23; 
    }  _flags;
    NSImage * _image;
    double  _minimumWidths;
}

@property (nonatomic, readwrite, copy) NSString *bundlePath;
@property (nonatomic, readwrite, copy) NSString *categoryName;
@property (nonatomic, readwrite, retain) NSMenuItem *explicitMenuItem;
@property (nonatomic, readwrite) BOOL iconIsDefaultBrowser;
@property (nonatomic, readwrite) BOOL isEditServicesItem;
@property (nonatomic, readwrite) BOOL isNoServicesApplyItem;
@property (nonatomic, readwrite) BOOL isSpacer;
@property (nonatomic, readwrite) BOOL shouldDrawCategoryArea;
@property (nonatomic, readwrite) BOOL shouldDrawCategoryName;

+ (void)initialize;

- (id)bundlePath;
- (id)categoryAttributes;
- (id)categoryColor;
- (id)categoryHighlightColor;
- (id)categoryName;
- (void)computeMinimumMetrics:(struct NSMenuServicesViewMetrics { unsigned int x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; }*)arg1;
- (void)computeMinimumWidthsIfNecessary;
- (void)dealloc;
- (void)drawCategoryNameInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 highlighted:(BOOL)arg2 backgroundStyle:(long long)arg3 clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)drawImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundStyle:(long long)arg2 clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawKeyEquivalentForItem:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 highlighted:(BOOL)arg3 backgroundStyle:(long long)arg4 clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawTitle:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 highlighted:(BOOL)arg3 enabled:(BOOL)arg4 backgroundStyle:(long long)arg5 clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6;
- (id)explicitMenuItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })flipHorizontallyIfNecessary:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)getKeyEquivalentCellForItem:(id)arg1;
- (void)getMetrics:(struct NSMenuServicesViewMetrics { unsigned int x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; }*)arg1 forWidths:(const double*)arg2;
- (void)getMinimumWidths:(double*)arg1;
- (id)highlightedCategoryAttributes;
- (BOOL)iconIsDefaultBrowser;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isEditServicesItem;
- (BOOL)isFlipped;
- (BOOL)isNoServicesApplyItem;
- (BOOL)isSpacer;
- (void)loadedImage:(id)arg1;
- (id)representingMenuItem;
- (double)roundUpForTextMeasurement:(double)arg1;
- (void)setActualWidths:(const double*)arg1;
- (void)setBundlePath:(id)arg1;
- (void)setCategoryName:(id)arg1;
- (void)setExplicitMenuItem:(id)arg1;
- (void)setIconIsDefaultBrowser:(BOOL)arg1;
- (void)setIsEditServicesItem:(BOOL)arg1;
- (void)setIsNoServicesApplyItem:(BOOL)arg1;
- (void)setIsSpacer:(BOOL)arg1;
- (void)setShouldDrawCategoryArea:(BOOL)arg1;
- (void)setShouldDrawCategoryName:(BOOL)arg1;
- (BOOL)shouldDrawCategoryArea;
- (BOOL)shouldDrawCategoryName;
- (void)sizeToFit;
- (id)title;

@end
