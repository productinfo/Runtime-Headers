/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSDictionaryI : NSDictionary {
    unsigned int  _szidx;
    unsigned int  _used;
}

+ (id)__new:(const id*)arg1 :(const id*)arg2 :(unsigned long long)arg3 :(bool)arg4 :(bool)arg5;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)__apply:(int (*)arg1 context:(void*)arg2;
- (double)_clumpingFactor;
- (double)_clumpingInterestingThreshold;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;

@end