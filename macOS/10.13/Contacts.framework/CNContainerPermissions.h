/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNContainerPermissions : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _canCreateContacts;
    BOOL  _canCreateGroups;
    BOOL  _canDeleteContacts;
}

@property (nonatomic, readonly) BOOL canCreateContacts;
@property (nonatomic, readonly) BOOL canCreateGroups;
@property (nonatomic, readonly) BOOL canDeleteContacts;

+ (BOOL)supportsSecureCoding;

- (BOOL)canCreateContacts;
- (BOOL)canCreateGroups;
- (BOOL)canDeleteContacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCanCreateContacts:(BOOL)arg1 canDeleteContacts:(BOOL)arg2 canCreateGroups:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end