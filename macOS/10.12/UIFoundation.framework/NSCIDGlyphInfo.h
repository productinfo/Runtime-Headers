/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface NSCIDGlyphInfo : NSGlyphInfo <NSSecureCoding> {
    unsigned short  _cid;
    unsigned long long  _collection;
}

+ (id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end
