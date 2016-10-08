/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSManagedObject : NSObject <NSFetchRequestResult> {
    id  _cd_entity;
    unsigned long long  _cd_extraFlags;
    unsigned long long  _cd_lockingInfo;
    NSManagedObjectContext * _cd_managedObjectContext;
    NSManagedObjectID * _cd_objectID;
    id  _cd_observationInfo;
    id  _cd_queueReference;
    id  _cd_rawData;
    int  _cd_rc;
    id * _cd_snapshots;
    unsigned long long  _cd_stateFlags;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic, readonly) BOOL deleted;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) NSEntityDescription *entity;
@property (getter=isFault, nonatomic, readonly) BOOL fault;
@property (nonatomic, readonly) unsigned long long faultingState;
@property (nonatomic, readonly) BOOL hasChanges;
@property (nonatomic, readonly) BOOL hasPersistentChangedValues;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isInserted, nonatomic, readonly) BOOL inserted;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (atomic, readonly) Class superclass;
@property (getter=isUpdated, nonatomic, readonly) BOOL updated;

+ (id)_PFPlaceHolderSingleton_core;
+ (char *)_transientPropertiesChangesMask__;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)allocWithZone_10_4:(struct _NSZone { }*)arg1;
+ (id)alloc_10_4;
+ (BOOL)contextShouldIgnoreUnmodeledPropertyChanges;
+ (id)entity;
+ (id)fetchRequest;
+ (void)initialize;

- (int)_batch_release__;
- (id)_descriptionValues;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
- (id)changedValues;
- (id)changedValuesForCurrentEvent;
- (id)committedValuesForKeys:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)didAccessValueForKey:(id)arg1;
- (void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;
- (void)didSave;
- (void)didTurnIntoFault;
- (id)entity;
- (unsigned long long)faultingState;
- (BOOL)hasChanges;
- (BOOL)hasFaultForRelationshipNamed:(id)arg1;
- (BOOL)hasPersistentChangedValues;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (BOOL)isDeleted;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFault;
- (BOOL)isInserted;
- (BOOL)isUpdated;
- (id)managedObjectContext;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)mutableOrderedSetValueForKey:(id)arg1;
- (id)mutableSetValueForKey:(id)arg1;
- (id)objectID;
- (id)objectIDsForRelationshipNamed:(id)arg1;
- (void*)observationInfo;
- (void)prepareForDeletion;
- (id)primitiveValueForKey:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setNilValueForKey:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (BOOL)validateForDelete:(id*)arg1;
- (BOOL)validateForInsert:(id*)arg1;
- (BOOL)validateForUpdate:(id*)arg1;
- (BOOL)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)willAccessValueForKey:(id)arg1;
- (void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;
- (void)willSave;
- (void)willTurnIntoFault;

// NSManagedObject (_NSCoreDataDeprecated)

- (BOOL)isRelationshipForKeyFault:(id)arg1;

// NSManagedObject (_NSCoreDataSPI)

- (void)didFireFault;
- (void)didRefresh:(BOOL)arg1;
- (void)willFireFault;
- (void)willRefresh:(BOOL)arg1;

// NSManagedObject (_NSInternalMethods)

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)_allProperties__;
- (id)_calculateDiffsBetweenOrderedSet:(id)arg1 andOrderedSet:(id)arg2;
- (void)_chainNewError:(id)arg1 toOriginalErrorDoublePointer:(id*)arg2;
- (id)_changedTransientProperties__;
- (id)_changedValuesForCurrentEvent;
- (void)_clearAllChanges__;
- (void)_clearPendingChanges__;
- (void)_clearRawPropertiesWithHint:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_clearUnprocessedChanges__;
- (void)_commitPhotoshoperyForRelationshipAtIndex:(unsigned long long)arg1 newValue:(id)arg2;
- (void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4;
- (void)_excludeObject:(id)arg1 fromPropertyWithKey:(id)arg2 andIndex:(unsigned long long)arg3;
- (id)_faultHandler__;
- (id)_generateErrorDetailForKey:(id)arg1 withValue:(id)arg2;
- (id)_generateErrorWithCode:(int)arg1 andMessage:(id)arg2 forKey:(id)arg3 andValue:(id)arg4 additionalDetail:(id)arg5;
- (id)_genericMutableOrderedSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3;
- (id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3;
- (void)_genericUpdateFromSnapshot:(id)arg1;
- (BOOL)_hasAnyObservers__;
- (BOOL)_hasPendingChanges;
- (BOOL)_hasRetainedStoreResources__;
- (BOOL)_hasUnprocessedChanges__;
- (id)_implicitObservationInfo;
- (void)_includeObject:(id)arg1 intoPropertyWithKey:(id)arg2 andIndex:(unsigned long long)arg3;
- (id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4;
- (BOOL)_isKindOfEntity:(id)arg1;
- (BOOL)_isPendingDeletion__;
- (BOOL)_isPendingInsertion__;
- (BOOL)_isPendingUpdate__;
- (BOOL)_isSuppressingChangeNotifications__;
- (BOOL)_isSuppressingKVO__;
- (BOOL)_isUnprocessedDeletion__;
- (BOOL)_isUnprocessedInsertion__;
- (BOOL)_isUnprocessedUpdate__;
- (BOOL)_isValidRelationshipDestination__;
- (id)_lastSnapshot__;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 forChange:(unsigned long long)arg3 onSet:(id)arg4;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 oldDestination:(id)arg3 newDestination:(id)arg4;
- (id)_newAllPropertiesWithRelationshipFaultsIntact__;
- (id)_newChangedValuesForRefresh__;
- (id)_newCommittedSnapshotValues;
- (id)_newNestedSaveChangedValuesForParent:(id)arg1;
- (id)_newPersistentPropertiesForConflictRecordFaultsIntact__;
- (id)_newPersistentPropertiesWithRelationshipFaultsIntact__;
- (id)_newPropertiesForRetainedTypes:(unsigned int*)arg1 andCopiedTypes:(unsigned int*)arg2 preserveFaults:(BOOL)arg3;
- (id)_newSetFromSet:(id)arg1 byApplyingDiffs:(id)arg2;
- (id)_newSnapshotForUndo__;
- (void)_nilOutReservedCurrentEventSnapshot__;
- (id)_originalSnapshot__;
- (id)_persistentProperties__;
- (void)_prepropagateDeleteForMerge;
- (void)_propagateDelete;
- (void)_propagateDelete:(unsigned int)arg1;
- (id)_referenceQueue__;
- (id)_reservedCurrentEventSnapshot;
- (void)_setHasRetainedStoreResources__:(BOOL)arg1;
- (void)_setLastSnapshot__:(id)arg1;
- (void)_setObjectID__:(id)arg1;
- (void)_setOriginalSnapshot__:(id)arg1;
- (void)_setPendingDeletion__:(BOOL)arg1;
- (void)_setPendingInsertion__:(BOOL)arg1;
- (void)_setPendingUpdate__:(BOOL)arg1;
- (void)_setSuppressingChangeNotifications__:(BOOL)arg1;
- (void)_setSuppressingKVO__:(BOOL)arg1;
- (void)_setUnprocessedDeletion__:(BOOL)arg1;
- (void)_setUnprocessedInsertion__:(BOOL)arg1;
- (void)_setUnprocessedUpdate__:(BOOL)arg1;
- (void)_setVersionReference__:(unsigned int)arg1;
- (unsigned int)_stateFlags;
- (id)_substituteEntityAndProperty:(id)arg1 inString:(id)arg2;
- (id)_transientProperties__;
- (void)_updateFromRefreshSnapshot:(id)arg1 includingTransients:(BOOL)arg2;
- (void)_updateFromSnapshot:(id)arg1;
- (void)_updateFromUndoSnapshot:(id)arg1;
- (void)_updateToManyRelationship:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4;
- (BOOL)_validateForSave:(id*)arg1;
- (BOOL)_validatePropertiesWithError:(id*)arg1;
- (BOOL)_validateValue:(id*)arg1 forProperty:(id)arg2 andKey:(id)arg3 withIndex:(unsigned long long)arg4 error:(id*)arg5;
- (unsigned int)_versionReference__;
- (void)diffOrderedSets:(id)arg1 :(id)arg2 :(id*)arg3 :(id*)arg4 :(id*)arg5 :(id*)arg6 :(id*)arg7;
- (BOOL)wasForgotten;

// NSManagedObject (_PFDynamicAccessorsAndPropertySupport)

+ (struct { int x1; void *x2; id x3; unsigned char x4; unsigned long long x5; void *x6; id x7; struct _moFactoryClassFlags { unsigned int x_8_1_1 : 1; unsigned int x_8_1_2 : 1; unsigned int x_8_1_3 : 1; unsigned int x_8_1_4 : 1; unsigned int x_8_1_5 : 1; unsigned int x_8_1_6 : 1; unsigned int x_8_1_7 : 26; } x8; }*)_PFMOClassFactoryData;
+ (id)_PFPlaceHolderSingleton;
+ (void)_entityDeallocated;
+ (BOOL)_hasOverriddenAwake;
+ (void)_initializeAccessorStubs;
+ (void)_initializePrimitiveAccessorStubs;
+ (BOOL)_isGeneratedClass;
+ (BOOL)_isGeneratedClass_1;
+ (void)_release_1;
+ (id)_retain_1;
+ (BOOL)_useFastValidationMethod;
+ (unsigned int)allocBatch:(id*)arg1 withEntity:(id)arg2 count:(unsigned int)arg3;
+ (id)allocWithEntity:(id)arg1;
+ (id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(unsigned int)arg3;
+ (Class)classForEntity:(id)arg1;
+ (id)entityName;
+ (void)release;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)retain;

- (BOOL)_defaultValidation:(id*)arg1 error:(id*)arg2;
- (id)_genericValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3;
- (void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long long)arg3 flags:(long long)arg4;
- (BOOL)implementsSelector:(SEL)arg1;
- (int (*)methodForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

// NSManagedObject (_PhotosOrderKeyUpdateSupport)

- (id)_orderKeysForRelationshipWithName__:(id)arg1;
- (BOOL)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 error:(id*)arg3;

@end
