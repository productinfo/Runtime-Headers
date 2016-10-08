/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CISmartToneFilter : CIFilter {
    CIContext * _cubeContext;
    NSData * _cubeData;
    CIImage * _cubeImage;
    NSData * _inputLightMap;
    NSNumber * inputBlack;
    NSNumber * inputBrightness;
    NSNumber * inputContrast;
    NSNumber * inputExposure;
    NSNumber * inputHighlights;
    CIImage * inputImage;
    NSNumber * inputLocalLight;
    NSNumber * inputRawHighlights;
    NSNumber * inputShadows;
    NSNumber * inputUseCube;
    id  inputUseCubeColorSpace;
}

@property (nonatomic, readwrite, retain) NSNumber *inputBlack;
@property (nonatomic, readwrite, retain) NSNumber *inputBrightness;
@property (nonatomic, readwrite, retain) NSNumber *inputContrast;
@property (nonatomic, readwrite, retain) NSNumber *inputExposure;
@property (nonatomic, readwrite, retain) NSNumber *inputHighlights;
@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) NSData *inputLightMap;
@property (nonatomic, readwrite, retain) NSNumber *inputLocalLight;
@property (nonatomic, readwrite, retain) NSNumber *inputRawHighlights;
@property (nonatomic, readwrite, retain) NSNumber *inputShadows;
@property (nonatomic, readwrite, retain) NSNumber *inputUseCube;
@property (nonatomic, readwrite, retain) id inputUseCubeColorSpace;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)_kernelBneg;
- (id)_kernelBpos;
- (id)_kernelC;
- (id)_kernelH;
- (id)_kernelRH;
- (void)dealloc;
- (id)inputBlack;
- (id)inputBrightness;
- (id)inputContrast;
- (id)inputExposure;
- (id)inputHighlights;
- (id)inputImage;
- (id)inputLightMap;
- (id)inputLocalLight;
- (id)inputRawHighlights;
- (id)inputShadows;
- (id)inputUseCube;
- (id)inputUseCubeColorSpace;
- (id)outputImage;
- (void)setInputBlack:(id)arg1;
- (void)setInputBrightness:(id)arg1;
- (void)setInputContrast:(id)arg1;
- (void)setInputExposure:(id)arg1;
- (void)setInputHighlights:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLightMap:(id)arg1;
- (void)setInputLocalLight:(id)arg1;
- (void)setInputRawHighlights:(id)arg1;
- (void)setInputShadows:(id)arg1;
- (void)setInputUseCube:(id)arg1;
- (void)setInputUseCubeColorSpace:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end
