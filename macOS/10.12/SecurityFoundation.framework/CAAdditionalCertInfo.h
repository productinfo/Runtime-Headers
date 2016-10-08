/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface CAAdditionalCertInfo : NSObject {
    NSString * _alternateLocationForCAWebSite;
    struct OpaqueSecIdentityRef { } * _caChosenIdentityToSignInvitation;
    int  _caCreateCAWebSite;
    NSNumber * _caSerialNumber;
    NSNumber * _caValidityPeriod;
    int  _signInvite;
}

- (id)_alternateLocationForCAWebSite;
- (struct OpaqueSecIdentityRef { }*)_chosenIdentityToSignInvitation;
- (int)_createCAWebSite;
- (id)_serialNumber;
- (void)_setAlternateLocationForCAWebSite:(id)arg1;
- (void)_setCreateCAWebSite:(int)arg1;
- (void)_setSerialNumber:(id)arg1;
- (void)_setToDefaults;
- (void)_setValidityPeriod:(id)arg1;
- (int)_signInvitation;
- (id)_validityPeriod;
- (void)dealloc;
- (void)setChosenIdentityToSignInvitation:(struct OpaqueSecIdentityRef { }*)arg1;

@end
