/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVLocalOutputDeviceImpl : NSObject <AVOutputDeviceImpl> {
    AVOutputDevice * _parentDevice;
}

@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly) NSNumber *batteryLevel;
@property (nonatomic, readonly) BOOL canAccessRemoteAssets;
@property (nonatomic, readonly) BOOL canBeGroupLeader;
@property (nonatomic, readonly) BOOL canBeGrouped;
@property (atomic, readonly) BOOL canSetVolume;
@property (nonatomic, readonly) NSNumber *caseBatteryLevel;
@property (nonatomic, readonly, copy) NSArray *connectedPairedDevices;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceFeatures;
@property (nonatomic, readonly) long long deviceSubType;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) BOOL groupContainsGroupLeader;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *identifyingMACAddress;
@property (getter=isInUseByPairedDevice, nonatomic, readonly) BOOL inUseByPairedDevice;
@property (nonatomic, readonly) BOOL isGroupLeader;
@property (nonatomic, readonly) NSNumber *leftBatteryLevel;
@property (nonatomic, readonly, copy) NSString *modelID;
@property (nonatomic, readonly, copy) NSString *name;
@property (atomic, readwrite) AVOutputDevice *parentOutputDevice;
@property (nonatomic, readonly) BOOL requiresAuthorization;
@property (nonatomic, readonly) NSNumber *rightBatteryLevel;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) float volume;

- (void).cxx_destruct;
- (id)ID;
- (id)batteryLevel;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canBeGroupLeader;
- (BOOL)canBeGrouped;
- (BOOL)canSetVolume;
- (id)caseBatteryLevel;
- (id)connectedPairedDevices;
- (unsigned long long)deviceFeatures;
- (long long)deviceSubType;
- (long long)deviceType;
- (BOOL)groupContainsGroupLeader;
- (id)groupID;
- (unsigned long long)hash;
- (id)identifyingMACAddress;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGroupLeader;
- (BOOL)isInUseByPairedDevice;
- (id)leftBatteryLevel;
- (id)modelID;
- (id)name;
- (id)parentOutputDevice;
- (BOOL)requiresAuthorization;
- (id)rightBatteryLevel;
- (void)setAdministrativeConfiguration:(id)arg1 administrationPassword:(id)arg2 completionHandler:(id)arg3;
- (void)setParentOutputDevice:(id)arg1;
- (void)setSecondDisplayEnabled:(BOOL)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;

@end