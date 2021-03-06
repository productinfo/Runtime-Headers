/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTExportOptionsInternal : NSObject {
    struct OpaqueRFExport { } * _exportRef;
    BOOL  _hasAudio;
    BOOL  _hasVideo;
    NSString * _identifier;
    NSMutableArray * _metadata;
    BOOL  _sourceSpecified;
}

@property (nonatomic, readwrite) struct OpaqueRFExport { }*exportRef;
@property (atomic, readwrite) BOOL hasAudio;
@property (atomic, readwrite) BOOL hasVideo;
@property (nonatomic, readwrite, copy) NSString *identifier;
@property (nonatomic, readwrite, retain) NSMutableArray *metadata;
@property (atomic, readwrite) BOOL sourceSpecified;

- (void)_addMetadataItem:(id)arg1 format:(id)arg2;
- (int)_createExportRefIfNeeded;
- (void)dealloc;
- (struct OpaqueRFExport { }*)exportRef;
- (BOOL)hasAudio;
- (BOOL)hasVideo;
- (id)identifier;
- (id)metadata;
- (void)setExportRef:(struct OpaqueRFExport { }*)arg1;
- (void)setHasAudio:(BOOL)arg1;
- (void)setHasVideo:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSourceSpecified:(BOOL)arg1;
- (BOOL)sourceSpecified;

@end
