/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CISkyAndGrassAdjust : CIFilter {
    NSNumber * inputGrassAmount;
    CIImage * inputImage;
    NSNumber * inputSkyAmount;
}

@property (nonatomic, readwrite, retain) NSNumber *inputGrassAmount;
@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) NSNumber *inputSkyAmount;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputGrassAmount;
- (id)inputImage;
- (id)inputSkyAmount;
- (id)outputImage;
- (void)setInputGrassAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSkyAmount:(id)arg1;

@end