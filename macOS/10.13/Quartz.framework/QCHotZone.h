/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCHotZone : QCPatch {
    QCImagePixelBuffer * _pixelBuffer;
    QCNumberPort * inputHeight;
    QCNumberPort * inputHitX;
    QCNumberPort * inputHitY;
    QCImagePort * inputMask;
    QCNumberPort * inputRX;
    QCNumberPort * inputRY;
    QCNumberPort * inputRZ;
    QCNumberPort * inputWidth;
    QCNumberPort * inputX;
    QCNumberPort * inputY;
    QCNumberPort * inputZ;
    QCNumberPort * outputBottomLeftX;
    QCNumberPort * outputBottomLeftY;
    QCNumberPort * outputBottomRightX;
    QCNumberPort * outputBottomRightY;
    QCNumberPort * outputHit;
    QCNumberPort * outputMaskX;
    QCNumberPort * outputMaskY;
    QCNumberPort * outputTopLeftX;
    QCNumberPort * outputTopLeftY;
    QCNumberPort * outputTopRightX;
    QCNumberPort * outputTopRightY;
    QCNumberPort * outputZoneX;
    QCNumberPort * outputZoneY;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;

- (void)cleanup:(id)arg1;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)setup:(id)arg1;

@end