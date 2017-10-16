/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
 */

@interface ACCredentialItem : NSObject <ACProtobufCoding, NSSecureCoding> {
    NSString * _accountIdentifier;
    ACAccountStore * _accountStore;
    NSMutableSet * _dirtyProperties;
    NSDate * _expirationDate;
    NSURL * _objectID;
    BOOL  _persistent;
    NSString * _serviceName;
}

@property (atomic, readonly) NSString *accountIdentifier;
@property (atomic, readwrite) ACAccountStore *accountStore;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isDirty, atomic, readonly) BOOL dirty;
@property (atomic, readonly) NSSet *dirtyProperties;
@property (atomic, readwrite, retain) NSDate *expirationDate;
@property (getter=isExpired, atomic, readonly) BOOL expired;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSURL *objectID;
@property (getter=isPersistent, atomic, readwrite) BOOL persistent;
@property (atomic, readonly) NSString *serviceName;
@property (atomic, readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_encodeProtobuf;
- (id)_encodeProtobufData;
- (id)_initWithProtobuf:(id)arg1;
- (id)_initWithProtobufData:(id)arg1;
- (void)_markPropertyDirty:(id)arg1;
- (id)accountIdentifier;
- (id)accountStore;
- (void)clearDirtyProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dirtyProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)fullDescription;
- (id)initWithAccountIdentifier:(id)arg1 serviceName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedCredentialItem:(id)arg1;
- (id)initWithManagedCredentialItem:(id)arg1 accountStore:(id)arg2;
- (BOOL)isDirty;
- (BOOL)isExpired;
- (BOOL)isPersistent;
- (BOOL)isPropertyDirty:(id)arg1;
- (void)markAllPropertiesDirty;
- (id)objectID;
- (id)serviceName;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setPersistent:(BOOL)arg1;
- (void)setServiceName:(id)arg1;

@end