/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
 */

@interface CBATTRequest : NSObject {
    CBCentral * _central;
    CBCharacteristic * _characteristic;
    BOOL  _ignoreResponse;
    unsigned long long  _offset;
    NSNumber * _transactionID;
    NSData * _value;
}

@property (nonatomic, readwrite, retain) CBCentral *central;
@property (nonatomic, readwrite, retain) CBCharacteristic *characteristic;
@property (nonatomic, readwrite) BOOL ignoreResponse;
@property (nonatomic, readwrite) unsigned long long offset;
@property (nonatomic, readwrite, retain) NSNumber *transactionID;
@property (atomic, readwrite, copy) NSData *value;

- (id)central;
- (id)characteristic;
- (void)dealloc;
- (id)description;
- (BOOL)ignoreResponse;
- (id)initWithCentral:(id)arg1 characteristic:(id)arg2 offset:(unsigned long long)arg3 value:(id)arg4 transactionID:(id)arg5;
- (unsigned long long)offset;
- (void)setCentral:(id)arg1;
- (void)setCharacteristic:(id)arg1;
- (void)setIgnoreResponse:(BOOL)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setTransactionID:(id)arg1;
- (void)setValue:(id)arg1;
- (id)transactionID;
- (id)value;

@end
