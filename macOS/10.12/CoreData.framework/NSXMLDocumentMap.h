/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSXMLDocumentMap : NSPersistentStoreMap {
    NSMutableDictionary * _byEntityName;
    NSXMLDocument * _document;
    NSXMLElement * _oidnode;
    NSMutableDictionary * _theMap;
}

+ (void)_updateDocument:(id)arg1 withMetadata:(id)arg2;

- (id)_createDocument;
- (void)_deleteNode:(id)arg1 byEntityName:(id)arg2;
- (void)_insertNode:(id)arg1 byEntityName:(id)arg2;
- (BOOL)_isDocumentXMLStore:(id)arg1;
- (void)_processDBInfoNode:(id)arg1;
- (void)_processDocument;
- (void)_processInstanceNode:(id)arg1;
- (void)_processMetadataNode:(id)arg1;
- (id)_theDictionary;
- (void)_updateDocumentMetadata;
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;
- (BOOL)containsObjectWithID:(id)arg1;
- (void)createAttributeChildOnNode:(id)arg1 forAttribute:(id)arg2 type:(id)arg3 andValue:(id)arg4;
- (id)createRelationshipChildOnNode:(id)arg1 forRelationshipDescription:(id)arg2;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)document;
- (id)getIDRefStringForValue:(id)arg1 ofRelationship:(id)arg2 stringKeys:(id)arg3 objectIDMapping:(id)arg4 objectForError:(id)arg5;
- (id)getXMLAttributeValueFromObject:(id)arg1 forAttribute:(id)arg2;
- (id)handleFetchRequest:(id)arg1;
- (id)initWithDocument:(id)arg1 forStore:(id)arg2;
- (unsigned long long)nextPK64;
- (id)nodeFromManagedObject:(id)arg1 objectIDMap:(id)arg2;
- (void)prepareForSave;
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;
- (id)retainedXmlInfoForRelationship:(id)arg1;
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;
- (void)updateXMLNode:(id)arg1 fromObject:(id)arg2 objectIDMapping:(id)arg3;
- (id)xmlInfoForAttribute:(id)arg1;

@end
