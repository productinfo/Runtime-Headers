/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePrediction.framework/Versions/A/CorePrediction
 */

@interface CPMLSchema : NSObject {
    NSMutableArray * _categoricalDataList;
    NSMutableArray * _indexColumnList;
    NSMutableArray * _matchReplaceValue;
    NSMutableArray * _replaceMissingValue;
    NSMutableArray * attribute;
    NSMutableArray * availableOptions;
    NSMutableArray * nsRemapTable;
    NSMutableArray * schema;
    NSMutableArray * schemaHDef;
    NSMutableString * schemaHeader;
    NSMutableString * schemaHeaderWithType;
    int  yColumnPosition;
}

@property (nonatomic, readonly) NSMutableArray *attribute;
@property (nonatomic, readonly) NSMutableArray *availableOptions;
@property (nonatomic, readonly) NSMutableArray *indexColumnList;
@property (nonatomic, readonly) NSMutableArray *nsRemapTable;
@property (nonatomic, readonly) NSMutableString *schemaHeader;
@property (nonatomic, readonly) NSMutableString *schemaHeaderWithType;

- (void).cxx_destruct;
- (id)attribute;
- (id)availableOptions;
- (id)getColumnName:(unsigned long long)arg1;
- (int)getColumnPosition:(id)arg1;
- (int)getSchemaType:(unsigned long long)arg1;
- (id)getSubstituteValue:(unsigned long long)arg1;
- (unsigned long long)getTotalAttributes;
- (id)getUserDefinedCategoricalData:(unsigned long long)arg1;
- (unsigned long long)getUserDefinedCategoricalDataCount:(unsigned long long)arg1;
- (int)getVectorContent:(unsigned long long)arg1;
- (int)getYColumnPosition;
- (BOOL)hasOptions:(unsigned long long)arg1;
- (id)indexColumnList;
- (id)init:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (BOOL)isColumnContinous:(unsigned int)arg1;
- (BOOL)isIntType:(unsigned long long)arg1;
- (BOOL)isNumType:(unsigned long long)arg1;
- (BOOL)isRealType:(unsigned long long)arg1;
- (BOOL)isStringType:(unsigned long long)arg1;
- (BOOL)isVectorType:(unsigned long long)arg1;
- (BOOL)matchSubstituteValue:(unsigned long long)arg1 theValue:(id)arg2;
- (id)nsRemapTable;
- (id)schemaHeader;
- (id)schemaHeaderWithType;

@end
