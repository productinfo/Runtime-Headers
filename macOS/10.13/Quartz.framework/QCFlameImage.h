/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCFlameImage : QCPatch {
    char * _bufferAddress;
    unsigned long long  _bufferRowBytes;
    unsigned int  _clut;
    BOOL  _colorCorrection;
    unsigned long long  _height;
    unsigned long long  _mipmapLevels;
    unsigned int  _target;
    unsigned long long  _width;
    QCColorPort * inputColorEnd;
    QCColorPort * inputColorMiddle;
    QCColorPort * inputColorStart;
    QCImagePort * outputImage;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)stateKeysWithIdentifier:(id)arg1;

- (void)cleanup:(id)arg1;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (unsigned long long)height;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)setState:(id)arg1;
- (void)setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (BOOL)setup:(id)arg1;
- (id)state;
- (unsigned long long)width;

// QCFlameImage (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;

@end
