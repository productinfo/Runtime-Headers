/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKPlacecardModuleLayoutEntry : PBCodable <NSCopying> {
    NSString * _appId;
    MKPlacecardModuleLayout * _layout;
    NSString * _layoutId;
}

@property (nonatomic, readwrite, retain) NSString *appId;
@property (nonatomic, readonly) BOOL hasAppId;
@property (nonatomic, readonly) BOOL hasLayout;
@property (nonatomic, readonly) BOOL hasLayoutId;
@property (nonatomic, readwrite, retain) MKPlacecardModuleLayout *layout;
@property (nonatomic, readwrite, retain) NSString *layoutId;

- (void).cxx_destruct;
- (id)appId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAppId;
- (BOOL)hasLayout;
- (BOOL)hasLayoutId;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)layout;
- (id)layoutId;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAppId:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setLayoutId:(id)arg1;
- (void)writeTo:(id)arg1;

@end