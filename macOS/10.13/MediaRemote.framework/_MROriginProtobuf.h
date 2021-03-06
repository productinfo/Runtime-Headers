/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MROriginProtobuf : PBCodable <NSCopying> {
    _MRDeviceInfoMessageProtobuf * _deviceInfo;
    NSString * _displayName;
    struct { 
        unsigned int identifier : 1; 
        unsigned int type : 1; 
    }  _has;
    int  _identifier;
    int  _type;
}

@property (nonatomic, readwrite, retain) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic, readwrite, retain) NSString *displayName;
@property (nonatomic, readonly) BOOL hasDeviceInfo;
@property (nonatomic, readonly) BOOL hasDisplayName;
@property (nonatomic, readwrite) BOOL hasIdentifier;
@property (nonatomic, readwrite) BOOL hasType;
@property (nonatomic, readwrite) int identifier;
@property (nonatomic, readwrite) int type;

- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceInfo;
- (id)dictionaryRepresentation;
- (id)displayName;
- (BOOL)hasDeviceInfo;
- (BOOL)hasDisplayName;
- (BOOL)hasIdentifier;
- (BOOL)hasType;
- (unsigned long long)hash;
- (int)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasIdentifier:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
