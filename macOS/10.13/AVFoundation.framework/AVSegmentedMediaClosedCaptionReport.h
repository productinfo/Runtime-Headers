/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVSegmentedMediaClosedCaptionReport : NSObject {
    NSDictionary * _dict;
}

@property (nonatomic, readonly) NSString *ccInStreamID;
@property (getter=isEnabled, nonatomic, readonly) BOOL enabled;
@property (getter=isExcludedFromAutoSelection, nonatomic, readonly) BOOL excludedFromAutoSelection;
@property (nonatomic, readonly) NSString *extendedLanguageTag;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSString *mediaType;

- (id)ccInStreamID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)extendedLanguageTag;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEnabled;
- (BOOL)isExcludedFromAutoSelection;
- (id)languageCode;
- (id)mediaType;

@end
