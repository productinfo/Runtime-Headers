/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothPreferences : NSObject {
    NSUserDefaults * bluetoothPrefs;
}

@property (atomic, readonly) NSArray *BRPairedDevices;
@property (atomic, readonly) NSArray *LEPairedDevices;
@property (atomic, readonly) NSArray *MagicCloudPairedDevices;
@property (atomic, readwrite) int OBEXBrowseConnectionHandling;
@property (atomic, readwrite, copy) NSString *OBEXBrowseRootDirectory;
@property (atomic, readwrite) BOOL OBEXFTPRequiresPairing;
@property (atomic, readwrite) int OBEXFileHandling;
@property (atomic, readwrite) BOOL OBEXFileTransferAllowsDelete;
@property (atomic, readwrite) BOOL OBEXObjectPushRequiresPairing;
@property (atomic, readwrite) unsigned int OBEXOtherDataDisposition;
@property (atomic, readwrite, copy) NSString *OBEXPushDestinationDirectory;
@property (atomic, readwrite) BOOL autoSeekKeyboard;
@property (atomic, readwrite) BOOL autoSeekPointingDevice;
@property (atomic, readonly) NSArray *configuredDevices;
@property (atomic, readonly) NSDictionary *deviceAccessTimes;
@property (atomic, readonly) NSDictionary *deviceCache;
@property (atomic, readonly) BOOL disableUIServerLegacyPairingConfirmation;
@property (atomic, readonly) BOOL disableUIServerSSPConfirmation;
@property (atomic, readonly) NSArray *disallowRoleSwitchDevices;
@property (atomic, readwrite) BOOL discoverable;
@property (atomic, readonly) NSArray *favoriteDevices;
@property (atomic, readwrite) BOOL fileTransferServicesEnabled;
@property (atomic, readonly) NSArray *hidDevices;
@property (atomic, readonly) NSArray *idsPairedDevices;
@property (atomic, readonly) NSArray *idsPairedDevicesForUser;
@property (atomic, readwrite) BOOL isLocked;
@property (atomic, readonly) BOOL isServer;
@property (atomic, readonly) NSArray *launchableApplications;
@property (atomic, readwrite) BOOL loggingEnabled;
@property (atomic, readonly) NSArray *pairedDevices;
@property (atomic, readonly) NSArray *panDevices;
@property (atomic, readwrite) BOOL poweredOn;
@property (atomic, readwrite) BOOL remoteWakeEnabled;
@property (atomic, readonly) NSArray *serialDevices;
@property (atomic, readonly) NSArray *usbBluetoothDevices;
@property (atomic, readwrite) BOOL wasUpdated;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)sharedPreferences;

- (id)BRPairedDevices;
- (id)LEPairedDevices;
- (id)MagicCloudPairedDevices;
- (int)OBEXBrowseConnectionHandling;
- (id)OBEXBrowseRootDirectory;
- (BOOL)OBEXFTPRequiresPairing;
- (int)OBEXFileHandling;
- (BOOL)OBEXFileTransferAllowsDelete;
- (BOOL)OBEXObjectPushRequiresPairing;
- (unsigned int)OBEXOtherDataDisposition;
- (id)OBEXPushDestinationDirectory;
- (void)_setPoweredOn:(BOOL)arg1;
- (void)addFavoriteDevice:(id)arg1;
- (void)addLaunchableApplication:(id)arg1;
- (id)attributesForDevice:(id)arg1;
- (BOOL)autoSeekKeyboard;
- (BOOL)autoSeekPointingDevice;
- (id)autorelease;
- (id)configuredDevices;
- (void)dealloc;
- (id)deviceAccessTimes;
- (id)deviceCache;
- (void)deviceWasUpdated:(id)arg1;
- (BOOL)disableUIServerLegacyPairingConfirmation;
- (BOOL)disableUIServerSSPConfirmation;
- (id)disallowRoleSwitchDevices;
- (BOOL)discoverable;
- (id)favoriteDevices;
- (BOOL)fileTransferServicesEnabled;
- (id)hidDevices;
- (id)idsPairedDevices;
- (id)idsPairedDevicesForUser;
- (id)init;
- (BOOL)isLocked;
- (BOOL)isServer;
- (id)launchableApplications;
- (BOOL)loggingEnabled;
- (id)pairedDevices;
- (id)panDevices;
- (void)postPreferencesChangedNotification;
- (BOOL)poweredOn;
- (oneway void)release;
- (BOOL)remoteWakeEnabled;
- (void)removeFavoriteDevice:(id)arg1;
- (void)removeLaunchableApplication:(id)arg1;
- (id)retain;
- (BOOL)safeToPowerOff:(BOOL)arg1;
- (id)serialDevices;
- (void)setAutoSeekKeyboard:(BOOL)arg1;
- (void)setAutoSeekPointingDevice:(BOOL)arg1;
- (void)setDefaultInquiryTime:(unsigned char)arg1;
- (void)setDiscoverable:(BOOL)arg1;
- (void)setFileTransferServicesEnabled:(BOOL)arg1;
- (void)setInquiryThreshold:(BOOL)arg1;
- (void)setIsLocked:(BOOL)arg1;
- (void)setLoggingEnabled:(BOOL)arg1;
- (void)setOBEXBrowseConnectionHandling:(int)arg1;
- (void)setOBEXBrowseRootDirectory:(id)arg1;
- (void)setOBEXFTPRequiresPairing:(BOOL)arg1;
- (void)setOBEXFileHandling:(int)arg1;
- (void)setOBEXFileTransferAllowsDelete:(BOOL)arg1;
- (void)setOBEXObjectPushRequiresPairing:(BOOL)arg1;
- (void)setOBEXOtherDataDisposition:(unsigned int)arg1;
- (void)setOBEXPushDestinationDirectory:(id)arg1;
- (void)setPoweredOn:(BOOL)arg1;
- (void)setPreference:(id)arg1 forKey:(id)arg2;
- (void)setRemoteWakeEnabled:(BOOL)arg1;
- (void)setWasUpdated:(BOOL)arg1;
- (void)synchronize;
- (id)systemPreferenceForKey:(id)arg1;
- (void)updateDeviceAccessTime:(id)arg1;
- (void)updatePreferencesInBlued;
- (id)usbBluetoothDevices;
- (BOOL)userReallyWantsBTOff;
- (BOOL)wasUpdated;

@end
