/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNPhoneNumber : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {
    NSString * _initialCountryCode;
    struct __CFPhoneNumber { } * _phoneNumberRef;
    NSString * _stringValue;
}

@property (atomic, readonly, copy) NSString *countryCode;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly, copy) NSString *digits;
@property (atomic, readonly, copy) NSString *formattedInternationalStringValue;
@property (atomic, readonly, copy) NSString *formattedStringValue;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *initialCountryCode;
@property (atomic, readonly, copy) NSString *stringValue;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly, copy) NSString *unformattedInternationalStringValue;

+ (struct __CFPhoneNumber { }*)createCFPhoneNumberForStringValue:(id)arg1 countryCode:(id)arg2;
+ (id)defaultCountryCode;
+ (id)new;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)phoneNumberWithStringValue:(id)arg1;
+ (unsigned long long)samePersonPhoneNumberComparisonMatchCount;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)digits;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedInternationalStringValue;
- (id)formattedStringValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (id)initWithStringValue:(id)arg1 countryCode:(id)arg2;
- (id)initialCountryCode;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLikePhoneNumber:(id)arg1;
- (BOOL)isLikePhoneNumberForSamePerson:(id)arg1;
- (BOOL)isValid:(id*)arg1;
- (id)lastFourDigits;
- (struct __CFPhoneNumber { }*)nts_lazyPhoneNumberRef;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (id)stringValue;
- (id)stringValueWithCFPhoneNumberOptions:(unsigned long long)arg1;
- (id)unformattedInternationalStringValue;

@end
