/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSArrayDiff : NSObject {
    NSIndexSet * _insertedObjectIndexes;
    NSSet * _movedObjectIndexes;
    NSIndexSet * _removedObjectIndexes;
}

@property (getter=isEmpty, atomic, readonly) BOOL empty;
@property (atomic, readonly, copy) NSIndexSet *insertedObjectIndexes;
@property (atomic, readonly, copy) NSSet *movedObjectIndexes;
@property (atomic, readonly, copy) NSIndexSet *removedObjectIndexes;

- (void)dealloc;
- (id)description;
- (id)initWithPreviousObjects:(id)arg1 currentObjects:(id)arg2;
- (id)insertedObjectIndexes;
- (BOOL)isEmpty;
- (id)movedObjectIndexes;
- (id)removedObjectIndexes;

@end