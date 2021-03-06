/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface OBEXFilePut : OBEXFileAction {
    NSData * mData;
    NSString * mDataName;
    NSString * mDataType;
    int  mIsFileTransfer;
    unsigned int  mLastFileOffset;
}

+ (id)withOBEXSession:(id)arg1 target:(id)arg2 eventSelector:(SEL)arg3;

- (void)OBEXPutHandler:(struct OBEXPutCommandResponseData { unsigned char x1; void *x2; unsigned long long x3; }*)arg1;
- (void)dealloc;
- (id)getNextDataChunk:(id)arg1 optionalHeaderLength:(unsigned long long)arg2 isLastChunk:(char *)arg3;
- (id)getNextFileChunk:(id)arg1 optionalHeaderLength:(unsigned long long)arg2 isLastChunk:(char *)arg3;
- (id)init;
- (void)initForNewAction;
- (int)putDataToRemote:(id)arg1 type:(id)arg2 name:(id)arg3;
- (int)putFileToRemote:(id)arg1;
- (void)setCountHeader:(int)arg1;
- (void)startCommand;

@end
