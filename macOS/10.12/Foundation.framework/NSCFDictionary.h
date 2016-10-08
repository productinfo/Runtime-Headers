/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSCFDictionary : NSMutableDictionary

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setObject:(id)arg1 forKey:(id)arg2;

// NSCFDictionary (NSKeyValueObservingCustomization)

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)setObservationInfo:(void*)arg1;

@end