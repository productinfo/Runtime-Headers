/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
 */

@interface CoreWiFiDWDSIE : CoreWiFiIE {
    BOOL  isAMPDUFullSupportOverDWDS;
    BOOL  isAMPDUNotSupportedOverDWDS;
    BOOL  isAMPDUWorkaroundOverDWDS;
    BOOL  isClosedNetworkOverDWDS;
    BOOL  isDwdsMaster;
    BOOL  isDwdsRelay;
    BOOL  isDwdsRemote;
}

@property (nonatomic, readwrite) BOOL isAMPDUFullSupportOverDWDS;
@property (nonatomic, readwrite) BOOL isAMPDUNotSupportedOverDWDS;
@property (nonatomic, readwrite) BOOL isAMPDUWorkaroundOverDWDS;
@property (nonatomic, readwrite) BOOL isClosedNetworkOverDWDS;
@property (nonatomic, readwrite) BOOL isDwdsMaster;
@property (nonatomic, readwrite) BOOL isDwdsRelay;
@property (nonatomic, readwrite) BOOL isDwdsRemote;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithIE:(id)arg1;
- (BOOL)isAMPDUFullSupportOverDWDS;
- (BOOL)isAMPDUNotSupportedOverDWDS;
- (BOOL)isAMPDUWorkaroundOverDWDS;
- (BOOL)isClosedNetworkOverDWDS;
- (BOOL)isDwdsMaster;
- (BOOL)isDwdsRelay;
- (BOOL)isDwdsRemote;
- (BOOL)parseIE:(id*)arg1;
- (void)setIsAMPDUFullSupportOverDWDS:(BOOL)arg1;
- (void)setIsAMPDUNotSupportedOverDWDS:(BOOL)arg1;
- (void)setIsAMPDUWorkaroundOverDWDS:(BOOL)arg1;
- (void)setIsClosedNetworkOverDWDS:(BOOL)arg1;
- (void)setIsDwdsMaster:(BOOL)arg1;
- (void)setIsDwdsRelay:(BOOL)arg1;
- (void)setIsDwdsRemote:(BOOL)arg1;

@end
