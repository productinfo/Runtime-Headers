/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface __NSFileSecurity : NSFileSecurity <NSCoding, NSCopying> {
    struct _filesec { } * _filesec;
}

+ (id)__new:(struct _filesec { }*)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (struct _filesec { }*)_filesec;
- (BOOL)clearProperties:(unsigned long long)arg1;
- (BOOL)copyAccessControlList:(struct _acl {}**)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getGroup:(unsigned int*)arg1;
- (BOOL)getGroupUUID:(unsigned char*)arg1;
- (BOOL)getMode:(unsigned short*)arg1;
- (BOOL)getOwner:(unsigned int*)arg1;
- (BOOL)getOwnerUUID:(unsigned char*)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)setAccessControlList:(struct _acl { }*)arg1;
- (BOOL)setGroup:(unsigned int)arg1;
- (BOOL)setGroupUUID:(unsigned char)arg1;
- (BOOL)setMode:(unsigned short)arg1;
- (BOOL)setOwner:(unsigned int)arg1;
- (BOOL)setOwnerUUID:(unsigned char)arg1;

@end
