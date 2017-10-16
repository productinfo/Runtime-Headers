/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOStorageCompletion : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry * _autocompleteEntry;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, readonly) BOOL hasAutocompleteEntry;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)autocompleteEntry;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAutocompleteEntry;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAutocompleteEntry:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOStorageCompletion (GEOCompletionItem)

+ (id)storageForCompletionItem:(id)arg1;

- (void)applyToUserSearchInput:(id)arg1;

@end