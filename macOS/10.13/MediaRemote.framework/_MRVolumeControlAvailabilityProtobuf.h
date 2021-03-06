/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRVolumeControlAvailabilityProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int volumeControlAvailable : 1; 
    }  _has;
    BOOL  _volumeControlAvailable;
}

@property (nonatomic, readwrite) BOOL hasVolumeControlAvailable;
@property (nonatomic, readwrite) BOOL volumeControlAvailable;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasVolumeControlAvailable;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasVolumeControlAvailable:(BOOL)arg1;
- (void)setVolumeControlAvailable:(BOOL)arg1;
- (BOOL)volumeControlAvailable;
- (void)writeTo:(id)arg1;

@end
