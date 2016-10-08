/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSSQLForeignEntityKey : NSSQLColumn {
    NSSQLForeignKey * _foreignKey;
}

- (void)dealloc;
- (id)foreignKey;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)setFKForReadOnlyFetch:(id)arg1;
- (id)toOneRelationship;

@end
