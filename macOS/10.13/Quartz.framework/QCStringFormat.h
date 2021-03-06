/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCStringFormat : QCPatch {
    NSString * _format;
    NSArray * _formatComponents;
    int  _mode;
    QCStringPort * _stringPort;
    NSMutableArray * _stringPorts;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)stateKeysWithIdentifier:(id)arg1;

- (void)dealloc;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)format;
- (id)initWithIdentifier:(id)arg1;
- (void)setFormat:(id)arg1;
- (BOOL)setState:(id)arg1;
- (id)state;

// QCStringFormat (QCInspector)

+ (id)inspectorNibNameWithIdentifier:(id)arg1;

@end
