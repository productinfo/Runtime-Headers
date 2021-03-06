/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOTileCache : NSObject {
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    GEOTileCacheReserved * _reserved;
}

@property (atomic, readonly) unsigned long long currentCost;
@property (atomic, readonly) unsigned long long currentCount;
@property (atomic, readwrite) unsigned long long maxCapacity;
@property (atomic, readwrite) unsigned long long maxCost;

- (void).cxx_destruct;
- (id)_description;
- (void)_enteredBackground:(id)arg1;
- (void)_evictWithMaxCost:(unsigned long long)arg1 maxCapacity:(unsigned long long)arg2;
- (void)_receivedMemoryNotification;
- (void)_removeTileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (BOOL)containsKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 cost:(unsigned long long*)arg2;
- (void)dealloc;
- (id)description;
- (void)enumerate:(id)arg1;
- (id)init;
- (unsigned long long)maxCapacity;
- (unsigned long long)maxCost;
- (void)removeAllObjects;
- (void)removeTileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)removeTilesMatchingPredicate:(id)arg1;
- (void)removeTilesWithKeys:(id)arg1;
- (void)setMaxCapacity:(unsigned long long)arg1;
- (void)setMaxCost:(unsigned long long)arg1;
- (void)setNullForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)setTile:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 cost:(unsigned long long)arg3;
- (id)tileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;

// GEOTileCache (Testing)

- (unsigned long long)currentCost;
- (unsigned long long)currentCount;

@end
