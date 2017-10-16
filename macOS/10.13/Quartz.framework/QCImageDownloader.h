/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCImageDownloader : QCDownloadPatch {
    QCCache * _cache;
    BOOL  _colorCorrection;
    unsigned long long  _maxCacheSize;
    unsigned long long  _mipmapLevels;
    QCBooleanPort * _signalPort;
    BOOL  _synchronousMode;
    unsigned int  _target;
    QCStringPort * inputURL;
    QCImagePort * outputImage;
    QCNumberPort * outputProgress;
    QCBooleanPort * outputSignal;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)serializedStateKeysWithIdentifier:(id)arg1;
+ (id)stateKeysWithIdentifier:(id)arg1;
+ (unsigned long long)stateVersionWithIdentifier:(id)arg1;

- (void)_addImageToCache:(id)arg1;
- (void)cleanup:(id)arg1;
- (id)createResourceWithDownloadedData:(id)arg1 sourceURL:(id)arg2;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (unsigned long long)maximumCacheSize;
- (double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (void)setColorCorrection:(BOOL)arg1;
- (void)setMaximumCacheSize:(unsigned long long)arg1;
- (BOOL)setState:(id)arg1;
- (void)setSynchronousMode:(BOOL)arg1;
- (BOOL)setup:(id)arg1;
- (id)state;
- (BOOL)synchronousMode;

// QCImageDownloader (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;

@end