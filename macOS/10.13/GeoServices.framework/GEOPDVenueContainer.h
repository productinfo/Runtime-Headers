/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDVenueContainer : PBCodable <NSCopying> {
    int  _browseType;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _buildingIds;
    struct { 
        unsigned int muid : 1; 
        unsigned int venueId : 1; 
        unsigned int browseType : 1; 
    }  _has;
    GEOPDVenueLabel * _label;
    unsigned long long  _muid;
    PBUnknownFields * _unknownFields;
    unsigned long long  _venueId;
}

@property (nonatomic, readwrite) int browseType;
@property (nonatomic, readonly) unsigned long long*buildingIds;
@property (nonatomic, readonly) unsigned long long buildingIdsCount;
@property (nonatomic, readwrite) BOOL hasBrowseType;
@property (nonatomic, readonly) BOOL hasLabel;
@property (nonatomic, readwrite) BOOL hasMuid;
@property (nonatomic, readwrite) BOOL hasVenueId;
@property (nonatomic, readwrite, retain) GEOPDVenueLabel *label;
@property (nonatomic, readwrite) unsigned long long muid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite) unsigned long long venueId;

- (void).cxx_destruct;
- (int)StringAsBrowseType:(id)arg1;
- (void)addBuildingId:(unsigned long long)arg1;
- (int)browseType;
- (id)browseTypeAsString:(int)arg1;
- (unsigned long long)buildingIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)buildingIds;
- (unsigned long long)buildingIdsCount;
- (void)clearBuildingIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBrowseType;
- (BOOL)hasLabel;
- (BOOL)hasMuid;
- (BOOL)hasVenueId;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (BOOL)readFrom:(id)arg1;
- (void)setBrowseType:(int)arg1;
- (void)setBuildingIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setHasBrowseType:(BOOL)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setHasVenueId:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setVenueId:(unsigned long long)arg1;
- (id)unknownFields;
- (unsigned long long)venueId;
- (void)writeTo:(id)arg1;

@end
