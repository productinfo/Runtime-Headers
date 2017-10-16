/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABTargetedAccountComponentValidationHelper : NSObject <ABAccountComponentValidationHelper> {
    ABAccountComponents * _components;
    NSDictionary * _config;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountName;
- (id)className;
- (id)initWithAccountComponents:(id)arg1;
- (BOOL)isAccountComponentsValid;
- (void)loadConfig;

@end