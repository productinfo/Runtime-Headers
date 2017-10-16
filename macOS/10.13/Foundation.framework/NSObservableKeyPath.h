/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSObservableKeyPath : NSBoundKeyPath <NSObservable>

@property (atomic, readonly) <NSObservable> *changes;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (BOOL)_wantsChanges;
- (id)addObserver:(id)arg1;
- (id)changes;
- (id)description;
- (void)removeObservation:(id)arg1;

@end