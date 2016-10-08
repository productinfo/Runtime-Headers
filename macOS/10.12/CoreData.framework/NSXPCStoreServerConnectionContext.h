/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSXPCStoreServerConnectionContext : NSObject {
    NSManagedObjectContext * _context;
    NSXPCStoreConnectionInfo * _info;
    id  _manager;
}

- (struct { unsigned int x1[8]; })auditToken;
- (id)cache;
- (void)dealloc;
- (id)description;
- (id)entitlements;
- (id)initWithConnectionInfo:(id)arg1;
- (id)managedObjectContext;
- (id)notificationManager;
- (id)persistentStoreCoordinator;
- (void)setManagedObjectContext:(id)arg1;
- (void)setNotificationManager:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
