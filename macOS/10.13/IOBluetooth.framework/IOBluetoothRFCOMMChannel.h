/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothRFCOMMChannel : IOBluetoothObject <NSPortDelegate> {
    void * _mReserved;
    id  delegate;
    unsigned char  mChannelID;
    BOOL  mChannelIsOpen;
    NSPort * mDataAvailablePort;
    IOBluetoothDevice * mDevice;
    id  mEventDataListener;
    void * mEventDataListenerRefCon;
    id  mIncomingDataListener;
    void * mIncomingDataListenerRefCon;
    struct _IODataQueueMemory { unsigned int x1; unsigned int x2; unsigned int x3; struct _IODataQueueEntry { unsigned int x_4_1_1; unsigned char x_4_1_2[4]; } x4[1]; } * mIncomingDataQueue;
    BOOL  mIsIncoming;
    IOBluetoothL2CAPChannel * mL2Channel;
    unsigned short  mMTU;
    unsigned long long  mObjectID;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)getKeyForIOService:(unsigned int)arg1;
+ (id)getUniqueObjectDictionary:(BOOL)arg1;
+ (id)registerForChannelOpenNotifications:(id)arg1 selector:(SEL)arg2;
+ (id)registerForChannelOpenNotifications:(id)arg1 selector:(SEL)arg2 withChannelID:(unsigned char)arg3 direction:(int)arg4;
+ (id)withObjectID:(unsigned long long)arg1;
+ (id)withRFCOMMChannelRef:(struct OpaqueIOBluetoothObjectRef { }*)arg1;

- (int)closeChannel;
- (int)closeKernelConnection;
- (id)delegate;
- (unsigned char)getChannelID;
- (id)getDevice;
- (id)getKey;
- (unsigned short)getMTU;
- (unsigned long long)getObjectID;
- (struct OpaqueIOBluetoothObjectRef { }*)getRFCOMMChannelRef;
- (id)initWithIOService:(unsigned int)arg1;
- (BOOL)ioServiceTerminated:(unsigned int)arg1;
- (BOOL)isIncoming;
- (BOOL)isOpen;
- (BOOL)isTransmissionPaused;
- (BOOL)isValid;
- (id)registerForChannelCloseNotification:(id)arg1 selector:(SEL)arg2;
- (int)sendRemoteLineStatus:(int)arg1;
- (int)setDelegate:(id)arg1;
- (int)setSerialParameters:(unsigned int)arg1 dataBits:(unsigned char)arg2 parity:(int)arg3 stopBits:(unsigned char)arg4;
- (void)updateFromNewIOService:(unsigned int)arg1;
- (int)write:(void*)arg1 length:(unsigned short)arg2 sleep:(BOOL)arg3;
- (int)writeAsync:(void*)arg1 length:(unsigned short)arg2 refcon:(void*)arg3;
- (int)writeSimple:(void*)arg1 length:(unsigned short)arg2 sleep:(BOOL)arg3 bytesSent:(unsigned int*)arg4;
- (int)writeSync:(void*)arg1 length:(unsigned short)arg2;

// IOBluetoothRFCOMMChannel (IOBluetoothRFCOMMChannelPrivate)

- (int)channelState;
- (BOOL)channelStateIsClosed;
- (BOOL)channelStateIsClosing;
- (BOOL)channelStateIsOpen;
- (BOOL)channelStateIsOpening;
- (void)connectionComplete:(id)arg1 status:(int)arg2;
- (int)createQueue;
- (void)dealloc;
- (int)destroyQueue;
- (id)getL2CAPChannel;
- (void)handleMachMessage:(void*)arg1;
- (int)instantiateOnDevice:(id)arg1;
- (BOOL)isInitiatorLocal;
- (int)openChannel;
- (int)pauseTransmission:(BOOL)arg1;
- (void)processIncomingData:(struct IOBluetoothUserMessageBlock { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; int x_1_1_6; } x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; int x6; }*)arg1;
- (int)sendCommand:(unsigned char)arg1;
- (int)sendMSCOnBadChannel:(unsigned char)arg1;
- (int)sendTestByte:(unsigned char)arg1;
- (void)setChannelID:(unsigned char)arg1;
- (void)setDevice:(id)arg1;
- (void)setL2CAPChannel:(id)arg1;
- (int)setProperties:(id)arg1;
- (int)updateReleationships:(unsigned int)arg1;
- (BOOL)waitforChanneOpen;

@end