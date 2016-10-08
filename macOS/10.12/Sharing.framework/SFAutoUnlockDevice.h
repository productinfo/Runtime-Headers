/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFAutoUnlockDevice : SFPeerDevice <NSSecureCoding> {
    BOOL  _bluetoothCloudPaired;
    NSUUID * _bluetoothID;
    BOOL  _keyExists;
    NSString * _modelName;
    NSUUID * _proxyBluetoothID;
    NSDictionary * _results;
    BOOL  _unlockEnabled;
}

@property (nonatomic, readwrite) BOOL bluetoothCloudPaired;
@property (nonatomic, readwrite, retain) NSUUID *bluetoothID;
@property (nonatomic, readwrite) BOOL keyExists;
@property (nonatomic, readwrite, retain) NSString *modelName;
@property (nonatomic, readwrite, copy) NSUUID *proxyBluetoothID;
@property (nonatomic, readwrite, retain) NSDictionary *results;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readwrite) BOOL unlockEnabled;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)bluetoothCloudPaired;
- (id)bluetoothID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)keyExists;
- (id)modelName;
- (id)proxyBluetoothID;
- (id)results;
- (void)setBluetoothCloudPaired:(BOOL)arg1;
- (void)setBluetoothID:(id)arg1;
- (void)setKeyExists:(BOOL)arg1;
- (void)setModelName:(id)arg1;
- (void)setProxyBluetoothID:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setUnlockEnabled:(BOOL)arg1;
- (long long)type;
- (BOOL)unlockEnabled;

@end
