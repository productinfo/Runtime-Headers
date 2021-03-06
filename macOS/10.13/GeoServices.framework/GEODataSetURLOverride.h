/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEODataSetURLOverride : PBCodable <NSCopying> {
    NSString * _addressCorrectionInitURL;
    NSString * _addressCorrectionUpdateURL;
    NSString * _announcementsURL;
    NSString * _batchReverseGeocoderURL;
    NSString * _businessPortalBaseURL;
    unsigned int  _dataSet;
    NSString * _directionsURL;
    NSString * _dispatcherURL;
    NSString * _etaURL;
    struct { 
        unsigned int dataSet : 1; 
    }  _has;
    NSString * _logMessageUsageURL;
    NSString * _problemCategoriesURL;
    NSString * _problemOptInURL;
    NSString * _problemStatusURL;
    NSString * _problemSubmissionURL;
    NSString * _simpleETAURL;
    NSString * _spatialLookupURL;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) NSString *addressCorrectionInitURL;
@property (nonatomic, readwrite, retain) NSString *addressCorrectionUpdateURL;
@property (nonatomic, readwrite, retain) NSString *announcementsURL;
@property (nonatomic, readwrite, retain) NSString *batchReverseGeocoderURL;
@property (nonatomic, readwrite, retain) NSString *businessPortalBaseURL;
@property (nonatomic, readwrite) unsigned int dataSet;
@property (nonatomic, readwrite, retain) NSString *directionsURL;
@property (nonatomic, readwrite, retain) NSString *dispatcherURL;
@property (nonatomic, readwrite, retain) NSString *etaURL;
@property (nonatomic, readonly) BOOL hasAddressCorrectionInitURL;
@property (nonatomic, readonly) BOOL hasAddressCorrectionUpdateURL;
@property (nonatomic, readonly) BOOL hasAnnouncementsURL;
@property (nonatomic, readonly) BOOL hasBatchReverseGeocoderURL;
@property (nonatomic, readonly) BOOL hasBusinessPortalBaseURL;
@property (nonatomic, readwrite) BOOL hasDataSet;
@property (nonatomic, readonly) BOOL hasDirectionsURL;
@property (nonatomic, readonly) BOOL hasDispatcherURL;
@property (nonatomic, readonly) BOOL hasEtaURL;
@property (nonatomic, readonly) BOOL hasLogMessageUsageURL;
@property (nonatomic, readonly) BOOL hasProblemCategoriesURL;
@property (nonatomic, readonly) BOOL hasProblemOptInURL;
@property (nonatomic, readonly) BOOL hasProblemStatusURL;
@property (nonatomic, readonly) BOOL hasProblemSubmissionURL;
@property (nonatomic, readonly) BOOL hasSimpleETAURL;
@property (nonatomic, readonly) BOOL hasSpatialLookupURL;
@property (nonatomic, readwrite, retain) NSString *logMessageUsageURL;
@property (nonatomic, readwrite, retain) NSString *problemCategoriesURL;
@property (nonatomic, readwrite, retain) NSString *problemOptInURL;
@property (nonatomic, readwrite, retain) NSString *problemStatusURL;
@property (nonatomic, readwrite, retain) NSString *problemSubmissionURL;
@property (nonatomic, readwrite, retain) NSString *simpleETAURL;
@property (nonatomic, readwrite, retain) NSString *spatialLookupURL;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)addressCorrectionInitURL;
- (id)addressCorrectionUpdateURL;
- (id)announcementsURL;
- (id)batchReverseGeocoderURL;
- (id)businessPortalBaseURL;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataSet;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsURL;
- (id)dispatcherURL;
- (id)etaURL;
- (BOOL)hasAddressCorrectionInitURL;
- (BOOL)hasAddressCorrectionUpdateURL;
- (BOOL)hasAnnouncementsURL;
- (BOOL)hasBatchReverseGeocoderURL;
- (BOOL)hasBusinessPortalBaseURL;
- (BOOL)hasDataSet;
- (BOOL)hasDirectionsURL;
- (BOOL)hasDispatcherURL;
- (BOOL)hasEtaURL;
- (BOOL)hasLogMessageUsageURL;
- (BOOL)hasProblemCategoriesURL;
- (BOOL)hasProblemOptInURL;
- (BOOL)hasProblemStatusURL;
- (BOOL)hasProblemSubmissionURL;
- (BOOL)hasSimpleETAURL;
- (BOOL)hasSpatialLookupURL;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)logMessageUsageURL;
- (void)mergeFrom:(id)arg1;
- (id)problemCategoriesURL;
- (id)problemOptInURL;
- (id)problemStatusURL;
- (id)problemSubmissionURL;
- (BOOL)readFrom:(id)arg1;
- (void)setAddressCorrectionInitURL:(id)arg1;
- (void)setAddressCorrectionUpdateURL:(id)arg1;
- (void)setAnnouncementsURL:(id)arg1;
- (void)setBatchReverseGeocoderURL:(id)arg1;
- (void)setBusinessPortalBaseURL:(id)arg1;
- (void)setDataSet:(unsigned int)arg1;
- (void)setDirectionsURL:(id)arg1;
- (void)setDispatcherURL:(id)arg1;
- (void)setEtaURL:(id)arg1;
- (void)setHasDataSet:(BOOL)arg1;
- (void)setLogMessageUsageURL:(id)arg1;
- (void)setProblemCategoriesURL:(id)arg1;
- (void)setProblemOptInURL:(id)arg1;
- (void)setProblemStatusURL:(id)arg1;
- (void)setProblemSubmissionURL:(id)arg1;
- (void)setSimpleETAURL:(id)arg1;
- (void)setSpatialLookupURL:(id)arg1;
- (id)simpleETAURL;
- (id)spatialLookupURL;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
