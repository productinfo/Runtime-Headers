/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNPerContactPropertyKeyDescriptor : NSObject <CNKeyDescriptor, CNKeyDescriptor_Private> {
    NSMutableDictionary * _propertiesByIdentifier;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) NSMutableDictionary *propertiesByIdentifier;
@property (atomic, readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_cn_executeGetterForRepresentedKeys:(id)arg1;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)propertiesByIdentifier;
- (void)setKeysToFetch:(id)arg1 forContactIdentifier:(id)arg2;
- (void)setPropertiesByIdentifier:(id)arg1;

@end