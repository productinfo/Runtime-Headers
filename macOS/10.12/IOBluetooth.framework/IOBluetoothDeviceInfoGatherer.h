/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothDeviceInfoGatherer : NSObject {
    void * expansionData;
    unsigned int  mATCommandState;
    NSTimer * mATCommandTimer;
    unsigned char  mChannelID;
    IOBluetoothDevice * mDevice;
    BOOL  mGetATCommandInfo;
    BOOL  mGetSDPInfo;
    BOOL  mInfoGathered;
    char * mLastCommandPtr;
    NSMutableData * mPhoneGMI;
    NSMutableData * mPhoneGMM;
    NSMutableData * mPhoneIMSI;
    NSMutableData * mPhoneManufacturer;
    NSMutableData * mPhoneModelNumber;
    NSMutableData * mPhoneRevisionID;
    SEL  mProgressSelector;
    id  mProgressSelectorTarget;
    IOBluetoothRFCOMMChannel * mRFCOMMChannel;
}

- (void)ATCommandTimerFired;
- (void)clearAllData;
- (void)connectionComplete:(id)arg1 status:(int)arg2;
- (void)dealloc;
- (void)deviceInfoGatheringComplete;
- (void)finalize;
- (id)getIMSI;
- (id)getManufacturer;
- (id)getModelNumber;
- (id)getPhoneGMI;
- (id)getPhoneGMM;
- (id)getRevision;
- (id)initWithDevice:(id)arg1 progressSelector:(SEL)arg2 andTarget:(id)arg3;
- (void)postProgressToTarget:(int)arg1;
- (void)processNextPhoneQuery;
- (void)rfcommChannelClosed:(id)arg1;
- (void)rfcommChannelData:(id)arg1 data:(void*)arg2 length:(unsigned long long)arg3;
- (void)rfcommChannelOpenComplete:(id)arg1 status:(int)arg2;
- (void)sdpQueryComplete:(id)arg1 status:(int)arg2;
- (void)setGetATCommandInfo:(BOOL)arg1;
- (void)setGetSDPInfo:(BOOL)arg1;
- (void)setOnlyGetSDPInfo:(BOOL)arg1;
- (void)setProgressSelector:(SEL)arg1 andTarget:(id)arg2;
- (void)startATCommandTimeout;
- (void)startDeviceInfoGathering;
- (void)startDeviceInfoGatheringDelayed:(id)arg1;
- (void)startSDPQuery;
- (void)stopATCommandTimeout;

@end
