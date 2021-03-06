/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
 */

@interface ICScannerBandData : NSObject {
    BOOL  _bigEndian;
    unsigned long long  _bitsPerComponent;
    unsigned long long  _bitsPerPixel;
    unsigned long long  _bytesPerRow;
    NSString * _colorSyncProfilePath;
    NSData * _dataBuffer;
    unsigned long long  _dataNumRows;
    unsigned long long  _dataSize;
    unsigned long long  _dataStartRow;
    unsigned long long  _fullImageHeight;
    unsigned long long  _fullImageWidth;
    unsigned long long  _numComponents;
    unsigned long long  _pixelDataType;
}

@property (getter=isBigEndian, atomic, readwrite) BOOL bigEndian;
@property (atomic, readwrite) unsigned long long bitsPerComponent;
@property (atomic, readwrite) unsigned long long bitsPerPixel;
@property (atomic, readwrite) unsigned long long bytesPerRow;
@property (atomic, readwrite, retain) NSString *colorSyncProfilePath;
@property (atomic, readwrite, retain) NSData *dataBuffer;
@property (atomic, readwrite) unsigned long long dataNumRows;
@property (atomic, readwrite) unsigned long long dataSize;
@property (atomic, readwrite) unsigned long long dataStartRow;
@property (atomic, readwrite) unsigned long long fullImageHeight;
@property (atomic, readwrite) unsigned long long fullImageWidth;
@property (atomic, readwrite) unsigned long long numComponents;
@property (atomic, readwrite) unsigned long long pixelDataType;

- (unsigned long long)bitsPerComponent;
- (unsigned long long)bitsPerPixel;
- (unsigned long long)bytesPerRow;
- (id)colorSyncProfilePath;
- (id)dataBuffer;
- (unsigned long long)dataNumRows;
- (unsigned long long)dataSize;
- (unsigned long long)dataStartRow;
- (void)dealloc;
- (id)description;
- (unsigned long long)fullImageHeight;
- (unsigned long long)fullImageWidth;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isBigEndian;
- (unsigned long long)numComponents;
- (unsigned long long)pixelDataType;
- (void)setBigEndian:(BOOL)arg1;
- (void)setBitsPerComponent:(unsigned long long)arg1;
- (void)setBitsPerPixel:(unsigned long long)arg1;
- (void)setBytesPerRow:(unsigned long long)arg1;
- (void)setColorSyncProfilePath:(id)arg1;
- (void)setDataBuffer:(id)arg1;
- (void)setDataNumRows:(unsigned long long)arg1;
- (void)setDataSize:(unsigned long long)arg1;
- (void)setDataStartRow:(unsigned long long)arg1;
- (void)setFullImageHeight:(unsigned long long)arg1;
- (void)setFullImageWidth:(unsigned long long)arg1;
- (void)setNumComponents:(unsigned long long)arg1;
- (void)setPixelDataType:(unsigned long long)arg1;

@end
