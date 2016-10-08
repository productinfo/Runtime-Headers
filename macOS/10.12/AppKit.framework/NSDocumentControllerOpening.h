/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDocumentControllerOpening : NSObject {
    NSDocument * _document;
    BOOL  _documentWasAlreadyOpen;
    NSError * _error;
    NSString * _recentDocumentRecordsKey;
    QLSeamlessDocumentOpener * _seamlessOpener;
    NSURL * _url;
}

@property (atomic, readwrite, retain) NSDocument *document;
@property (atomic, readwrite) BOOL documentWasAlreadyOpen;
@property (atomic, readwrite, retain) NSError *error;
@property (atomic, readwrite, retain) NSString *recentDocumentRecordsKey;
@property (atomic, readwrite, retain) QLSeamlessDocumentOpener *seamlessOpener;
@property (setter=setURL:, atomic, readwrite, retain) NSURL *url;

- (void)dealloc;
- (id)document;
- (BOOL)documentWasAlreadyOpen;
- (id)error;
- (id)recentDocumentRecordsKey;
- (id)seamlessOpener;
- (void)setDocument:(id)arg1;
- (void)setDocumentWasAlreadyOpen:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setRecentDocumentRecordsKey:(id)arg1;
- (void)setSeamlessOpener:(id)arg1;
- (void)setURL:(id)arg1;
- (id)url;

@end
