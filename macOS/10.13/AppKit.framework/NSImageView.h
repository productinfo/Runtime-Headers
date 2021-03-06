/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSImageView : NSControl <DebugHierarchyObject, NSAccessibilityImage> {
    SEL  _action;
    struct __IVFlags { 
        unsigned int _hasImageView : 1; 
        unsigned int _usesCachedImage : 1; 
        unsigned int _unused : 24; 
        unsigned int _rejectsMultiFileDrops : 1; 
        unsigned int _compatibleScalingAndAlignment : 1; 
        unsigned int _reserved : 1; 
        unsigned int _overridesDrawing : 1; 
        unsigned int _allowsCutCopyPaste : 1; 
        unsigned int _editable : 1; 
    }  _ivFlags;
    id  _target;
}

@property (setter=_setUsesCachedImage:, nonatomic, readwrite) BOOL _usesCachedImage;
@property (atomic, readwrite) BOOL allowsCutCopyPaste;
@property (atomic, readwrite) BOOL animates;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isEditable, atomic, readwrite) BOOL editable;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSImage *image;
@property (atomic, readwrite) unsigned long long imageAlignment;
@property (atomic, readwrite) unsigned long long imageFrameStyle;
@property (atomic, readwrite) unsigned long long imageScaling;
@property (atomic, readonly) Class superclass;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (void)initialize;

- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)_copyImageToPasteboard;
- (long long)_desiredContentsRedrawPolicy;
- (void)_didRemoveLayer;
- (void)_ensureInitialStateIsSetForAnimationsForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_imageByConvertingToSidebarImageIfNeeded:(id)arg1;
- (id)_imageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageViewFrame;
- (void)_invalidateLayerLayoutAndSetNeedsDisplay;
- (id)_processedImageForView:(id)arg1;
- (void)_redisplayImageWhenLayerBacked;
- (void)_removeImageView;
- (void)_setImageAndNotifyTarget:(id)arg1;
- (void)_setImageView:(id)arg1;
- (void)_setUsesCachedImage:(BOOL)arg1;
- (BOOL)_shouldDoLegacyLayerUpdate;
- (BOOL)_shouldDoOldLayerUpdate;
- (BOOL)_shouldTrackWithNonEditableCell;
- (void)_updateImageView;
- (void)_updateLayerContentsToBorderImage;
- (void)_updateLayerContentsToImage;
- (BOOL)_usesCachedImage;
- (BOOL)_usingUpdateLayer;
- (void)dealloc;

// NSImageView (NSImageViewConvenience)

+ (id)imageViewWithImage:(id)arg1;
+ (id)imageWellWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;

// NSImageView (NSImageViewPrivate)

- (void)_updateCompatibleScalingAndAlignment;
- (void)_updateLayerContentsRedrawPolicy;
- (void)_updateOverridesDrawing;

// NSImageView (NSPrivateFinderSupport)

- (BOOL)_rejectsMultiFileDrops;
- (void)_setRejectsMultiFileDrops:(BOOL)arg1;

// Image: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Debugger/libViewDebuggerSupport.dylib

// NSImageView (DebugHierarchyAdditions)

- (id)debugHierarchyPropertyDescriptions;
- (id)debugHierarchyValueForPropertyWithName:(id)arg1;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessibilityLabel;
- (SEL)action;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (BOOL)allowsCutCopyPaste;
- (BOOL)allowsVibrancy;
- (BOOL)animates;
- (long long)backgroundStyle;
- (void)concludeDragOperation:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (unsigned long long)imageAlignment;
- (unsigned long long)imageFrameStyle;
- (unsigned long long)imageScaling;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isEditable;
- (BOOL)isOpaque;
- (void)keyDown:(id)arg1;
- (void)layout;
- (id)makeBackingLayer;
- (id)ns_widgetType;
- (void)paste:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)registerForDrags;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setAction:(SEL)arg1;
- (void)setAllowsCutCopyPaste:(BOOL)arg1;
- (void)setAnimates:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setCell:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(unsigned long long)arg1;
- (void)setImageFrameStyle:(unsigned long long)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (void)setLayer:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setObjectValue:(id)arg1;
- (void)setTarget:(id)arg1;
- (BOOL)shouldBeTreatedAsInkEvent:(id)arg1;
- (id)target;
- (void)updateLayer;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)wantsUpdateLayer;

@end
