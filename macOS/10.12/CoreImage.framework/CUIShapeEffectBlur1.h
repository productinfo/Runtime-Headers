/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CUIShapeEffectBlur1 : CIFilter {
    CIImage * inputFill;
    CIColor * inputGlowColorInner;
    CIColor * inputGlowColorOuter;
    CIImage * inputImage;
    CIVector * inputOffset;
    NSNumber * inputRadius;
    NSNumber * inputShadowBlurInner;
    NSNumber * inputShadowBlurOuter;
    CIColor * inputShadowColorInner;
    CIColor * inputShadowColorOuter;
}

@property (nonatomic, readwrite, retain) CIImage *inputFill;
@property (nonatomic, readwrite, retain) CIColor *inputGlowColorInner;
@property (nonatomic, readwrite, retain) CIColor *inputGlowColorOuter;
@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) CIVector *inputOffset;
@property (nonatomic, readwrite, retain) NSNumber *inputRadius;
@property (nonatomic, readwrite, retain) NSNumber *inputShadowBlurInner;
@property (nonatomic, readwrite, retain) NSNumber *inputShadowBlurOuter;
@property (nonatomic, readwrite, retain) CIColor *inputShadowColorInner;
@property (nonatomic, readwrite, retain) CIColor *inputShadowColorOuter;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputFill;
- (id)inputGlowColorInner;
- (id)inputGlowColorOuter;
- (id)inputImage;
- (id)inputOffset;
- (id)inputRadius;
- (id)inputShadowBlurInner;
- (id)inputShadowBlurOuter;
- (id)inputShadowColorInner;
- (id)inputShadowColorOuter;
- (id)outputImage;
- (void)setInputFill:(id)arg1;
- (void)setInputGlowColorInner:(id)arg1;
- (void)setInputGlowColorOuter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOffset:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputShadowBlurInner:(id)arg1;
- (void)setInputShadowBlurOuter:(id)arg1;
- (void)setInputShadowColorInner:(id)arg1;
- (void)setInputShadowColorOuter:(id)arg1;

@end
