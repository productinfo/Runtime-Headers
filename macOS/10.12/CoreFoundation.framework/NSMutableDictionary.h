/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface NSMutableDictionary : NSDictionary

// Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;

- (void)__addObject:(id)arg1 forKey:(id)arg2;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (void)_mutate;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (void)addObjects:(id)arg1 forKeys:(id)arg2;
- (void)addObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)invert;
- (void)removeAllObjects;
- (void)removeEntriesInDictionary:(id)arg1;
- (void)removeEntriesPassingTest:(id)arg1;
- (void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (void)removeKeysForObject:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)replaceObjects:(id)arg1 forKeys:(id)arg2;
- (void)replaceObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)setDictionary:(id)arg1;
- (void)setEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;

// NSMutableDictionary (NSSharedKeySetDictionary)

+ (id)dictionaryWithSharedKeySet:(id)arg1;

// Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SharedFileList.framework/Versions/A/SharedFileList

// NSMutableDictionary (SFL)

- (void)_SFL_setObjectOrNil:(id)arg1 forKey:(id)arg2;
- (void)_SFL_setTimeInterval:(double)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

// NSMutableDictionary (NSDeprecatedKeyValueCoding)

- (void)takeValue:(id)arg1 forKey:(id)arg2;

// NSMutableDictionary (NSKeyValueCoding)

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)takeStoredValue:(id)arg1 forKey:(id)arg2;

// NSMutableDictionary (NSMutableDictionary)

- (Class)classForCoder;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;

// NSMutableDictionary (NSURLExtras)

- (void)_web_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_web_setInt:(int)arg1 forKey:(id)arg2;
- (void)_web_setObject:(id)arg1 forUncopiedKey:(id)arg2;

// Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth

// NSMutableDictionary (NSOBEXHeaderUtilities)

+ (id)dictionaryWithOBEXHeadersData:(id)arg1;
+ (id)dictionaryWithOBEXHeadersData:(const void*)arg1 headersDataSize:(unsigned long long)arg2;
+ (id)withOBEXHeadersData:(const void*)arg1 headersDataSize:(unsigned long long)arg2;

- (int)addApplicationParameterHeader:(const void*)arg1 length:(unsigned int)arg2;
- (int)addAuthorizationChallengeHeader:(const void*)arg1 length:(unsigned int)arg2;
- (int)addAuthorizationResponseHeader:(const void*)arg1 length:(unsigned int)arg2;
- (int)addBodyHeader:(const void*)arg1 length:(unsigned int)arg2 endOfBody:(BOOL)arg3;
- (int)addByteSequenceHeader:(const void*)arg1 length:(unsigned int)arg2;
- (int)addConnectionIDHeader:(const void*)arg1 length:(unsigned int)arg2;
- (int)addCountHeader:(unsigned int)arg1;
- (int)addDescriptionHeader:(id)arg1;
- (int)addHTTPHeader:(const void*)arg1 length:(unsigned int)arg2;
- (int)addImageDescriptorHeader:(const void*)arg1 length:(unsigned int)arg2;
- (int)addImageHandleHeader:(id)arg1;
- (int)addLengthHeader:(unsigned int)arg1;
- (int)addNameHeader:(id)arg1;
- (int)addObjectClassHeader:(const void*)arg1 length:(unsigned int)arg2;
- (int)addTargetHeader:(const void*)arg1 length:(unsigned int)arg2;
- (int)addTime4ByteHeader:(unsigned int)arg1;
- (int)addTimeISOHeader:(const void*)arg1 length:(unsigned int)arg2;
- (int)addTypeHeader:(id)arg1;
- (int)addUserDefinedHeader:(const void*)arg1 length:(unsigned int)arg2;
- (int)addWhoHeader:(const void*)arg1 length:(unsigned int)arg2;
- (id)getHeaderBytes;

@end
