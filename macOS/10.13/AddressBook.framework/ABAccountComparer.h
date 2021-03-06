/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABAccountComparer : NSObject {
    NSDictionary * _accountConfigurationsByIdentifier;
}

@property (atomic, readwrite, retain) NSDictionary *accountConfigurationsByIdentifier;

+ (id)comparisonKeys;
+ (id)iCloudDomains;

- (id)accountConfigurationsByIdentifier;
- (void)dealloc;
- (unsigned long long)effectiveServerPortForConfiguration:(id)arg1;
- (id)existingAccountIdentifierForConfiguration:(id)arg1;
- (id)initWithAccountConfigurationsByIdentifier:(id)arg1;
- (BOOL)isExistingConfiguration:(id)arg1 equivalentToProposedConfig:(id)arg2;
- (BOOL)isExistingValue:(id)arg1 equivalentToProposedValue:(id)arg2 forConfigKey:(id)arg3;
- (BOOL)isHost:(id)arg1 equivalentToHost:(id)arg2;
- (BOOL)isServerPortConfiguration:(id)arg1 equivalentToProposedConfig:(id)arg2;
- (BOOL)isUseSSLConfiguration:(id)arg1 equivalentToProposedConfig:(id)arg2;
- (BOOL)isUsername:(id)arg1 equivalentToUsername:(id)arg2;
- (BOOL)isiCloudUsername:(id)arg1 equivalentToUserName:(id)arg2;
- (void)setAccountConfigurationsByIdentifier:(id)arg1;
- (void)setConfiguration:(id)arg1 forIdentifier:(id)arg2;
- (id)usernameByStrippingDomain:(id)arg1;

@end
