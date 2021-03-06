/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
 */

@interface CUINamedImageDescription : NSObject {
    struct { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentEdgeInsets;
    int  _blendMode;
    long long  _displayGamut;
    struct { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    int  _exifOrientation;
    long long  _idiom;
    long long  _imageType;
    long long  _layoutDirection;
    long long  _resizingMode;
    double  _scale;
    long long  _sizeClassHorizontal;
    long long  _sizeClassVertical;
    long long  _subtype;
    long long  _templateRenderingMode;
}

@property (nonatomic, readwrite) struct { double x1; double x2; double x3; double x4; } alignmentEdgeInsets;
@property (nonatomic, readwrite) int blendMode;
@property (nonatomic, readwrite) long long displayGamut;
@property (nonatomic, readwrite) struct { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, readwrite) int exifOrientation;
@property (nonatomic, readwrite) long long idiom;
@property (nonatomic, readwrite) long long imageType;
@property (nonatomic, readwrite) BOOL isTemplate;
@property (nonatomic, readwrite) long long layoutDirection;
@property (nonatomic, readwrite) long long resizingMode;
@property (nonatomic, readwrite) double scale;
@property (nonatomic, readwrite) long long sizeClassHorizontal;
@property (nonatomic, readwrite) long long sizeClassVertical;
@property (nonatomic, readwrite) long long subtype;
@property (nonatomic, readwrite) long long templateRenderingMode;

- (struct { double x1; double x2; double x3; double x4; })alignmentEdgeInsets;
- (int)blendMode;
- (id)description;
- (long long)displayGamut;
- (struct { double x1; double x2; double x3; double x4; })edgeInsets;
- (int)exifOrientation;
- (long long)idiom;
- (long long)imageType;
- (BOOL)isTemplate;
- (long long)layoutDirection;
- (long long)resizingMode;
- (double)scale;
- (void)setAlignmentEdgeInsets:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setBlendMode:(int)arg1;
- (void)setDisplayGamut:(long long)arg1;
- (void)setEdgeInsets:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setIdiom:(long long)arg1;
- (void)setImageType:(long long)arg1;
- (void)setIsTemplate:(BOOL)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setResizingMode:(long long)arg1;
- (void)setScale:(double)arg1;
- (void)setSizeClassHorizontal:(long long)arg1;
- (void)setSizeClassVertical:(long long)arg1;
- (void)setSubtype:(long long)arg1;
- (void)setTemplateRenderingMode:(long long)arg1;
- (long long)sizeClassHorizontal;
- (long long)sizeClassVertical;
- (long long)subtype;
- (long long)templateRenderingMode;

@end
