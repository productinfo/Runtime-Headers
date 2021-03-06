/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVMutableMetadataItem : AVMetadataItem {
    AVMutableMetadataItemInternal * _mutablePriv;
}

@property (nonatomic, readwrite, copy) NSString *dataType;
@property (nonatomic, readwrite) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readwrite, copy) NSString *extendedLanguageTag;
@property (nonatomic, readwrite, copy) NSDictionary *extraAttributes;
@property (nonatomic, readwrite, copy) NSString *identifier;
@property (nonatomic, readwrite, copy) NSLocale *locale;
@property (nonatomic, readwrite) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, readwrite, copy) <NSObject><NSCopying> *value;

+ (id)keyPathsForValuesAffectingIdentifier;
+ (id)metadataItem;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)extendedLanguageTag;
- (id)extraAttributes;
- (id)identifier;
- (id)key;
- (id)keySpace;
- (id)languageCode;
- (id)locale;
- (void)setDataType:(id)arg1;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setExtraAttributes:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setKeySpace:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setValue:(id)arg1;
- (id)startDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)value;

@end
