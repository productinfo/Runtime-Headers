/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface _PFSpotlightFileWriter : NSObject {
    NSMutableDictionary * changedObjectsContent;
    unsigned long long  externalRecordsFileFormat;
    NSString * externalRecordsPath;
    NSString * fileExtension;
    NSManagedObjectContext * moc;
    NSManagedObjectModel * model;
    NSPersistentStoreCoordinator * psc;
    NSString * storeUUID;
    BOOL  useUbiquityExternalRecordsLayout;
}

+ (id)directoryPathForPrimaryKey:(id)arg1;

- (void)dealloc;
- (id)fetchDestinationsForRelationship:(id)arg1 onSource:(id)arg2;
- (id)truthContentForInstanceWithData:(id)arg1 entityHasTransformables:(BOOL)arg2;
- (void)writeFilesForEntities:(id)arg1 forOperation:(int)arg2;
- (void)writeSupportFilesWithDict:(id)arg1 managedObjectContext:(id)arg2;

@end
