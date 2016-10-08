/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSKeyedUnarchiver : NSCoder {
    const char * _bytes;
    id  _containers;
    id  _data;
    id  _delegate;
    unsigned int  _flags;
    int  _genericKey;
    id  _helper;
    unsigned long long  _len;
    id  _nameClassMap;
    id  _objRefMap;
    id  _objects;
    void * _offsetData;
    id  _refObjMap;
    id  _replacementMap;
    void * _reserved0;
    id  _tmpRefObjMap;
}

@property (atomic, readwrite) long long decodingFailurePolicy;
@property (atomic, readwrite) <NSKeyedUnarchiverDelegate> *delegate;
@property (atomic, readwrite) BOOL requiresSecureCoding;

+ (Class)classForClassName:(id)arg1;
+ (void)initialize;
+ (void)setClass:(Class)arg1 forClassName:(id)arg2;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithData:(id)arg1 error:(id*)arg2;
+ (id)unarchiveObjectWithFile:(id)arg1;
+ (id)unarchiveTopLevelObjectWithData:(id)arg1 error:(id*)arg2;

- (void)__setError:(id)arg1;
- (id)_allowedClassNames;
- (BOOL)_allowsValueCoding;
- (id)_blobForCurrentObject;
- (unsigned int)_currentUniqueIdentifier;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
- (id)_decodePropertyListForKey:(id)arg1;
- (id)_initWithStream:(struct __CFReadStream { }*)arg1 data:(id)arg2 topDict:(struct __CFDictionary { }*)arg3;
- (void)_replaceObject:(id)arg1 withObject:(id)arg2;
- (void)_setAllowedClassNames:(id)arg1;
- (void)_temporaryMapReplaceObject:(id)arg1 withObject:(id)arg2;
- (BOOL)_validatePropertyListClass:(Class)arg1 forKey:(id)arg2;
- (id)allowedClasses;
- (BOOL)allowsKeyedCoding;
- (Class)classForClassName:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (void)dealloc;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void*)arg3;
- (BOOL)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1;
- (id)decodeDataObject;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodePropertyList;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (long long)decodingFailurePolicy;
- (id)delegate;
- (id)description;
- (id)error;
- (void)finishDecoding;
- (id)init;
- (id)initForReadingWithData:(id)arg1;
- (id)initWithStream:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (BOOL)requiresSecureCoding;
- (void)setAllowedClasses:(id)arg1;
- (void)setClass:(Class)arg1 forClassName:(id)arg2;
- (void)setDecodingFailurePolicy:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequiresSecureCoding:(BOOL)arg1;
- (unsigned int)systemVersion;
- (long long)versionForClassName:(id)arg1;

@end
