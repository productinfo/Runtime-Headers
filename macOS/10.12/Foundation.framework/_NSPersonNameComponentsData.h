/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface _NSPersonNameComponentsData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _familyName;
    NSString * _givenName;
    NSString * _middleName;
    NSString * _namePrefix;
    NSString * _nameSuffix;
    NSString * _nickname;
    NSPersonNameComponents * _phoneticRepresentation;
}

@property (atomic, readwrite, copy) NSString *familyName;
@property (atomic, readwrite, copy) NSString *givenName;
@property (atomic, readwrite, copy) NSString *middleName;
@property (atomic, readwrite, copy) NSString *namePrefix;
@property (atomic, readwrite, copy) NSString *nameSuffix;
@property (atomic, readwrite, copy) NSString *nickname;
@property (atomic, readwrite, copy) NSPersonNameComponents *phoneticRepresentation;

+ (BOOL)supportsSecureCoding;

- (void)_freeIvars;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)middleName;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)phoneticRepresentation;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setPhoneticRepresentation:(id)arg1;

@end
