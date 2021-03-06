/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface CAIdentityName : NSObject {
    NSString * _caAdminCAEmailAddress;
    BOOL  _caDidWarnAboutSelfSignedCert;
    NSString * _caIdentityName;
    int  _caLetUserOverrideDefaults;
    int  _caMakeCAConfigFileTheDefaultCA;
    int  _caSelfSignedChosen;
    int  _certType;
}

- (id)_CAAdminEmailAddress;
- (int)_certType;
- (BOOL)_didWarnAboutSelfSignedCert;
- (id)_identityName;
- (BOOL)_isCATypeSelfSignedRoot;
- (BOOL)_isCertTypeCodeSigning;
- (BOOL)_isCertTypeSMIME;
- (BOOL)_isCertTypeSSLServer;
- (BOOL)_isCertTypeVPNClient;
- (BOOL)_isCertTypeVPNServer;
- (int)_letUserOverrideDefaults;
- (int)_makeDefaultCA;
- (void)_setCAAdminEmailAddress:(id)arg1;
- (void)_setCAType:(int)arg1;
- (void)_setCertType:(int)arg1;
- (void)_setDidWarnAboutSelfSignedCert:(BOOL)arg1;
- (void)_setIdentityName:(id)arg1;
- (void)_setLetOverrideDefaults:(int)arg1;
- (void)_setToDefaults;
- (void)dealloc;

@end
