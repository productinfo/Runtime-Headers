/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork {
    NSData * _imageData;
    NSString * _mimeType;
}

@property (nonatomic, readonly, copy) NSData *imageData;
@property (nonatomic, readonly, copy) NSString *mimeType;

- (id)copyImageData;
- (void)dealloc;
- (BOOL)hasArtworkData;
- (id)imageData;
- (id)initWithImageData:(id)arg1 mimeType:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mimeType;
- (unsigned int)type;

@end
