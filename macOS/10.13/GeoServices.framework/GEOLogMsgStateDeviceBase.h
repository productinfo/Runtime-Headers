/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying> {
    int  _deviceBatteryState;
    BOOL  _deviceInVehicle;
    int  _deviceInterfaceOrientation;
    struct { 
        unsigned int deviceBatteryState : 1; 
        unsigned int deviceInterfaceOrientation : 1; 
        unsigned int deviceInVehicle : 1; 
    }  _has;
}

@property (nonatomic, readwrite) int deviceBatteryState;
@property (nonatomic, readwrite) BOOL deviceInVehicle;
@property (nonatomic, readwrite) int deviceInterfaceOrientation;
@property (nonatomic, readwrite) BOOL hasDeviceBatteryState;
@property (nonatomic, readwrite) BOOL hasDeviceInVehicle;
@property (nonatomic, readwrite) BOOL hasDeviceInterfaceOrientation;

- (int)StringAsDeviceBatteryState:(id)arg1;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceBatteryState;
- (id)deviceBatteryStateAsString:(int)arg1;
- (BOOL)deviceInVehicle;
- (int)deviceInterfaceOrientation;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (BOOL)hasDeviceBatteryState;
- (BOOL)hasDeviceInVehicle;
- (BOOL)hasDeviceInterfaceOrientation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDeviceBatteryState:(int)arg1;
- (void)setDeviceInVehicle:(BOOL)arg1;
- (void)setDeviceInterfaceOrientation:(int)arg1;
- (void)setHasDeviceBatteryState:(BOOL)arg1;
- (void)setHasDeviceInVehicle:(BOOL)arg1;
- (void)setHasDeviceInterfaceOrientation:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end