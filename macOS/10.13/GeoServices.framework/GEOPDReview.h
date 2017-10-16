/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDReview : PBCodable <NSCopying> {
    struct { 
        unsigned int reviewTime : 1; 
    }  _has;
    GEOPDRating * _rating;
    NSString * _reviewId;
    double  _reviewTime;
    GEOPDUser * _reviewer;
    NSMutableArray * _snippets;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasRating;
@property (nonatomic, readonly) BOOL hasReviewId;
@property (nonatomic, readwrite) BOOL hasReviewTime;
@property (nonatomic, readonly) BOOL hasReviewer;
@property (nonatomic, readwrite, retain) GEOPDRating *rating;
@property (nonatomic, readwrite, retain) NSString *reviewId;
@property (nonatomic, readwrite) double reviewTime;
@property (nonatomic, readwrite, retain) GEOPDUser *reviewer;
@property (nonatomic, readwrite, retain) NSMutableArray *snippets;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)snippetType;

- (void).cxx_destruct;
- (void)addSnippet:(id)arg1;
- (void)clearSnippets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRating;
- (BOOL)hasReviewId;
- (BOOL)hasReviewTime;
- (BOOL)hasReviewer;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)rating;
- (BOOL)readFrom:(id)arg1;
- (id)reviewId;
- (double)reviewTime;
- (id)reviewer;
- (void)setHasReviewTime:(BOOL)arg1;
- (void)setRating:(id)arg1;
- (void)setReviewId:(id)arg1;
- (void)setReviewTime:(double)arg1;
- (void)setReviewer:(id)arg1;
- (void)setSnippets:(id)arg1;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (id)snippets;
- (unsigned long long)snippetsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOPDReview (PlaceDataExtras)

+ (id)reviewsForPlaceData:(id)arg1;

- (id)_bestSnippet;
- (id)_bestSnippetLocale;

@end