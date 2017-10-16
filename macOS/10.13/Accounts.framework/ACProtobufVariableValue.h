/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
 */

@interface ACProtobufVariableValue : PBCodable <NSCopying> {
    ACProtobufVariableValueList * _arrayValue;
    NSData * _dataValue;
    ACProtobufDate * _dateValue;
    ACProtobufVariableValueDictionary * _dictionaryValue;
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int integerValue : 1; 
        unsigned int unsignedIntegerValue : 1; 
    }  _has;
    long long  _integerValue;
    ACProtobufVariableValueList * _setValue;
    NSString * _stringValue;
    unsigned long long  _unsignedIntegerValue;
    ACProtobufURL * _urlValue;
    ACProtobufUUID * _uuidValue;
}

@property (nonatomic, readwrite, retain) ACProtobufVariableValueList *arrayValue;
@property (nonatomic, readwrite, retain) NSData *dataValue;
@property (nonatomic, readwrite, retain) ACProtobufDate *dateValue;
@property (nonatomic, readwrite, retain) ACProtobufVariableValueDictionary *dictionaryValue;
@property (nonatomic, readwrite) double doubleValue;
@property (nonatomic, readonly) BOOL hasArrayValue;
@property (nonatomic, readonly) BOOL hasDataValue;
@property (nonatomic, readonly) BOOL hasDateValue;
@property (nonatomic, readonly) BOOL hasDictionaryValue;
@property (nonatomic, readwrite) BOOL hasDoubleValue;
@property (nonatomic, readwrite) BOOL hasIntegerValue;
@property (nonatomic, readonly) BOOL hasSetValue;
@property (nonatomic, readonly) BOOL hasStringValue;
@property (nonatomic, readwrite) BOOL hasUnsignedIntegerValue;
@property (nonatomic, readonly) BOOL hasUrlValue;
@property (nonatomic, readonly) BOOL hasUuidValue;
@property (nonatomic, readwrite) long long integerValue;
@property (nonatomic, readwrite, retain) id object;
@property (nonatomic, readwrite, retain) ACProtobufVariableValueList *setValue;
@property (nonatomic, readwrite, retain) NSString *stringValue;
@property (nonatomic, readwrite) unsigned long long unsignedIntegerValue;
@property (nonatomic, readwrite, retain) ACProtobufURL *urlValue;
@property (nonatomic, readwrite, retain) ACProtobufUUID *uuidValue;

- (void).cxx_destruct;
- (id)arrayValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)dateValue;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryValue;
- (double)doubleValue;
- (BOOL)hasArrayValue;
- (BOOL)hasDataValue;
- (BOOL)hasDateValue;
- (BOOL)hasDictionaryValue;
- (BOOL)hasDoubleValue;
- (BOOL)hasIntegerValue;
- (BOOL)hasSetValue;
- (BOOL)hasStringValue;
- (BOOL)hasUnsignedIntegerValue;
- (BOOL)hasUrlValue;
- (BOOL)hasUuidValue;
- (unsigned long long)hash;
- (long long)integerValue;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setArrayValue:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setDictionaryValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasDoubleValue:(BOOL)arg1;
- (void)setHasIntegerValue:(BOOL)arg1;
- (void)setHasUnsignedIntegerValue:(BOOL)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setSetValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1;
- (void)setUrlValue:(id)arg1;
- (void)setUuidValue:(id)arg1;
- (id)setValue;
- (id)stringValue;
- (unsigned long long)unsignedIntegerValue;
- (id)urlValue;
- (id)uuidValue;
- (void)writeTo:(id)arg1;

// ACProtobufVariableValue (Helpers)

- (BOOL)_setObject:(id)arg1;
- (id)initWithObjectValue:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;

@end