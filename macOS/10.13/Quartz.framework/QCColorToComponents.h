/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCColorToComponents : QCPatch {
    int  _mode;
    QCColorPort * inputColor;
    QCNumberPort * output1;
    QCNumberPort * output2;
    QCNumberPort * output3;
    QCNumberPort * outputAlpha;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;

- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;

@end