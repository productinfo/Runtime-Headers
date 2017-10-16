/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SharedFileList.framework/Versions/A/SharedFileList
 */

@interface SFLGenericList : NSObject <SFLInsertOrderedSet, SFLList, SFLOrderedSet> {
    NSString * _identifier;
    NSObject<OS_dispatch_group> * _internalInitializeGroup;
    id  _internalItems;
    id  _internalList;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalObserverLock;
    id  _internalObservers;
    NSObject<OS_dispatch_queue> * _internalQueue;
    id  _itemsByIdentifier;
    id  _notifyToken;
    unsigned long long  _seed;
}

@property (atomic, readonly, copy) NSArray *allItems;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly, retain) NSString *identifier;
@property (atomic, readwrite, retain) _SFLList *internalList;
@property (nonatomic, readwrite, copy) NSArray *items;
@property (atomic, readwrite, retain) NSMutableDictionary *itemsByIdentifier;
@property (atomic, readwrite, retain) id notifyToken;
@property (atomic, readonly) NSHashTable *observers;
@property (atomic, readwrite, copy) NSDictionary *properties;
@property (atomic, readonly) unsigned long long seed;
@property (atomic, readonly, copy) NSArray *snapshotItems;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_addItem:(id)arg1 error:(id*)arg2;
- (unsigned long long)_cfTypeID;
- (id)_fetchList;
- (unsigned long long)_indexForInsertOfItems:(id)arg1 afterItem:(id)arg2;
- (unsigned long long)_indexOfItem:(id)arg1;
- (BOOL)_insertItem:(id)arg1 afterItem:(id)arg2 error:(id*)arg3;
- (BOOL)_insertItem:(id)arg1 atIndex:(unsigned long long)arg2 error:(id*)arg3;
- (id)_items;
- (BOOL)_moveItem:(id)arg1 afterItem:(id)arg2 error:(id*)arg3;
- (BOOL)_moveItem:(id)arg1 toIndex:(unsigned long long)arg2 error:(id*)arg3;
- (void)_notifyObserverListInitialize:(id)arg1;
- (void)_notifyObserversListDidChange;
- (BOOL)_originatorAuditTokenMatchesThisProcess:(id)arg1;
- (void)_removeAllItems;
- (BOOL)_removeItemWithIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)_setPropertyValuesForKeysWithDictionary:(id)arg1 error:(id*)arg2;
- (BOOL)_updateItem:(id)arg1 error:(id*)arg2;
- (BOOL)addItem:(id)arg1 error:(id*)arg2;
- (void)addObserver:(id)arg1;
- (id)allItems;
- (BOOL)containsItem:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)handleListChangeNotification:(id)arg1;
- (id)identifier;
- (unsigned long long)indexOfItem:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)insertItem:(id)arg1 afterItem:(id)arg2 error:(id*)arg3;
- (BOOL)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 error:(id*)arg3;
- (id)internalList;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)items;
- (id)itemsByIdentifier;
- (BOOL)moveItem:(id)arg1 afterItem:(id)arg2 error:(id*)arg3;
- (BOOL)moveItem:(id)arg1 toIndex:(unsigned long long)arg2 error:(id*)arg3;
- (id)notifyToken;
- (id)observers;
- (id)properties;
- (void)removeAllItems;
- (BOOL)removeItem:(id)arg1 error:(id*)arg2;
- (void)removeObserver:(id)arg1;
- (void)resolveItemWithIdentifier:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 completion:(id)arg4;
- (unsigned long long)seed;
- (void)setInternalList:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setItemsByIdentifier:(id)arg1;
- (void)setNotifyToken:(id)arg1;
- (void)setProperties:(id)arg1;
- (BOOL)setPropertyValuesForKeysWithDictionary:(id)arg1 error:(id*)arg2;
- (id)snapshotItems;
- (BOOL)updateItem:(id)arg1 error:(id*)arg2;

@end