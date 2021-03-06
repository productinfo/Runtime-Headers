/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOTransitSurcharge : PBCodable <NSCopying> {
    struct { 
        unsigned int numberOfLegs : 1; 
        unsigned int paymentType : 1; 
    }  _has;
    unsigned int  _numberOfLegs;
    int  _paymentType;
    NSMutableArray * _surchargeUnits;
}

@property (nonatomic, readwrite) BOOL hasNumberOfLegs;
@property (nonatomic, readwrite) BOOL hasPaymentType;
@property (nonatomic, readwrite) unsigned int numberOfLegs;
@property (nonatomic, readwrite) int paymentType;
@property (nonatomic, readwrite, retain) NSMutableArray *surchargeUnits;

+ (Class)surchargeUnitType;

- (void).cxx_destruct;
- (int)StringAsPaymentType:(id)arg1;
- (void)addSurchargeUnit:(id)arg1;
- (void)clearSurchargeUnits;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasNumberOfLegs;
- (BOOL)hasPaymentType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfLegs;
- (int)paymentType;
- (id)paymentTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasNumberOfLegs:(BOOL)arg1;
- (void)setHasPaymentType:(BOOL)arg1;
- (void)setNumberOfLegs:(unsigned int)arg1;
- (void)setPaymentType:(int)arg1;
- (void)setSurchargeUnits:(id)arg1;
- (id)surchargeUnitAtIndex:(unsigned long long)arg1;
- (id)surchargeUnits;
- (unsigned long long)surchargeUnitsCount;
- (void)writeTo:(id)arg1;

@end
