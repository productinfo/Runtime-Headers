/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIWhitePointAdjust : CIFilter {
    CIColor * inputColor;
    CIImage * inputImage;
}

@property (nonatomic, readwrite, retain) CIColor *inputColor;
@property (nonatomic, readwrite, retain) CIImage *inputImage;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)_kernel;
- (id)inputColor;
- (id)inputImage;
- (id)outputImage;
- (void)setInputColor:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
