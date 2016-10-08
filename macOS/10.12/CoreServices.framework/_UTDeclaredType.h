/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _UTDeclaredType : _UTConcreteType {
    NSObject<OS_dispatch_queue> * _additionalInfoQueue;
    NSArray * _conformsTo;
    NSData * _declaringBundleBookmark;
    NSString * _declaringBundleDelegate;
    NSURL * _declaringBundleURL;
    unsigned int  _flags;
    NSArray * _iconFiles;
    NSString * _kextName;
    NSString * _localizedDescription;
    NSDictionary * _localizedDescriptionDictionary;
    NSURL * _parentIconURL;
    NSString * _referenceURLString;
    NSDictionary * _tagSpecification;
    NSString * _unlocalizedDescription;
    NSUUID * _uuid;
    NSNumber * _version;
}

+ (BOOL)supportsSecureCoding;

- (id)_iconURL;
- (BOOL)_isActive;
- (BOOL)_isAppleInternal;
- (BOOL)_isPublic;
- (id)_kernelExtensionName;
- (id)_localizedDescriptionDictionary;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)arg1;
- (id)_unlocalizedDescription;
- (void)dealloc;
- (id)declaration;
- (id)declaringBundleURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1 UTTypeID:(unsigned int)arg2 UTTypeData:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5[16]; int x6; unsigned int x7; unsigned int x8; unsigned int x9[1]; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; }*)arg3;
- (BOOL)isDeclared;
- (id)parentIdentifiers;
- (id)referenceURL;
- (id)tagSpecification;
- (id)version;

// _UTDeclaredType (Private)

- (BOOL)needsWorkaroundFor22092605;
- (BOOL)validateCollectionTypes;

@end
