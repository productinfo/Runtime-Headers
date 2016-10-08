/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothDeviceExpansion : NSObject {
    unsigned char  addressType;
    BOOL  authenticationRequired;
    BOOL  authenticationRetried;
    unsigned char  batteryPercentCase;
    unsigned char  batteryPercentCombined;
    unsigned char  batteryPercentLeft;
    unsigned char  batteryPercentRight;
    unsigned char  batteryPercentSingle;
    unsigned char  buttonMode;
    unsigned char  capabilityMask;
    IOBluetoothL2CAPChannel * channelBeingOpened;
    BOOL  connecting;
    BOOL  connectionRetried;
    BOOL  findExisting;
    long long  headsetBatteryPercent;
    BOOL  inEar;
    BOOL  inEarDetect;
    BOOL  inquiryRSSI;
    unsigned short  lmpSubversion;
    unsigned char  lmpVersion;
    BOOL  lowEnergyDevice;
    BOOL  lowEnergyDeviceHID2;
    unsigned short  manufacturerName;
    unsigned char  micMode;
    BOOL  nameComplete;
    id  openConnectionTarget;
    unsigned char  primaryBud;
    unsigned char  primaryInEar;
    unsigned short  psm;
    id  remoteNameRequestTarget;
    unsigned char  secondaryInEar;
    unsigned int  serviceMask;
    BOOL  traceLoggingEnabled;
}

@property (atomic, readwrite) unsigned char addressType;
@property (atomic, readwrite) BOOL authenticationRequired;
@property (atomic, readwrite) BOOL authenticationRetried;
@property (atomic, readwrite) unsigned char batteryPercentCase;
@property (atomic, readwrite) unsigned char batteryPercentCombined;
@property (atomic, readwrite) unsigned char batteryPercentLeft;
@property (atomic, readwrite) unsigned char batteryPercentRight;
@property (atomic, readwrite) unsigned char batteryPercentSingle;
@property (atomic, readwrite) unsigned char buttonMode;
@property (atomic, readwrite) unsigned char capabilityMask;
@property (atomic, readwrite, retain) IOBluetoothL2CAPChannel *channelBeingOpened;
@property (atomic, readwrite) BOOL connecting;
@property (atomic, readwrite) BOOL connectionRetried;
@property (atomic, readwrite) BOOL findExisting;
@property (atomic, readwrite) long long headsetBatteryPercent;
@property (atomic, readwrite) BOOL inEar;
@property (atomic, readwrite) BOOL inEarDetect;
@property (atomic, readwrite) BOOL inquiryRSSI;
@property (atomic, readwrite) unsigned short lmpSubversion;
@property (atomic, readwrite) unsigned char lmpVersion;
@property (atomic, readwrite) BOOL lowEnergyDevice;
@property (atomic, readwrite) BOOL lowEnergyDeviceHID2;
@property (atomic, readwrite) unsigned short manufacturerName;
@property (atomic, readwrite) unsigned char micMode;
@property (atomic, readwrite) BOOL nameComplete;
@property (atomic, readwrite, retain) id openConnectionTarget;
@property (atomic, readwrite) unsigned char primaryBud;
@property (atomic, readwrite) unsigned char primaryInEar;
@property (atomic, readwrite) unsigned short psm;
@property (atomic, readwrite, retain) id remoteNameRequestTarget;
@property (atomic, readwrite) unsigned char secondaryInEar;
@property (atomic, readwrite) unsigned int serviceMask;
@property (atomic, readwrite) BOOL traceLoggingEnabled;

- (unsigned char)addressType;
- (BOOL)authenticationRequired;
- (BOOL)authenticationRetried;
- (unsigned char)batteryPercentCase;
- (unsigned char)batteryPercentCombined;
- (unsigned char)batteryPercentLeft;
- (unsigned char)batteryPercentRight;
- (unsigned char)batteryPercentSingle;
- (unsigned char)buttonMode;
- (unsigned char)capabilityMask;
- (id)channelBeingOpened;
- (BOOL)connecting;
- (BOOL)connectionRetried;
- (BOOL)findExisting;
- (long long)headsetBatteryPercent;
- (BOOL)inEar;
- (BOOL)inEarDetect;
- (BOOL)inquiryRSSI;
- (unsigned short)lmpSubversion;
- (unsigned char)lmpVersion;
- (BOOL)lowEnergyDevice;
- (BOOL)lowEnergyDeviceHID2;
- (unsigned short)manufacturerName;
- (unsigned char)micMode;
- (BOOL)nameComplete;
- (id)openConnectionTarget;
- (unsigned char)primaryBud;
- (unsigned char)primaryInEar;
- (unsigned short)psm;
- (id)remoteNameRequestTarget;
- (unsigned char)secondaryInEar;
- (unsigned int)serviceMask;
- (void)setAddressType:(unsigned char)arg1;
- (void)setAuthenticationRequired:(BOOL)arg1;
- (void)setAuthenticationRetried:(BOOL)arg1;
- (void)setBatteryPercentCase:(unsigned char)arg1;
- (void)setBatteryPercentCombined:(unsigned char)arg1;
- (void)setBatteryPercentLeft:(unsigned char)arg1;
- (void)setBatteryPercentRight:(unsigned char)arg1;
- (void)setBatteryPercentSingle:(unsigned char)arg1;
- (void)setButtonMode:(unsigned char)arg1;
- (void)setCapabilityMask:(unsigned char)arg1;
- (void)setChannelBeingOpened:(id)arg1;
- (void)setConnecting:(BOOL)arg1;
- (void)setConnectionRetried:(BOOL)arg1;
- (void)setFindExisting:(BOOL)arg1;
- (void)setHeadsetBatteryPercent:(long long)arg1;
- (void)setInEar:(BOOL)arg1;
- (void)setInEarDetect:(BOOL)arg1;
- (void)setInquiryRSSI:(BOOL)arg1;
- (void)setLmpSubversion:(unsigned short)arg1;
- (void)setLmpVersion:(unsigned char)arg1;
- (void)setLowEnergyDevice:(BOOL)arg1;
- (void)setLowEnergyDeviceHID2:(BOOL)arg1;
- (void)setManufacturerName:(unsigned short)arg1;
- (void)setMicMode:(unsigned char)arg1;
- (void)setNameComplete:(BOOL)arg1;
- (void)setOpenConnectionTarget:(id)arg1;
- (void)setPrimaryBud:(unsigned char)arg1;
- (void)setPrimaryInEar:(unsigned char)arg1;
- (void)setPsm:(unsigned short)arg1;
- (void)setRemoteNameRequestTarget:(id)arg1;
- (void)setSecondaryInEar:(unsigned char)arg1;
- (void)setServiceMask:(unsigned int)arg1;
- (void)setTraceLoggingEnabled:(BOOL)arg1;
- (BOOL)traceLoggingEnabled;

@end
