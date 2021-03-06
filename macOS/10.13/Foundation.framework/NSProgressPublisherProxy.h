/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSProgressPublisherProxy : NSObject <NSProgressPublisher> {
    NSXPCConnection * _connection;
    <NSProgressPublisher> * _forwarder;
    NSFileAccessNode * _itemLocation;
    NSString * _lowerCaseCategoryName;
    id  _publisherID;
    NSProgressValues * _values;
}

@property (atomic, readwrite, copy) NSString *category;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) NSFileAccessNode *itemLocation;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly, copy) NSProgressValues *values;

- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
- (oneway void)cancel;
- (id)category;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (id)initWithForwarder:(id)arg1 onConnection:(id)arg2 publisherID:(id)arg3 values:(id)arg4;
- (BOOL)isFromConnection:(id)arg1;
- (id)itemLocation;
- (void)observeValue:(id)arg1 forKey:(id)arg2 inUserInfo:(BOOL)arg3;
- (oneway void)pause;
- (oneway void)prioritize;
- (id)publisherID;
- (oneway void)resume;
- (void)setCategory:(id)arg1;
- (void)setItemLocation:(id)arg1;
- (id)values;

@end
