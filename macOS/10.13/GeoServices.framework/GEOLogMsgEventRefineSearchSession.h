/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgEventRefineSearchSession : PBCodable <NSCopying> {
    struct { 
        unsigned int refineSearchType : 1; 
        unsigned int searchType : 1; 
    }  _has;
    int  _refineSearchType;
    NSString * _searchString;
    int  _searchType;
    NSMutableArray * _suggestionItems;
}

@property (nonatomic, readwrite) BOOL hasRefineSearchType;
@property (nonatomic, readonly) BOOL hasSearchString;
@property (nonatomic, readwrite) BOOL hasSearchType;
@property (nonatomic, readwrite) int refineSearchType;
@property (nonatomic, readwrite, retain) NSString *searchString;
@property (nonatomic, readwrite) int searchType;
@property (nonatomic, readwrite, retain) NSMutableArray *suggestionItems;

+ (Class)suggestionItemType;

- (void).cxx_destruct;
- (int)StringAsRefineSearchType:(id)arg1;
- (int)StringAsSearchType:(id)arg1;
- (void)addSuggestionItem:(id)arg1;
- (void)clearSuggestionItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRefineSearchType;
- (BOOL)hasSearchString;
- (BOOL)hasSearchType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)refineSearchType;
- (id)refineSearchTypeAsString:(int)arg1;
- (id)searchString;
- (int)searchType;
- (id)searchTypeAsString:(int)arg1;
- (void)setHasRefineSearchType:(BOOL)arg1;
- (void)setHasSearchType:(BOOL)arg1;
- (void)setRefineSearchType:(int)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchType:(int)arg1;
- (void)setSuggestionItems:(id)arg1;
- (id)suggestionItemAtIndex:(unsigned long long)arg1;
- (id)suggestionItems;
- (unsigned long long)suggestionItemsCount;
- (void)writeTo:(id)arg1;

@end
