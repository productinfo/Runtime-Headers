/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
 */

@interface CBCharacteristic : NSObject {
    CBUUID * _UUID;
    NSArray * _descriptors;
    NSNumber * _handle;
    BOOL  _isBroadcasted;
    BOOL  _isNotifying;
    CBPeripheral * _peripheral;
    long long  _properties;
    CBService * _service;
    NSData * _value;
    NSNumber * _valueHandle;
}

@property (nonatomic, readonly) CBUUID *UUID;
@property (atomic, readwrite, retain) NSArray *descriptors;
@property (nonatomic, readonly) NSNumber *handle;
@property (atomic, readonly) BOOL isBroadcasted;
@property (atomic, readwrite) BOOL isNotifying;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (nonatomic, readonly) long long properties;
@property (nonatomic, readwrite) CBService *service;
@property (atomic, readwrite, retain) NSData *value;
@property (nonatomic, readonly) NSNumber *valueHandle;

- (id)UUID;
- (void)dealloc;
- (id)descriptors;
- (id)handle;
- (id)handleDescriptorsDiscovered:(id)arg1;
- (id)handleValueBroadcasted:(id)arg1;
- (id)handleValueNotifying:(id)arg1;
- (id)handleValueUpdated:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;
- (void)invalidate;
- (BOOL)isBroadcasted;
- (BOOL)isNotifying;
- (id)peripheral;
- (long long)properties;
- (id)service;
- (void)setDescriptors:(id)arg1;
- (void)setIsNotifying:(BOOL)arg1;
- (void)setService:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)valueHandle;

@end
