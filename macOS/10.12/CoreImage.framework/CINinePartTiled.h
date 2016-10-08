/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CINinePartTiled : CIFilter {
    CIVector * inputBreakpoint0;
    CIVector * inputBreakpoint1;
    NSNumber * inputFlipYTiles;
    CIVector * inputGrowAmount;
    CIImage * inputImage;
}

@property (nonatomic, readwrite, retain) CIVector *inputBreakpoint0;
@property (nonatomic, readwrite, retain) CIVector *inputBreakpoint1;
@property (nonatomic, readwrite, retain) NSNumber *inputFlipYTiles;
@property (nonatomic, readwrite, retain) CIVector *inputGrowAmount;
@property (nonatomic, readwrite, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernelAlt;
- (id)inputBreakpoint0;
- (id)inputBreakpoint1;
- (id)inputFlipYTiles;
- (id)inputGrowAmount;
- (id)inputImage;
- (id)outputImage;
- (void)setInputBreakpoint0:(id)arg1;
- (void)setInputBreakpoint1:(id)arg1;
- (void)setInputFlipYTiles:(id)arg1;
- (void)setInputGrowAmount:(id)arg1;
- (void)setInputImage:(id)arg1;

@end