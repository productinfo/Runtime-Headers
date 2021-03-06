/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFBLEDevice : NSObject <NSSecureCoding> {
    NSData * _advertisementData;
    NSDictionary * _advertisementFields;
    NSData * _bluetoothAddress;
    NSUUID * _counterpartIdentifier;
    long long  _distance;
    unsigned long long  _foundTicks;
    NSUUID * _identifier;
    double  _lastSeen;
    NSString * _name;
    double  _pairCheckTime;
    BOOL  _paired;
    long long  _rssi;
    long long  _rssiCeiling;
    unsigned char  _rssiCount;
    long long  _rssiFloor;
    BOOL  _rssiHistory;
    unsigned char  _rssiIndex;
    SFProximityEstimator * _setupProximityEstimator;
    long long  _smoothedRSSI;
}

@property (nonatomic, readwrite, copy) NSData *advertisementData;
@property (nonatomic, readwrite, copy) NSDictionary *advertisementFields;
@property (nonatomic, readwrite, copy) NSData *bluetoothAddress;
@property (nonatomic, readwrite, copy) NSUUID *counterpartIdentifier;
@property (nonatomic, readwrite) long long distance;
@property (nonatomic, readwrite) unsigned long long foundTicks;
@property (nonatomic, readwrite, copy) NSUUID *identifier;
@property (nonatomic, readwrite) double lastSeen;
@property (nonatomic, readwrite, copy) NSString *name;
@property (nonatomic, readwrite) double pairCheckTime;
@property (nonatomic, readwrite) BOOL paired;
@property (nonatomic, readwrite) long long rssi;
@property (nonatomic, readwrite) long long rssiCeiling;
@property (nonatomic, readwrite) long long rssiFloor;
@property (nonatomic, readwrite, retain) SFProximityEstimator *setupProximityEstimator;
@property (nonatomic, readwrite) long long smoothedRSSI;

+ (void)setRSSIEstimatorInfo:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertisementData;
- (id)advertisementFields;
- (id)bluetoothAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)counterpartIdentifier;
- (id)description;
- (long long)distance;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)foundTicks;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (double)lastSeen;
- (id)name;
- (double)pairCheckTime;
- (BOOL)paired;
- (long long)rssi;
- (long long)rssiCeiling;
- (long long)rssiFloor;
- (void)setAdvertisementData:(id)arg1;
- (void)setAdvertisementFields:(id)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setCounterpartIdentifier:(id)arg1;
- (void)setDistance:(long long)arg1;
- (void)setFoundTicks:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastSeen:(double)arg1;
- (void)setName:(id)arg1;
- (void)setPairCheckTime:(double)arg1;
- (void)setPaired:(BOOL)arg1;
- (void)setRssi:(long long)arg1;
- (void)setRssiCeiling:(long long)arg1;
- (void)setRssiFloor:(long long)arg1;
- (void)setSetupProximityEstimator:(id)arg1;
- (void)setSmoothedRSSI:(long long)arg1;
- (id)setupProximityEstimator;
- (long long)smoothedRSSI;
- (BOOL)updateRSSI:(long long)arg1;

@end
