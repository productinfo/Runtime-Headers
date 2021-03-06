/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgStateMapUI : PBCodable <NSCopying> {
    struct { 
        unsigned int layoutInfo : 1; 
        unsigned int layoutStyle : 1; 
    }  _has;
    int  _layoutInfo;
    int  _layoutStyle;
    GEOMultiTabsState * _multiTabsState;
}

@property (nonatomic, readwrite) BOOL hasLayoutInfo;
@property (nonatomic, readwrite) BOOL hasLayoutStyle;
@property (nonatomic, readonly) BOOL hasMultiTabsState;
@property (nonatomic, readwrite) int layoutInfo;
@property (nonatomic, readwrite) int layoutStyle;
@property (nonatomic, readwrite, retain) GEOMultiTabsState *multiTabsState;

- (void).cxx_destruct;
- (int)StringAsLayoutInfo:(id)arg1;
- (int)StringAsLayoutStyle:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLayoutInfo;
- (BOOL)hasLayoutStyle;
- (BOOL)hasMultiTabsState;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (int)layoutInfo;
- (id)layoutInfoAsString:(int)arg1;
- (int)layoutStyle;
- (id)layoutStyleAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)multiTabsState;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLayoutInfo:(BOOL)arg1;
- (void)setHasLayoutStyle:(BOOL)arg1;
- (void)setLayoutInfo:(int)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setMultiTabsState:(id)arg1;
- (void)writeTo:(id)arg1;

@end
