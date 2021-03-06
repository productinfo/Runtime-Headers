/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOABExperimentAssignment : PBCodable <NSCopying> {
    GEOABDebugPanelExperimentBranch * _debugExperimentBranch;
    struct { 
        unsigned int placeRequestType : 1; 
        unsigned int serviceType : 1; 
    }  _has;
    int  _placeRequestType;
    NSString * _querySubstring;
    int  _serviceType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property (nonatomic, readonly) BOOL hasDebugExperimentBranch;
@property (nonatomic, readwrite) BOOL hasPlaceRequestType;
@property (nonatomic, readonly) BOOL hasQuerySubstring;
@property (nonatomic, readwrite) BOOL hasServiceType;
@property (nonatomic, readwrite) int placeRequestType;
@property (nonatomic, readwrite, retain) NSString *querySubstring;
@property (nonatomic, readwrite) int serviceType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsPlaceRequestType:(id)arg1;
- (int)StringAsServiceType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugExperimentBranch;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDebugExperimentBranch;
- (BOOL)hasPlaceRequestType;
- (BOOL)hasQuerySubstring;
- (BOOL)hasServiceType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)placeRequestType;
- (id)placeRequestTypeAsString:(int)arg1;
- (id)querySubstring;
- (BOOL)readFrom:(id)arg1;
- (int)serviceType;
- (id)serviceTypeAsString:(int)arg1;
- (void)setDebugExperimentBranch:(id)arg1;
- (void)setHasPlaceRequestType:(BOOL)arg1;
- (void)setHasServiceType:(BOOL)arg1;
- (void)setPlaceRequestType:(int)arg1;
- (void)setQuerySubstring:(id)arg1;
- (void)setServiceType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
