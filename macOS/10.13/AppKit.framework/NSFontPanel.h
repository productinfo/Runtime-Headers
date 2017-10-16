/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSFontPanel : NSPanel {
    id  _accessoryView;
    id  _actionButton;
    id  _addCollectionButton;
    id  _availableSizes;
    void * _carbonNotification;
    id  _collectionLabel;
    NSArray * _collectionNames;
    id  _editSizeList;
    id  _editSizeListBox;
    id  _editSizeSliderBox;
    id  _editSizeSliderMaxField;
    id  _editSizeSliderMinField;
    id  _faceDivider;
    id  _faceList;
    id  _familyLabel;
    id  _familyList;
    id  _fixedListButton;
    id  _fontEffectsBox;
    id  _fontPanelContentView;
    double  _fontPanelPreviewHeight;
    id  _fontPanelToolbar;
    struct __fpFlags { 
        unsigned int setFontChange : 1; 
        unsigned int setFontAttributeChange : 1; 
        unsigned int _delRespFamily : 1; 
        unsigned int _delRespFace : 1; 
        unsigned int _delRespSize : 1; 
        unsigned int _delRespColl : 1; 
        unsigned int _collectionDisabled : 1; 
        unsigned int _sizeDisabled : 1; 
        unsigned int _faceDisabled : 1; 
        unsigned int showEffects : 1; 
        unsigned int _uiMode : 8; 
        unsigned int _miniMode : 1; 
        unsigned int _reserved : 13; 
    }  _fpFlags;
    id  _fullSizeHeightConstraint;
    id  _mainCollectionList;
    id  _mainSplitView;
    NSFontManager * _manager;
    id  _miniModeBox;
    id  _mmCollectionList;
    id  _mmFaceList;
    id  _mmFamilyList;
    id  _mmSizeList;
    id  _newSizeField;
    id  _preview;
    id  _previewContainer;
    id  _regularModeBox;
    id  _removeCollectionButton;
    id  _searchField;
    id  _selection;
    id  _sizeBox;
    id  _sizeEditWindow;
    id  _sizeField;
    id  _sizeLabel;
    id  _sizeList;
    id  _sizeSlider;
    id  _sizeSliderBox;
    int  _sizeStyle;
    id  _sizeStyleButton;
    id  _sliderButton;
    id  _targetObject;
    id  _typographyPanel;
}

@property (atomic, readwrite, retain) NSView *accessoryView;
@property (getter=isEnabled, atomic, readwrite) BOOL enabled;
@property (atomic, readwrite) BOOL worksWhenModal;

+ (id)_createFontPanelSizeRep;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
+ (id)sharedFontPanel;
+ (BOOL)sharedFontPanelExists;

- (void)_addSizeToList:(id)arg1;
- (BOOL)_canShowEffects;
- (void*)_carbonNotification;
- (void)_changeSizeStyle:(id)arg1;
- (void)_checkCollectionMoveOut:(long long)arg1;
- (void)_checkMiniMode:(double)arg1;
- (void)_chooseBestMatchingFace;
- (void)_chooseCollection:(id)arg1;
- (void)_chooseFace:(id)arg1;
- (void)_chooseFamily:(id)arg1;
- (void)_chooseSize:(id)arg1;
- (void)_chooseSizeFromField:(id)arg1;
- (void)_chooseSizeFromList:(id)arg1;
- (void)_chooseSizeFromSlider:(id)arg1;
- (void)_collectionsChanged:(id)arg1;
- (id)_createFontPanelSizeRep;
- (id)_currentCollectionName;
- (id)_currentFamilyName;
- (id)_currentFont;
- (id)_fontAttributes;
- (void)_fontPanelDidLoad;
- (void)_fontPanelRemoveCollectionSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3;
- (BOOL)_inHideCollectionsMode;
- (BOOL)_inHideFaceMode;
- (BOOL)_inMiniMode;
- (void)_installAccessoryView:(id)arg1;
- (void)_notifyTypographyPanel;
- (void)_openExtrasPopup:(id)arg1;
- (void)_populateMiniMode;
- (void)_populatePopup:(id)arg1 withTableView:(id)arg2;
- (void)_reflectFont;
- (void)_reflectSize;
- (void)_removeSizeFromList:(id)arg1;
- (void)_resetSizeList:(id)arg1;
- (void)_searchChanged:(id)arg1;
- (id)_selectedSize;
- (void)_sendCarbonNotification;
- (void)_setAttributes:(id)arg1 isMultiple:(BOOL)arg2;
- (void)_setFont:(id)arg1;
- (void)_setPreviewFont:(id)arg1;
- (void)_setRecents:(id)arg1;
- (void)_setup;
- (BOOL)_showEffects;
- (void)_sizeEditDone:(id)arg1;
- (void)_sizeListChanged:(id)arg1;
- (void)_sortCollections;
- (void)_toggleCollections:(long long)arg1 animate:(BOOL)arg2;
- (void)_togglePreview:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_toggleTypographyPanel;
- (id)_typographyPanel;
- (void)_updateFontPreview;
- (void)_updateFontPreviewFont;
- (void)_validateExtrasButton:(id)arg1;
- (void)_validateFaces:(long long)arg1;
- (void)_validateFontPanelFontAttributes;
- (void)_validateSizes:(long long)arg1;
- (id)accessoryView;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)collectionButtonPressed:(id)arg1;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)convertAttributes:(id)arg1;
- (void)dealloc;
- (unsigned long long)draggingSourceOperationMaskForTableView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (BOOL)isEnabled;
- (void)loadFaces:(id)arg1;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)panelConvertFont:(id)arg1;
- (oneway void)release;
- (void)reloadDefaultFontFamilies;
- (BOOL)removeItemForTableView:(id)arg1 pasteboard:(id)arg2 operation:(unsigned long long)arg3;
- (void)setAccessoryView:(id)arg1;
- (void)setCarbonNotification:(void*)arg1;
- (void)setChooser:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setPanelFont:(id)arg1 isMultiple:(BOOL)arg2;
- (void)setSize:(id)arg1;
- (void)setSizeTitle:(id)arg1;
- (void)setWorksWhenModal:(BOOL)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)windowDidUpdate:(id)arg1;
- (struct CGSize { double x1; double x2; })windowWillResize:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
- (BOOL)worksWhenModal;

@end