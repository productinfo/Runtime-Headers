/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSSQLConnectionManager : NSObject {
    id  _filter;
    NSSQLCore * _sqlCore;
}

@property (nonatomic, readwrite, copy) id filter;

- (void)dealloc;
- (void)disconnectAllConnections;
- (id)filter;
- (BOOL)handleStoreRequest:(id)arg1;
- (id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3;
- (id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2;
- (id)initializationConnection;
- (void)scheduleBarrierBlock:(id)arg1;
- (void)scheduleConnectionsBarrier:(id)arg1;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (void)setFilter:(id)arg1;
- (id)sqlCore;
- (BOOL)willHandleStoreRequest:(id)arg1;

@end
