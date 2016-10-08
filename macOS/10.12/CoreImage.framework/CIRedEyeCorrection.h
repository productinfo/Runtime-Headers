/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIRedEyeCorrection : CIFilter {
    NSString * inputCameraModel;
    NSDictionary * inputCorrectionInfo;
    CIImage * inputImage;
}

@property (nonatomic, readwrite, copy) NSString *inputCameraModel;
@property (nonatomic, readwrite, copy) NSDictionary *inputCorrectionInfo;
@property (nonatomic, readwrite, retain) CIImage *inputImage;

- (BOOL)_isIdentity;
- (id)inputCameraModel;
- (id)inputCorrectionInfo;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputCameraModel:(id)arg1;
- (void)setInputCorrectionInfo:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
