/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCSplitter : QCPatch {
    QCPort * _inPort;
    NSMutableArray * _indexLabels;
    double  _max;
    double  _min;
    QCPort * _outPort;
    BOOL  _useLabels;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)serializedStateKeysWithIdentifier:(id)arg1;
+ (id)stateKeysWithIdentifier:(id)arg1;
+ (unsigned long long)stateVersionWithIdentifier:(id)arg1;

- (void)_configurePort;
- (void)_forwardRenderingFlag;
- (void)_updateMaxIndexFromLabels;
- (void)addIndexLabel;
- (void)dealloc;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)indexLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexLabelsCount;
- (id)initWithIdentifier:(id)arg1;
- (id)nodeActorForView:(id)arg1;
- (Class)portClass;
- (double)portMaxValue;
- (double)portMinValue;
- (void)removeIndexLabelAtIndex:(unsigned long long)arg1;
- (void)setIndexLabel:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setPortClass:(Class)arg1;
- (void)setPortMaxValue:(double)arg1;
- (void)setPortMinValue:(double)arg1;
- (BOOL)setState:(id)arg1;
- (void)setUsesIndexLabels:(BOOL)arg1;
- (id)state;
- (BOOL)usesIndexLabels;

// QCSplitter (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;

@end
