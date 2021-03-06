/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface CalStoreRemoteManagedCalendar : CalStoreRemoteManagedNode {
    CalStoreRemoteManagedGroup * _group;
    BOOL  _isEventContainer;
    BOOL  _isTaskContainer;
    BOOL  _shouldShowInPrimaryAccounts;
}

@property (nonatomic, readwrite, retain) CalStoreRemoteManagedGroup *group;
@property (nonatomic, readwrite) BOOL isEventContainer;
@property (nonatomic, readwrite) BOOL isTaskContainer;
@property (nonatomic, readwrite) BOOL shouldShowInPrimaryAccounts;

+ (id)fetchObjectsWithPredicate:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (BOOL)hasCapability:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEventContainer;
- (BOOL)isLocal;
- (BOOL)isTaskContainer;
- (BOOL)removeWithError:(id*)arg1;
- (id)saveWithError:(id*)arg1;
- (void)setGroup:(id)arg1;
- (void)setIsEventContainer:(BOOL)arg1;
- (void)setIsTaskContainer:(BOOL)arg1;
- (void)setShouldShowInPrimaryAccounts:(BOOL)arg1;
- (BOOL)shouldShowInPrimaryAccounts;

@end
