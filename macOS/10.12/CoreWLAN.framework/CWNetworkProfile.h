/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
 */

@interface CWNetworkProfile : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    BOOL  _autoLogin;
    NSArray * _bssidList;
    BOOL  _captiveNetwork;
    NSSet * _channelHistory;
    NSSet * _collocatedGroup;
    BOOL  _disabled;
    NSString * _displayName;
    NSString * _domainName;
    BOOL  _hiddenNetwork;
    BOOL  _isPasspoint;
    BOOL  _isPersonalHotspot;
    BOOL  _isServiceProviderRoamingEnabled;
    NSDate * _lastConnected;
    NSArray * _naiRealmList;
    BOOL  _possiblyHiddenNetwork;
    NSArray * _roamingConsortiumList;
    long long  _roamingProfileType;
    unsigned long long  _securityType;
    NSString * _ssid;
    NSData * _ssidData;
    BOOL  _systemMode;
    BOOL  _temporarilyDisabled;
}

@property (atomic, readwrite) BOOL autoLogin;
@property (atomic, readwrite, copy) NSArray *bssidList;
@property (atomic, readwrite) BOOL captiveNetwork;
@property (atomic, readwrite, copy) NSSet *channelHistory;
@property (atomic, readwrite, copy) NSSet *collocatedGroup;
@property (atomic, readwrite) BOOL disabled;
@property (atomic, readwrite, copy) NSString *displayName;
@property (atomic, readwrite, copy) NSString *domainName;
@property (atomic, readwrite) BOOL hiddenNetwork;
@property (atomic, readwrite) BOOL isPasspoint;
@property (atomic, readwrite) BOOL isPersonalHotspot;
@property (atomic, readwrite) BOOL isServiceProviderRoamingEnabled;
@property (atomic, readwrite, copy) NSDate *lastConnected;
@property (atomic, readwrite, copy) NSArray *naiRealmList;
@property (atomic, readwrite) BOOL possiblyHiddenNetwork;
@property (atomic, readwrite, copy) NSArray *roamingConsortiumList;
@property (atomic, readwrite) long long roamingProfileType;
@property (atomic, readwrite) long long security;
@property (atomic, readwrite) unsigned long long securityType;
@property (atomic, readonly, copy) NSString *ssid;
@property (atomic, readwrite, copy) NSData *ssidData;
@property (atomic, readwrite) BOOL systemMode;
@property (atomic, readwrite) BOOL temporarilyDisabled;

+ (id)allNetworkProfiles;
+ (id)networkProfile;
+ (id)networkProfileWithNetworkProfile:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (BOOL)autoLogin;
- (id)bssidList;
- (BOOL)captiveNetwork;
- (id)channelHistory;
- (id)collocatedGroup;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)disabled;
- (id)displayName;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (id)externalForm;
- (unsigned long long)hash;
- (BOOL)hiddenNetwork;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalForm:(id)arg1;
- (id)initWithNetworkProfile:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNetworkProfile:(id)arg1;
- (BOOL)isPasspoint;
- (BOOL)isPersonalHotspot;
- (BOOL)isServiceProviderRoamingEnabled;
- (id)lastConnected;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)naiRealmList;
- (BOOL)possiblyHiddenNetwork;
- (id)roamingConsortiumList;
- (long long)roamingProfileType;
- (long long)security;
- (unsigned long long)securityType;
- (void)setAutoLogin:(BOOL)arg1;
- (void)setBssidList:(id)arg1;
- (void)setCaptiveNetwork:(BOOL)arg1;
- (void)setChannelHistory:(id)arg1;
- (void)setCollocatedGroup:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDomainName:(id)arg1;
- (void)setHiddenNetwork:(BOOL)arg1;
- (void)setIsPasspoint:(BOOL)arg1;
- (void)setIsPersonalHotspot:(BOOL)arg1;
- (void)setIsServiceProviderRoamingEnabled:(BOOL)arg1;
- (void)setLastConnected:(id)arg1;
- (void)setNaiRealmList:(id)arg1;
- (void)setPossiblyHiddenNetwork:(BOOL)arg1;
- (void)setRoamingConsortiumList:(id)arg1;
- (void)setRoamingProfileType:(long long)arg1;
- (void)setSecurity:(long long)arg1;
- (void)setSecurityType:(unsigned long long)arg1;
- (void)setSsidData:(id)arg1;
- (void)setSystemMode:(BOOL)arg1;
- (void)setTemporarilyDisabled:(BOOL)arg1;
- (id)ssid;
- (id)ssidData;
- (BOOL)systemMode;
- (BOOL)temporarilyDisabled;

@end
