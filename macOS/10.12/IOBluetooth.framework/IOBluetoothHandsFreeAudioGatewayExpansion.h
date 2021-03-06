/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothHandsFreeAudioGatewayExpansion : NSObject {
    int  _batteryLevel;
    BOOL  _dockState;
    unsigned int  _productID;
    unsigned int  _vendorID;
    unsigned int  _version;
}

@property (atomic, readwrite) int batteryLevel;
@property (atomic, readwrite) BOOL dockState;
@property (atomic, readwrite) unsigned int productID;
@property (atomic, readwrite) unsigned int vendorID;
@property (atomic, readwrite) unsigned int version;

- (int)batteryLevel;
- (BOOL)dockState;
- (unsigned int)productID;
- (void)setBatteryLevel:(int)arg1;
- (void)setDockState:(BOOL)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setVendorID:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)vendorID;
- (unsigned int)version;

@end
