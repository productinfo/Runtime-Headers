/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
 */

@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreProtocol>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)sharedClientSideListener;

- (void)accountCredentialsDidChangeForAccountWithIdentifier:(id)arg1;

@end