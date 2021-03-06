/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKImageCell : NSObject {
    id  _reserved;
}

+ (BOOL)allowsIconSharingForThumbnailRequest:(id)arg1;
+ (id)currentRequestingViewIdentifier;
+ (BOOL)delegatesImageManagementToDatasource;
+ (void)setCurrentRequestingViewIdentifier:(id)arg1;
+ (void)setDelegatesImageManagementToDatasource:(BOOL)arg1;
+ (void)setTrackingOfRequestingViewsEnabled:(BOOL)arg1;
+ (BOOL)trackingOfRequestingViewsEnabled;

- (unsigned long long)_createNewEntryInCache:(id)arg1;
- (id)_delegatedImageToDraw;
- (BOOL)_representationTypeCanBePlayed:(id)arg1;
- (BOOL)_shareIconIfPossible:(id)arg1;
- (BOOL)_shareIconRef:(struct OpaqueIconRef { }*)arg1;
- (float)alpha;
- (int)bestImageSizeForRenderingSize:(struct CGSize { double x1; double x2; })arg1 renderLevel:(int)arg2 renderType:(unsigned int)arg3;
- (id)cacheDatabase;
- (unsigned long long)cacheIndex;
- (unsigned long long)cacheIndexValidateIfNeeded:(BOOL)arg1;
- (BOOL)canDisplayInlinePreview;
- (id)dataSource;
- (id)dataSourceImageRepresentationType;
- (unsigned long long)dataSourceIndex;
- (id)dataSourcePath;
- (id)dataSourceURL;
- (BOOL)datasourceIsParsed;
- (void)datasourceItemDidChange;
- (void)dealloc;
- (void)didRecoverImageFromCache;
- (id)image;
- (void)imageDidChange;
- (BOOL)imageIsImported;
- (id)imageWrapperForType:(id)arg1 representation:(id)arg2;
- (unsigned long long)indexOfRepresentedItem;
- (id)init;
- (id)initWithConcreteInstance:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inlinePreviewFrameForImageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inlinePreviewQuickLookProperties;
- (void)invalidate;
- (BOOL)isAnIcon;
- (int)lastRenderedSize;
- (id)objectForKey:(id)arg1;
- (id)parent;
- (void)parentWillDie:(id)arg1;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)reloadData;
- (void)removeObjectForKey:(id)arg1;
- (id)representedItem;
- (void)setAlpha:(float)arg1;
- (void)setContentCanBePlayed:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceIndex:(unsigned long long)arg1;
- (void)setLastRenderedSize:(int)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setParent:(id)arg1;
- (void)setSourceUID:(id)arg1;
- (BOOL)shareIconIfPossible:(id)arg1;
- (id)sourceUID;
- (id)subtitleString;
- (id)thumbnailImage;
- (id)titleString;
- (void)validateDatasource;
- (unsigned long long)version;

@end
