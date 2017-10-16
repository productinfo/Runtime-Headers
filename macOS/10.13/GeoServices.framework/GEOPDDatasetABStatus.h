/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDDatasetABStatus : PBCodable <NSCopying> {
    unsigned int  _datasetId;
    struct { 
        unsigned int datasetId : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite) unsigned int datasetId;
@property (nonatomic, readwrite) BOOL hasDatasetId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)datasetId;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDatasetId;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDatasetId:(unsigned int)arg1;
- (void)setHasDatasetId:(BOOL)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end