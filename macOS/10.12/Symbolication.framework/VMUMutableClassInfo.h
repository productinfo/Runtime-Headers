/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
 */

@interface VMUMutableClassInfo : VMUClassInfo

@property (nonatomic, readwrite, copy) NSString *binaryPath;
@property (nonatomic, readwrite) unsigned int defaultScanType;
@property (nonatomic, readwrite, copy) NSString *displayName;
@property (nonatomic, readwrite, retain) VMUClassInfo *superclassInfo;

- (void)addVariant:(id)arg1 forField:(id)arg2 withEvaluator:(id)arg3;
- (void)mutateTypeFieldsWithBlock:(id)arg1;
- (void)replaceField:(id)arg1 withFields:(id)arg2;
- (void)setBinaryPath:(id)arg1;
- (void)setDefaultScanType:(unsigned int)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFields:(id)arg1;
- (void)setSuperclassInfo:(id)arg1;

@end
