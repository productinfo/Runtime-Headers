/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {
    id * _additionalPrivateIvars;
    id * _cachedObsInfoByEntity;
    int  _cd_rc;
    NSMutableSet * _changedObjects;
    NSString * _contextLabel;
    NSMutableSet * _deletedObjects;
    void * _dispatchQueue;
    double  _fetchTimestamp;
    struct _managedObjectContextFlags { 
        unsigned int _registeredForCallback : 1; 
        unsigned int _propagatesDeletesAtEndOfEvent : 1; 
        unsigned int _exhaustiveValidation : 1; 
        unsigned int _processingChanges : 1; 
        unsigned int _useCommittedSnapshot : 1; 
        unsigned int _registeredUndoTransactionID : 1; 
        unsigned int _retainsAllRegisteredObjects : 1; 
        unsigned int _savingInProgress : 1; 
        unsigned int _wasDisposed : 1; 
        unsigned int _unprocessedChangesPending : 1; 
        unsigned int _isDirty : 1; 
        unsigned int _ignoreUndoCheckpoints : 1; 
        unsigned int _propagatingDeletes : 1; 
        unsigned int _isNSEditorEditing : 1; 
        unsigned int _isMainThreadBlessed : 1; 
        unsigned int _isImportContext : 1; 
        unsigned int _preflightSaveInProgress : 1; 
        unsigned int _disableDiscardEditing : 1; 
        unsigned int _isParentStoreContext : 1; 
        unsigned int _postSaveNotifications : 1; 
        unsigned int _isMerging : 1; 
        unsigned int _concurrencyType : 1; 
        unsigned int _deleteInaccessible : 1; 
        unsigned int _priority : 2; 
        unsigned int _autoMerge : 1; 
        unsigned int _reservedFlags : 6; 
    }  _flags;
    int  _ignoreChangeNotification;
    id  _infoByGID;
    NSMutableSet * _insertedObjects;
    id  _lock;
    long long  _lockCount;
    NSMutableSet * _lockedObjects;
    long long  _objectStoreLockCount;
    id  _parentObjectStore;
    id  _queueOwner;
    long long  _referenceCallbackRegistration;
    id  _referenceQueue;
    NSMutableSet * _refreshedObjects;
    void * _reserved1;
    id  _reserved3;
    id  _reserved4;
    id  _reserved6;
    int  _spinLock;
    short  _undoTransactionID;
    NSMutableSet * _unprocessedChanges;
    NSMutableSet * _unprocessedDeletes;
    NSMutableSet * _unprocessedInserts;
}

@property (nonatomic, readwrite) BOOL automaticallyMergesChangesFromParent;
@property (atomic, readonly) unsigned long long concurrencyType;
@property (nonatomic, readonly) NSSet *deletedObjects;
@property (nonatomic, readonly) BOOL hasChanges;
@property (nonatomic, readonly) NSSet *insertedObjects;
@property (atomic, readwrite, retain) id mergePolicy;
@property (atomic, readwrite, copy) NSString *name;
@property (atomic, readwrite, retain) NSManagedObjectContext *parentContext;
@property (atomic, readwrite, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, readwrite) BOOL propagatesDeletesAtEndOfEvent;
@property (nonatomic, readonly) NSQueryGenerationToken *queryGenerationToken;
@property (nonatomic, readonly) NSSet *registeredObjects;
@property (nonatomic, readwrite) BOOL retainsRegisteredObjects;
@property (atomic, readwrite) BOOL shouldDeleteInaccessibleFaults;
@property (atomic, readwrite) double stalenessInterval;
@property (nonatomic, readwrite, retain) NSUndoManager *undoManager;
@property (nonatomic, readonly) NSSet *updatedObjects;
@property (nonatomic, readonly) NSMutableDictionary *userInfo;

+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2;
+ (id)new;

- (void)_automaticallyMergeChangesFromContextDidSaveNotification:(id)arg1;
- (BOOL)_checkObjectForExistenceAndCacheRow:(id)arg1;
- (void)_dealloc__;
- (id)_executeAsynchronousFetchRequest:(id)arg1;
- (id)_generateOptLockExceptionForConstraintFailure:(id)arg1;
- (BOOL)_isDeallocating;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (void)_mergeRefreshEpilogueForObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (BOOL)_mergeRefreshObject:(id)arg1 mergeChanges:(BOOL)arg2 withPersistentSnapshot:(id)arg3;
- (void)_prepareUnprocessedDeletionAfterRefresh:(id)arg1;
- (id)_queryGenerationToken__;
- (id)_retainedCurrentQueryGeneration;
- (void)_setAutomaticallyMergesChangesFromParent:(BOOL)arg1;
- (void)_setParentContext:(id)arg1;
- (void)_setPersistentStoreCoordinator:(id)arg1;
- (BOOL)_setQueryGenerationFromToken:(id)arg1 error:(id*)arg2;
- (void)_setRetainsRegisteredObjects:(BOOL)arg1;
- (void)_setUndoManager:(id)arg1;
- (void)_thereIsNoSadnessLikeTheDeathOfOptimism;
- (BOOL)_tryRetain;
- (void)_youcreatedanNSManagedObjectContextOnthemainthreadandillegallypassedittoabackgroundthread;
- (void)assertOnImproperDealloc;
- (void)assignObject:(id)arg1 toPersistentStore:(id)arg2;
- (BOOL)automaticallyMergesChangesFromParent;
- (unsigned long long)concurrencyType;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)deleteObject:(id)arg1;
- (id)deletedObjects;
- (id)description;
- (void)detectConflictsForObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)executeRequest:(id)arg1 error:(id*)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (void)finalize;
- (BOOL)hasChanges;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConcurrencyType:(unsigned long long)arg1;
- (void)insertObject:(id)arg1;
- (id)insertedObjects;
- (void)lock;
- (void)mergeChangesFromContextDidSaveNotification:(id)arg1;
- (id)mergePolicy;
- (id)name;
- (id)objectRegisteredForID:(id)arg1;
- (id)objectWithID:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)parentContext;
- (void)performBlock:(id)arg1;
- (void)performBlockAndWait:(id)arg1;
- (id)persistentStoreCoordinator;
- (void)processPendingChanges;
- (BOOL)propagatesDeletesAtEndOfEvent;
- (id)queryGenerationToken;
- (void)redo;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (id)registeredObjects;
- (oneway void)release;
- (void)reset;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainsRegisteredObjects;
- (void)rollback;
- (BOOL)save:(id*)arg1;
- (void)setAutomaticallyMergesChangesFromParent:(BOOL)arg1;
- (void)setMergePolicy:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentContext:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setPropagatesDeletesAtEndOfEvent:(BOOL)arg1;
- (BOOL)setQueryGenerationFromToken:(id)arg1 error:(id*)arg2;
- (void)setRetainsRegisteredObjects:(BOOL)arg1;
- (void)setShouldDeleteInaccessibleFaults:(BOOL)arg1;
- (void)setStalenessInterval:(double)arg1;
- (void)setUndoManager:(id)arg1;
- (BOOL)shouldDeleteInaccessibleFaults;
- (BOOL)shouldHandleInaccessibleFault:(id)arg1 forObjectID:(id)arg2 triggeredByProperty:(id)arg3;
- (double)stalenessInterval;
- (BOOL)tryLock;
- (void)undo;
- (id)undoManager;
- (void)unlock;
- (id)updatedObjects;
- (id)userInfo;

// NSManagedObjectContext (NSEditorAndEditorRegistration)

- (void)_managedObjectContextEditor:(id)arg1 didCommit:(BOOL)arg2 contextInfo:(struct { id x1; void *x2; }*)arg3;
- (void)_sendCommitEditingSelectorToTarget:(id)arg1 sender:(id)arg2 selector:(SEL)arg3 flag:(BOOL)arg4 contextInfo:(void*)arg5 delayed:(BOOL)arg6;
- (BOOL)commitEditing;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (void)discardEditing;
- (BOOL)isEditing;
- (void)objectDidBeginEditing:(id)arg1;
- (void)objectDidEndEditing:(id)arg1;

// NSManagedObjectContext (_NSCoreDataSPI)

+ (void)_mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2;

- (id)_delegate;
- (void)_mergeChangesFromRemoteContextSave:(id)arg1;
- (id)_orderedSetWithResultsFromFetchRequest:(id)arg1;
- (void)_setDelegate:(id)arg1;
- (void)_stopConflictDetectionForObject:(id)arg1;
- (void)handlePeerContextDidSaveNotification:(id)arg1;
- (id)performBlockWithResult:(id)arg1;
- (void)performWithOptions:(unsigned long long)arg1 andBlock:(id)arg2;

// NSManagedObjectContext (_NSInternalAdditions)

+ (BOOL)_handleError:(id)arg1 withError:(id*)arg2;

- (unsigned int)_batchRetainedObjects:(id*)arg1 forCount:(unsigned int)arg2 withIDs:(id*)arg3 optionalHandler:(id)arg4 withInlineStorage:(BOOL)arg5;
- (void)_changeIDsForManagedObjects:(id)arg1 toIDs:(id)arg2;
- (void)_clearDeletions;
- (void)_clearInsertions;
- (void)_clearLockedObjects;
- (void)_clearOriginalSnapshotAndInitializeRec:(id)arg1;
- (void)_clearOriginalSnapshotForObject:(id)arg1;
- (void)_clearRefreshedObjects;
- (void)_clearUnprocessedDeletions;
- (void)_clearUnprocessedInsertions;
- (void)_clearUnprocessedUpdates;
- (void)_clearUpdates;
- (id)_committedSnapshotForObject:(id)arg1;
- (unsigned long long)_countWithMergedChangesForRequest:(id)arg1 possibleChanges:(id)arg2 possibleDeletes:(id)arg3 error:(id*)arg4;
- (unsigned long long)_countWithNoChangesForRequest:(id)arg1 error:(id*)arg2;
- (id)_createStoreFetchRequestForFetchRequest:(id)arg1;
- (id)_currentEventSnapshotForObject:(id)arg1;
- (id)_debuggingOnly_localObjectForGlobalID:(id)arg1;
- (void)_didSaveChanges;
- (BOOL)_disableDiscardEditing;
- (void)_dispose:(BOOL)arg1;
- (void)_disposeObjects:(id*)arg1 count:(unsigned long long)arg2 notifyParent:(BOOL)arg3;
- (BOOL)_doPreSaveConstraintChecksForObjects:(id)arg1 error:(id*)arg2;
- (unsigned long long)_fetchLimitForRequest:(id)arg1;
- (void)_forceRegisterLostFault:(id)arg1;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2 removeFromRegistry:(BOOL)arg3;
- (id)_globalIDForObject:(id)arg1;
- (id)_globalIDsForObjects:(id)arg1;
- (void)_growRegistrationCollectionForEntitySlot:(unsigned int)arg1 toSize:(unsigned long long)arg2;
- (BOOL)_handleError:(id)arg1 withError:(id*)arg2;
- (BOOL)_hasIDMappings;
- (void)_informParentStore:(id)arg1 noLongerInterestedInObjects:(id)arg2;
- (void)_informParentStore:(id)arg1 ofInterestInObjects:(id)arg2;
- (void)_informParentStoreNoLongerInterestedInObjectIDs:(id)arg1 generation:(id)arg2;
- (void)_informParentStoreOfInterestInObjectIDs:(id)arg1 generation:(id)arg2;
- (id)_initWithParentObjectStore:(unsigned long long)arg1;
- (void)_insertObjectWithGlobalID:(id)arg1 globalID:(id)arg2;
- (BOOL)_isImportContext;
- (BOOL)_isPreflightSaveInProgress;
- (id)_mappedForParentStoreID:(id)arg1;
- (id)_newSaveRequestForCurrentState;
- (id)_newUnchangedLockedObjects;
- (id)_parentStore;
- (void)_performCoordinatorActionAndWait:(id)arg1;
- (void)_persistentStoreDidUpdateAdditionalRowsWithNewVersions:(id)arg1;
- (BOOL)_postSaveNotifications;
- (void)_refaultObject:(id)arg1 globalID:(id)arg2 boolean:(BOOL)arg3;
- (void)_registerObject:(id)arg1 withID:(id)arg2;
- (void)_resetAllChanges;
- (id)_retainedObjectWithID:(id)arg1;
- (id)_retainedObjectWithID:(id)arg1 error:(id*)arg2;
- (id)_retainedObjectWithID:(id)arg1 optionalHandler:(id)arg2 withInlineStorage:(BOOL)arg3;
- (id)_retainedObjectsFromRemovedStore:(id)arg1;
- (id)_retainedRegisteredObjects;
- (void)_setDisableDiscardEditing:(BOOL)arg1;
- (void)_setIsUbiquityImportContext:(BOOL)arg1;
- (void)_setPostSaveNotifications:(BOOL)arg1;
- (void)_setStalenessInterval:(double)arg1;
- (void)_setStopsValidationAfterFirstError:(BOOL)arg1;
- (BOOL)_stopsValidationAfterFirstError;
- (void)_unlimitRequest:(id)arg1;
- (BOOL)_validateChangesForSave:(id*)arg1;
- (BOOL)_validateDeletesUsingTable:(id)arg1 withError:(id*)arg2;
- (BOOL)_validateObjects:(id)arg1 forOperation:(unsigned int)arg2 error:(id*)arg3 exhaustive:(BOOL)arg4 forSave:(BOOL)arg5;
- (void)lockObjectStore;
- (id)performFetch:(id)arg1 error:(id*)arg2;
- (void)unlockObjectStore;

// NSManagedObjectContext (_NSInternalChangeProcessing)

- (BOOL)_attemptCoalesceChangesForFetch;
- (void)_clearChangedThisTransaction:(id)arg1;
- (void)_createAndPostChangeNotification:(id)arg1 deletions:(id)arg2 updates:(id)arg3 refreshes:(id)arg4 deferrals:(id)arg5 wasMerge:(BOOL)arg6;
- (void)_establishEventSnapshotsForObject:(id)arg1;
- (void)_forceInsertionForObject:(id)arg1;
- (void)_forceRemoveFromDeletedObjects:(id)arg1;
- (void)_incrementUndoTransactionID;
- (void)_noop:(id)arg1;
- (void)_postRefreshedObjectsNotificationAndClearList;
- (void)_prefetchObjectsForDeletePropagation:(id)arg1;
- (BOOL)_prepareForPushChanges:(id*)arg1;
- (BOOL)_processDeletedObjects:(id*)arg1;
- (void)_processObjectStoreChanges:(id)arg1;
- (id)_processPendingDeletions:(id)arg1 withInsertions:(id)arg2 withUpdates:(id)arg3 withNewlyForgottenList:(id)arg4 withRemovedChangedObjects:(id)arg5;
- (id)_processPendingInsertions:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3;
- (id)_processPendingUpdates:(id)arg1;
- (BOOL)_processRecentChanges:(id*)arg1;
- (void)_processRecentlyForgottenObjects:(id)arg1;
- (void)_propagateDeletesUsingTable:(id)arg1;
- (BOOL)_propagatePendingDeletesAtEndOfEvent:(id*)arg1;
- (void)_registerClearStateWithUndoManager;
- (void)_registerUndoForDeletedObjects:(id)arg1 withDeletedChanges:(id)arg2;
- (void)_registerUndoForInsertedObjects:(id)arg1;
- (void)_registerUndoForModifiedObjects:(id)arg1;
- (void)_registerUndoForOperation:(SEL)arg1 withObjects:(id)arg2 withExtraArguments:(id)arg3;
- (void)_undoDeletions:(id)arg1;
- (void)_undoDeletionsMovedToUpdates:(id)arg1;
- (void)_undoInsertions:(id)arg1;
- (void)_undoManagerCheckpoint:(id)arg1;
- (void)_undoUpdates:(id)arg1;
- (void)_updateUndoTransactionForThisEvent:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3;
- (void)_updateUnprocessedOwnDestinations:(id)arg1;
- (void)objectWillChange:(id)arg1;

// NSManagedObjectContext (_NSInternalNotificationHandling)

- (void)_disableChangeNotifications;
- (void)_enableChangeNotifications;
- (void)_enqueueEndOfEventNotification;
- (BOOL)_ignoringChangeNotifications;
- (id)_implicitObservationInfoForEntity:(id)arg1 forResultingClass:(Class*)arg2;
- (void)_objectsChangedInStore:(id)arg1;
- (void)_postContextDidMergeChangesNotificationWithUserInfo:(id)arg1;
- (void)_postContextDidSaveNotificationWithUserInfo:(id)arg1;
- (void)_postObjectsDidChangeNotificationWithUserInfo:(id)arg1;
- (void)_processChangedStoreConfigurationNotification:(id)arg1;
- (void)_processEndOfEventNotification:(id)arg1;
- (void)_processNotificationQueue;
- (void)_processReferenceQueue:(BOOL)arg1;
- (void)_registerAsyncReferenceCallback;
- (void)_registerForNotificationsWithCoordinator:(id)arg1;
- (void)_sendOrEnqueueNotification:(id)arg1 selector:(SEL)arg2;
- (void)_startObservingUndoManagerNotifications;
- (void)_stopObservingUndoManagerNotifications;
- (void)_storeConfigurationChanged:(id)arg1;
- (void)_unregisterForNotifications;

// NSManagedObjectContext (_NestedContextSupport)

- (void)_copyChildObject:(id)arg1 toParentObject:(id)arg2 fromChildContext:(id)arg3;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)_parentObjectsForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (BOOL)_parentObtainPermanentIDsForObjects:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)_parentProcessSaveRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;

// NSManagedObjectContext (_PhotosOrderKeyUpdateSupport)

- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3;
- (id)_orderKeysForRelationshipWithName__:(id)arg1 onObjectWithID:(id)arg2;
- (BOOL)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 onObjectWithID:(id)arg3 error:(id*)arg4;

@end
