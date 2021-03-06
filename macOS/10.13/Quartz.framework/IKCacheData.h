/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKCacheData : NSObject {
    IKCacheDatabase * _db;
    IKCacheNode * _lastRequestedNode;
    int  _lastRequestedSize;
    unsigned long long  _lastRequestedUID;
    IKCacheManager * _parent;
}

- (id)cacheNodeWithUID:(unsigned long long)arg1 withSize:(int)arg2;
- (id)database;
- (void)dealloc;
- (id)init;
- (id)nodeForUID:(unsigned long long)arg1 size:(int)arg2 createIfNeeded:(BOOL)arg3;
- (id)objectWithUID:(unsigned long long)arg1 withSize:(int)arg2 withKey:(int)arg3;
- (id)parent;
- (void)prepareChildsToDie;
- (void)removeCacheNodeWithUID:(unsigned long long)arg1 withSize:(int)arg2;
- (void)removeObjectWithUID:(unsigned long long)arg1 withSize:(int)arg2 withKey:(int)arg3;
- (void)setParent:(id)arg1;
- (BOOL)storeImage:(id)arg1 withUID:(unsigned long long)arg2 withSize:(int)arg3;
- (unsigned long long)unshareEntriesWithUIDIfNeeded:(id)arg1 cacheManager:(id)arg2;

@end
