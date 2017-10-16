/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIColorBalance : CIFilter {
    CIColor * inputColor;
    NSNumber * inputDamping;
    CIImage * inputImage;
    NSNumber * inputStrength;
    NSNumber * inputWarmth;
}

@property (nonatomic, readwrite, retain) CIColor *inputColor;
@property (nonatomic, readwrite, retain) NSNumber *inputDamping;
@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) NSNumber *inputStrength;
@property (nonatomic, readwrite, retain) NSNumber *inputWarmth;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputColor;
- (id)inputDamping;
- (id)inputImage;
- (id)inputStrength;
- (id)inputWarmth;
- (id)outputImage;
- (void)setInputColor:(id)arg1;
- (void)setInputDamping:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputWarmth:(id)arg1;

@end