/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCGSTransaction : NSObject {
    const void * _disableUpdatesToken;
    NSMutableDictionary * _objects;
    NSPointerArray * _postCommitActions;
    NSPointerArray * _preCommitActions;
}

+ (id)currentTransaction;
+ (void)initialize;
+ (BOOL)isActive;
+ (void)setSynchronous:(BOOL)arg1;

- (void)addActionWithOrder:(long long)arg1 usingBlock:(id)arg2;
- (void)addPostCommitAction:(id)arg1;
- (void)dealloc;
- (void)disableUpdates;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)synchronize;

@end
