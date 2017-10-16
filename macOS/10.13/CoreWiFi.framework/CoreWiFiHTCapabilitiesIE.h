/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
 */

@interface CoreWiFiHTCapabilitiesIE : CoreWiFiIE {
    unsigned long long  aselCapability;
    unsigned long long  capabilities;
    BOOL  definedTxMCSSet;
    BOOL  differentTxRxMCSSet;
    BOOL  dynamicSMPowerSaveMode;
    unsigned long long  extendedCapabilities;
    BOOL  fortyMHzIntolerant;
    long long  highestSupportedRxDataRate;
    long long  maxSupportedTxSpatialStreams;
    long long  maximumAMSDULength;
    NSMutableArray * mcsRates;
    long long  numSupportedRxSTBC;
    unsigned long long  paramsAMPDU;
    BOOL  staticSMPowerSaveMode;
    NSData * supportedMCSSet;
    BOOL  supports20MHzShortGI;
    BOOL  supports40MHzOperation;
    BOOL  supports40MHzShortGI;
    BOOL  supportsDSSSCCK40MHz;
    BOOL  supportsGreenfield;
    BOOL  supportsHTDelayedBlockAck;
    BOOL  supportsLDPCCoding;
    BOOL  supportsLSIGTXOPProtectionSupport;
    BOOL  supportsTxSTBC;
    BOOL  supportsUnequalTxModulation;
    unsigned long long  transmitBeamformingCapabilities;
}

@property (nonatomic, readonly) unsigned long long aselCapability;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly) BOOL dynamicSMPowerSaveMode;
@property (nonatomic, readonly) unsigned long long extendedCapabilities;
@property (nonatomic, readonly) BOOL fortyMHzIntolerant;
@property (nonatomic, readonly) long long maximumAMSDULength;
@property (nonatomic, readonly, retain) NSMutableArray *mcsRates;
@property (nonatomic, readonly) long long numSupportedRxSTBC;
@property (nonatomic, readonly) unsigned long long paramsAMPDU;
@property (nonatomic, readonly) BOOL staticSMPowerSaveMode;
@property (nonatomic, readonly, retain) NSData *supportedMCSSet;
@property (nonatomic, readonly) BOOL supports20MHzShortGI;
@property (nonatomic, readonly) BOOL supports40MHzOperation;
@property (nonatomic, readonly) BOOL supports40MHzShortGI;
@property (nonatomic, readonly) BOOL supportsDSSSCCK40MHz;
@property (nonatomic, readonly) BOOL supportsGreenfield;
@property (nonatomic, readonly) BOOL supportsHTDelayedBlockAck;
@property (nonatomic, readonly) BOOL supportsLDPCCoding;
@property (nonatomic, readonly) BOOL supportsLSIGTXOPProtectionSupport;
@property (nonatomic, readonly) BOOL supportsTxSTBC;
@property (nonatomic, readonly) unsigned long long transmitBeamformingCapabilities;

- (unsigned long long)aselCapability;
- (unsigned long long)capabilities;
- (void)dealloc;
- (id)description;
- (BOOL)dynamicSMPowerSaveMode;
- (unsigned long long)extendedCapabilities;
- (BOOL)fortyMHzIntolerant;
- (id)init;
- (id)initWithIE:(id)arg1;
- (long long)maximumAMSDULength;
- (id)mcsRates;
- (long long)numSupportedRxSTBC;
- (unsigned long long)paramsAMPDU;
- (void)parseCapabilities;
- (BOOL)parseIE:(id*)arg1;
- (void)parseSupportedMCSSet;
- (BOOL)staticSMPowerSaveMode;
- (id)supportedMCSSet;
- (BOOL)supports20MHzShortGI;
- (BOOL)supports40MHzOperation;
- (BOOL)supports40MHzShortGI;
- (BOOL)supportsDSSSCCK40MHz;
- (BOOL)supportsGreenfield;
- (BOOL)supportsHTDelayedBlockAck;
- (BOOL)supportsLDPCCoding;
- (BOOL)supportsLSIGTXOPProtectionSupport;
- (BOOL)supportsTxSTBC;
- (unsigned long long)transmitBeamformingCapabilities;

@end