/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface CNUIDeleteCommandHelper : NSObject {
    CNContactStore * _contactStore;
    NSObject<OS_os_log> * _log_t;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readwrite, retain) NSObject<OS_os_log> *log_t;

+ (id)deleteCommandsForContacts:(id)arg1 contactStore:(id)arg2;

- (void).cxx_destruct;
- (id)contactStore;
- (id)containerIdentifiersForContacts:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (id)log_t;
- (void)setLog_t:(id)arg1;

@end
