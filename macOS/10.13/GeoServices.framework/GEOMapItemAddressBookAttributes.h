/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying> {
    NSString * _addressIdentifier;
    int  _addressType;
    struct { 
        unsigned int addressType : 1; 
        unsigned int isMe : 1; 
    }  _has;
    BOOL  _isMe;
    NSString * _name;
    NSString * _spokenName;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) NSString *addressIdentifier;
@property (nonatomic, readwrite) int addressType;
@property (nonatomic, readonly) BOOL hasAddressIdentifier;
@property (nonatomic, readwrite) BOOL hasAddressType;
@property (nonatomic, readwrite) BOOL hasIsMe;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic, readonly) BOOL hasSpokenName;
@property (nonatomic, readwrite) BOOL isMe;
@property (nonatomic, readwrite, retain) NSString *name;
@property (nonatomic, readwrite, retain) NSString *spokenName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsAddressType:(id)arg1;
- (id)addressIdentifier;
- (int)addressType;
- (id)addressTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAddressIdentifier;
- (BOOL)hasAddressType;
- (BOOL)hasIsMe;
- (BOOL)hasName;
- (BOOL)hasSpokenName;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMe;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setAddressIdentifier:(id)arg1;
- (void)setAddressType:(int)arg1;
- (void)setHasAddressType:(BOOL)arg1;
- (void)setHasIsMe:(BOOL)arg1;
- (void)setIsMe:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setSpokenName:(id)arg1;
- (id)spokenName;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end