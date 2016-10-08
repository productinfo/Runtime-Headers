/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface CFPrefsSource : NSObject {
    _CFXPreferences * _containingPreferences;
    struct __CFDictionary { } * _dict;
    long long  _generationCount;
    BOOL  _isSearchList;
    struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } * _lock;
    struct __CFArray { } * _observers;
    union { 
        struct _CFPrefsShmemEntry { 
            int owner; 
            unsigned int generation; 
        } entry; 
        unsigned long long value; 
    }  lastKnownShmemState;
    /* Warning: Unrecognized filer type: '^' using 'void*' */ void* shmemEntry;
}

- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (void)addPreferencesObserver:(id)arg1;
- (void)alreadylocked_addPreferencesObserver:(id)arg1;
- (void)alreadylocked_clearCache;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (long long)alreadylocked_generationCount;
- (void)alreadylocked_removePreferencesObserver:(id)arg1;
- (BOOL)alreadylocked_requestNewData;
- (void)alreadylocked_setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3;
- (void)alreadylocked_updateObservingRemoteChanges;
- (struct __CFString { }*)container;
- (struct __CFDictionary { }*)copyDictionary;
- (struct __CFArray { }*)copyKeyList;
- (struct __CFString { }*)copyOSLogDescription;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (void)dealloc;
- (id)description;
- (void)didChangeValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3;
- (struct __CFString { }*)domainIdentifier;
- (void)fullCloudSynchronizeWithCompletionHandler:(id)arg1;
- (long long)generationCount;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5;
- (id)initWithContainingPreferences:(id)arg1;
- (BOOL)isByHost;
- (BOOL)isVolatile;
- (void)lock;
- (void)lockObservers;
- (BOOL)managed;
- (void)mergeIntoDictionary:(struct __CFDictionary { }*)arg1;
- (void)removeAllValues;
- (void)removePreferencesObserver:(id)arg1;
- (void)replaceAllValuesWithValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3;
- (void)setAccessRestricted:(BOOL)arg1;
- (void)setConfigurationPath:(struct __CFString { }*)arg1;
- (void)setDaemonCacheEnabled:(BOOL)arg1;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3;
- (void)setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 removeValuesForKeys:(const struct __CFString {}**)arg4 count:(long long)arg5;
- (BOOL)synchronize;
- (void)unlock;
- (void)unlockObservers;
- (struct __CFString { }*)userIdentifier;
- (void)willChangeValuesForKeys:(const struct __CFString {}**)arg1 count:(long long)arg2;

@end
