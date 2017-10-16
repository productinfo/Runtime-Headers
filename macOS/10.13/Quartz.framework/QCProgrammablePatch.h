/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCProgrammablePatch : QCPatch {
    NSMutableDictionary * _compileStatus;
    NSMutableArray * _parameterPorts;
    GFList * _parameterTypes;
    NSMutableArray * _resultPorts;
    GFList * _resultTypes;
    NSMutableDictionary * _sources;
    void * _unused4;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (int)indicesType;
+ (BOOL)isKeyValid:(id)arg1;
+ (Class)portClassFromParameterInfo:(id)arg1;
+ (id)serializedStateKeysWithIdentifier:(id)arg1;
+ (id)sourceTypes;
+ (id)stateKeysWithIdentifier:(id)arg1;

- (BOOL)_updateTypes:(id)arg1 ports:(id)arg2 list:(id)arg3 direction:(int)arg4;
- (id)attributesForParameterPortWithInfo:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;
- (id)attributesForResultPortWithInfo:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;
- (id)compileSourceOfType:(id)arg1;
- (id)compileStatusForSourceOfType:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isSourceType:(id)arg1;
- (id)parameterList;
- (id)parameterPorts;
- (void)recompileSourceOfType:(id)arg1;
- (id)resultList;
- (id)resultPorts;
- (BOOL)setParameterList:(id)arg1;
- (BOOL)setResultList:(id)arg1;
- (void)setSource:(id)arg1 ofType:(id)arg2;
- (BOOL)setState:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)sourceOfType:(id)arg1;
- (id)state;
- (id)valueForUndefinedKey:(id)arg1;

@end