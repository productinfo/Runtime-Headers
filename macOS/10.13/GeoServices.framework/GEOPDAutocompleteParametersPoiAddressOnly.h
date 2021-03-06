/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDAutocompleteParametersPoiAddressOnly : PBCodable <NSCopying> {
    struct { 
        unsigned int maxResults : 1; 
        unsigned int highlightDiff : 1; 
    }  _has;
    BOOL  _highlightDiff;
    int  _maxResults;
    NSString * _query;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic, readwrite) BOOL hasHighlightDiff;
@property (nonatomic, readwrite) BOOL hasMaxResults;
@property (nonatomic, readonly) BOOL hasQuery;
@property (nonatomic, readonly) BOOL hasViewportInfo;
@property (nonatomic, readwrite) BOOL highlightDiff;
@property (nonatomic, readwrite) int maxResults;
@property (nonatomic, readwrite, retain) NSString *query;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) GEOPDViewportInfo *viewportInfo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHighlightDiff;
- (BOOL)hasMaxResults;
- (BOOL)hasQuery;
- (BOOL)hasViewportInfo;
- (unsigned long long)hash;
- (BOOL)highlightDiff;
- (BOOL)isEqual:(id)arg1;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (BOOL)readFrom:(id)arg1;
- (void)setHasHighlightDiff:(BOOL)arg1;
- (void)setHasMaxResults:(BOOL)arg1;
- (void)setHighlightDiff:(BOOL)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setQuery:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
