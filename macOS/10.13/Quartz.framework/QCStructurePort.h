/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCStructurePort : QCObjectPort {
    void * _unused5;
}

+ (Class)baseClass;

- (Class)objectClass;
- (void)setStructureValue:(id)arg1;
- (id)structureValue;

// QCStructurePort (Override)

- (BOOL)acceptValuesOfClass:(Class)arg1;
- (BOOL)setStateValue:(id)arg1;
- (BOOL)setValue:(id)arg1;
- (id)stateValue;
- (id)value;
- (Class)valueClass;

// QCStructurePort (ParameterView)

- (void)resetParameterView:(id)arg1;
- (id)setupParameterView;

// QCStructurePort (QCProFX)

- (struct { unsigned char x1[16]; })md5WithTime:(double)arg1 arguments:(id)arg2;

// QCStructurePort (QCStream)

- (id)streamValue;

// QCStructurePort (Tooltip)

- (BOOL)_printStructure:(id)arg1 toString:(id)arg2 linePrefix:(id)arg3 maxLines:(long long*)arg4;
- (id)tooltipString;

@end