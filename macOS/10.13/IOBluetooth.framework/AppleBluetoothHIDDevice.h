/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface AppleBluetoothHIDDevice : BluetoothHIDDevice {
    NSDictionary * _featureDict;
}

- (BOOL)batteryDangerouslyLow;
- (BOOL)batteryLow;
- (float)batteryPercent;
- (BOOL)connectToHost:(const struct BluetoothDeviceAddress { unsigned char x1[6]; }*)arg1 linkKey:(const struct BluetoothKey { unsigned char x1[16]; }*)arg2;
- (int)connectionCounts:(struct ConnectionCount { int x1; int x2; }*)arg1;
- (void)dealloc;
- (int)deleteAllLinkKeys;
- (id)deviceNameFromHardware;
- (int)disconnect;
- (BOOL)factoryDefault;
- (BOOL)fullFactoryDefault;
- (long long)getFeatureReport:(id)arg1;
- (float)getFloatFeatureReport:(id)arg1;
- (int)getMaxDeviceNameLength;
- (BOOL)handoffAndRemoveHost:(BOOL)arg1 pageType:(unsigned char)arg2 deviceAddress:(const struct BluetoothDeviceAddress { unsigned char x1[6]; }*)arg3 linkKey:(const struct BluetoothKey { unsigned char x1[16]; }*)arg4;
- (id)initWithHIDDevice:(unsigned int)arg1;
- (BOOL)recantConnection;
- (BOOL)removeCurrentHost;
- (BOOL)report:(id)arg1 info:(struct ReportInfo { int x1; int x2; long long x3; long long x4; }*)arg2;
- (BOOL)report:(id)arg1 reportID:(int*)arg2 min:(int*)arg3 max:(int*)arg4;
- (int)reportIDForReportKey:(id)arg1;
- (BOOL)sendCommandFeatureReport:(id)arg1;
- (BOOL)sendConnectionIntervalUpdate:(BOOL)arg1 intervalSlots:(unsigned char)arg2 transmitAttempts:(unsigned char)arg3 asymmetricMultiplier:(unsigned char)arg4;
- (BOOL)sendSCODevicePaired;
- (BOOL)sendSCODeviceUnpaired;
- (BOOL)sendSCOLinkActive;
- (BOOL)sendSCOLinkInactive;
- (void)serviceInterestOfType:(unsigned int)arg1 argument:(void*)arg2;
- (int)setDeviceName:(id)arg1;
- (BOOL)setFeatureReport:(id)arg1 value:(long long)arg2;
- (BOOL)setFeatureWithReportID:(int)arg1 value:(unsigned char)arg2;
- (BOOL)setFloatFeatureReport:(id)arg1 value:(float)arg2;
- (BOOL)setLLREnabled:(BOOL)arg1;
- (BOOL)setUserMode:(int)arg1;
- (BOOL)suspendDevice:(BOOL)arg1;
- (int)userMode;

// AppleBluetoothHIDDevice (Internal)

- (void)remoteNameRequestComplete:(id)arg1 status:(int)arg2;

@end
