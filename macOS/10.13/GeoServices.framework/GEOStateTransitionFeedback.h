/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOStateTransitionFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int newValue : 1; 
        unsigned int oldValue : 1; 
        unsigned int stateType : 1; 
    }  _has;
    int  _newValue;
    int  _oldValue;
    int  _stateType;
}

@property (nonatomic, readwrite) BOOL hasNewValue;
@property (nonatomic, readwrite) BOOL hasOldValue;
@property (nonatomic, readwrite) BOOL hasStateType;
@property (nonatomic, readwrite) int newValue;
@property (nonatomic, readwrite) int oldValue;
@property (nonatomic, readwrite) int stateType;

- (int)StringAsNewValue:(id)arg1;
- (int)StringAsOldValue:(id)arg1;
- (int)StringAsStateType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasNewValue;
- (BOOL)hasOldValue;
- (BOOL)hasStateType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)newValue;
- (id)newValueAsString:(int)arg1;
- (int)oldValue;
- (id)oldValueAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasNewValue:(BOOL)arg1;
- (void)setHasOldValue:(BOOL)arg1;
- (void)setHasStateType:(BOOL)arg1;
- (void)setNewValue:(int)arg1;
- (void)setOldValue:(int)arg1;
- (void)setStateType:(int)arg1;
- (int)stateType;
- (id)stateTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
