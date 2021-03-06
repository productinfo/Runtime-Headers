/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _contentItems;
    _MRPlaybackQueueContextProtobuf * _context;
    struct { 
        unsigned int location : 1; 
        unsigned int notSendingTransaction : 1; 
    }  _has;
    int  _location;
    BOOL  _notSendingTransaction;
    NSString * _requestID;
    _MRNowPlayingPlayerPathProtobuf * _resolvedPlayerPath;
}

@property (nonatomic, readwrite, retain) NSMutableArray *contentItems;
@property (nonatomic, readwrite, retain) _MRPlaybackQueueContextProtobuf *context;
@property (nonatomic, readonly) BOOL hasContext;
@property (nonatomic, readwrite) BOOL hasLocation;
@property (nonatomic, readwrite) BOOL hasNotSendingTransaction;
@property (nonatomic, readonly) BOOL hasRequestID;
@property (nonatomic, readonly) BOOL hasResolvedPlayerPath;
@property (nonatomic, readwrite) int location;
@property (nonatomic, readwrite) BOOL notSendingTransaction;
@property (nonatomic, readwrite, retain) NSString *requestID;
@property (nonatomic, readwrite, retain) _MRNowPlayingPlayerPathProtobuf *resolvedPlayerPath;

+ (Class)contentItemType;

- (void)addContentItem:(id)arg1;
- (void)clearContentItems;
- (id)contentItemAtIndex:(unsigned long long)arg1;
- (id)contentItems;
- (unsigned long long)contentItemsCount;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasContext;
- (BOOL)hasLocation;
- (BOOL)hasNotSendingTransaction;
- (BOOL)hasRequestID;
- (BOOL)hasResolvedPlayerPath;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (int)location;
- (void)mergeFrom:(id)arg1;
- (BOOL)notSendingTransaction;
- (BOOL)readFrom:(id)arg1;
- (id)requestID;
- (id)resolvedPlayerPath;
- (void)setContentItems:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHasLocation:(BOOL)arg1;
- (void)setHasNotSendingTransaction:(BOOL)arg1;
- (void)setLocation:(int)arg1;
- (void)setNotSendingTransaction:(BOOL)arg1;
- (void)setRequestID:(id)arg1;
- (void)setResolvedPlayerPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
