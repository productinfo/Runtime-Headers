/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
 */

@interface CBMutableService : CBService {
    NSNumber * _ID;
}

@property (atomic, readwrite, retain) NSNumber *ID;
@property (atomic, readwrite, retain) NSArray *characteristics;
@property (atomic, readwrite, retain) NSArray *includedServices;

- (void).cxx_destruct;
- (id)ID;
- (void)dealloc;
- (id)description;
- (void)handlePowerNotOn;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(id)arg1 primary:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setID:(id)arg1;

@end