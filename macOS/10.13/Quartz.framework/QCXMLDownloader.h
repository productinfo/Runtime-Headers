/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCXMLDownloader : QCDownloadPatch {
    BOOL  _synchronousMode;
    QCBooleanPort * inputSignal;
    QCStringPort * inputURL;
    QCNumberPort * outputProgress;
    QCBooleanPort * outputSignal;
    QCStructurePort * outputStructure;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)stateKeysWithIdentifier:(id)arg1;

- (id)createResourceWithDownloadedData:(id)arg1 sourceURL:(id)arg2;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (void)setSynchronousMode:(BOOL)arg1;
- (BOOL)setup:(id)arg1;
- (BOOL)synchronousMode;

// QCXMLDownloader (QCInspector)

+ (id)inspectorNibNameWithIdentifier:(id)arg1;

@end