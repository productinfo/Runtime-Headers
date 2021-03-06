/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNSuggestedSaveRequest : CNSaveRequest {
    NSMutableSet * _mutableConfirmedSuggestions;
    NSMutableSet * _mutableRejectedSuggestions;
}

@property (atomic, readonly, copy) NSSet *confirmedSuggestions;
@property (nonatomic, readwrite, retain) NSMutableSet *mutableConfirmedSuggestions;
@property (nonatomic, readwrite, retain) NSMutableSet *mutableRejectedSuggestions;
@property (atomic, readonly, copy) NSSet *rejectedSuggestions;

- (void).cxx_destruct;
- (void)confirmSuggestion:(id)arg1;
- (id)confirmedSuggestions;
- (id)mutableConfirmedSuggestions;
- (id)mutableRejectedSuggestions;
- (void)rejectSuggestion:(id)arg1;
- (id)rejectedSuggestions;
- (void)setMutableConfirmedSuggestions:(id)arg1;
- (void)setMutableRejectedSuggestions:(id)arg1;
- (id)storeIdentifier;

@end
