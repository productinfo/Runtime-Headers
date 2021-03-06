/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKImageBrowserCellOffscreenRenderer : NSObject {
    id  _cacheContext;
    unsigned long long  _cellsStyleMask;
    struct CGContext { } * _context;
    void * _flavorSetup;
    double  _gridSpacing;
    double  _iconSize;
    id  _ikrenderer;
    BOOL  _labelsOnRight;
    double  _maxIconSize;
    double  _textSize;
    NSMutableDictionary * _valuesForKeys;
}

@property (atomic, readwrite) unsigned long long cellsStyleMask;
@property (atomic, readwrite) struct CGContext { }*context;
@property (nonatomic, readwrite) double gridSpacing;
@property (nonatomic, readwrite) double iconSize;
@property (atomic, readwrite, retain) id imageBrowserContext;
@property (nonatomic, readwrite) BOOL labelsOnRight;
@property (nonatomic, readwrite) double maxIconSize;
@property (nonatomic, readwrite) double textSize;

+ (id)rendererWithCGContext:(struct CGContext { }*)arg1;

- (int)__heightOfSubtitle;
- (int)__heightOfTitle;
- (void)_addClickableAreaWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_assertContextIsInstalledAsCurrentContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForCARenderer;
- (int)appearanceStyle;
- (id)backgroundColor;
- (id)backgroundComposition;
- (id)backgroundIKImage;
- (BOOL)backgroundIsDark;
- (BOOL)backgroundIsWhite;
- (id)backgroundLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)caRenderer;
- (id)cacheManager;
- (struct CGSize { double x1; double x2; })cellSize;
- (void)cellWillDrawPlaceHolder:(id)arg1;
- (id)cells;
- (BOOL)cellsHaveSubtitle;
- (BOOL)cellsHaveTitle;
- (void)cellsOutlineRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3;
- (unsigned long long)cellsStyleMask;
- (BOOL)constrainsToOriginalSize;
- (struct CGContext { }*)context;
- (void)dealloc;
- (id)delegate;
- (BOOL)delegatesImageManagementToDatasource;
- (BOOL)directImportMode;
- (BOOL)disableTwoLineTitles;
- (BOOL)drawGrid;
- (unsigned long long)editingIndex;
- (struct { BOOL x1; double x2; double x3; double x4; double x5; double x6; unsigned long long x7; double x8; /* Warning: unhandled array encoding: '[3@]}' */ id x9[3]; }*)flavorAttributes;
- (BOOL)freeFormLayoutMode;
- (BOOL)glRendererEnabled;
- (double)gridSpacing;
- (id)groupAtCellIndex:(long long)arg1;
- (BOOL)hasFocus;
- (double)iconSize;
- (id)imageBrowserContext;
- (unsigned long long)indexAtLocationOfDroppedItem;
- (id)init;
- (void)invalidateCellsLayoutAtIndexes:(id)arg1;
- (BOOL)isAnimating;
- (BOOL)labelsOnRight;
- (id)layoutManager;
- (BOOL)layoutOfCellAtIndexIsValid;
- (double)maxIconSize;
- (id)openGLContextCreateIfNeeded:(BOOL)arg1;
- (void)renderCell:(id)arg1 components:(int)arg2;
- (int)renderLevel;
- (id)renderer;
- (id)selectionIndexes;
- (void)selectionRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3;
- (void)setCellsStyleMask:(unsigned long long)arg1;
- (void)setClickableArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 target:(id)arg2 selector:(SEL)arg3 info:(id)arg4;
- (void)setContext:(struct CGContext { }*)arg1;
- (void)setGridSpacing:(double)arg1;
- (void)setIconSize:(double)arg1;
- (void)setImageBrowserContext:(id)arg1;
- (void)setLabelsOnRight:(BOOL)arg1;
- (void)setMaxIconSize:(double)arg1;
- (void)setNextFrameTime:(double)arg1;
- (void)setTextSize:(double)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setupTextAttributes;
- (void)setupWithImageBrowser:(id)arg1;
- (BOOL)shadowsCells;
- (BOOL)shouldBypassDrawingForCell:(id)arg1;
- (BOOL)showPlayerControls;
- (BOOL)spaceOutCellsAtDropLocation;
- (void)switchOffCARenderer;
- (void)switchOnCARenderer;
- (double)textSize;
- (BOOL)trackingOfRequestingViewsEnabled;
- (void)validateCellLayoutAtIndex:(unsigned long long)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (id)window;

@end
