/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORPInstructionCorrection : PBCodable <NSCopying> {
    NSString * _comments;
    struct { 
        unsigned int routeStepIndex : 1; 
        unsigned int routeStepSubstepIndex : 1; 
    }  _has;
    GEORPPhotoWithMetadata * _photo;
    unsigned int  _routeStepIndex;
    NSData * _routeStepScreenshotImageData;
    unsigned int  _routeStepSubstepIndex;
}

@property (nonatomic, readwrite, retain) NSString *comments;
@property (nonatomic, readonly) BOOL hasComments;
@property (nonatomic, readonly) BOOL hasPhoto;
@property (nonatomic, readwrite) BOOL hasRouteStepIndex;
@property (nonatomic, readonly) BOOL hasRouteStepScreenshotImageData;
@property (nonatomic, readwrite) BOOL hasRouteStepSubstepIndex;
@property (nonatomic, readwrite, retain) GEORPPhotoWithMetadata *photo;
@property (nonatomic, readwrite) unsigned int routeStepIndex;
@property (nonatomic, readwrite, retain) NSData *routeStepScreenshotImageData;
@property (nonatomic, readwrite) unsigned int routeStepSubstepIndex;

- (void).cxx_destruct;
- (id)comments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasComments;
- (BOOL)hasPhoto;
- (BOOL)hasRouteStepIndex;
- (BOOL)hasRouteStepScreenshotImageData;
- (BOOL)hasRouteStepSubstepIndex;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photo;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)routeStepIndex;
- (id)routeStepScreenshotImageData;
- (unsigned int)routeStepSubstepIndex;
- (void)setComments:(id)arg1;
- (void)setHasRouteStepIndex:(BOOL)arg1;
- (void)setHasRouteStepSubstepIndex:(BOOL)arg1;
- (void)setPhoto:(id)arg1;
- (void)setRouteStepIndex:(unsigned int)arg1;
- (void)setRouteStepScreenshotImageData:(id)arg1;
- (void)setRouteStepSubstepIndex:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end