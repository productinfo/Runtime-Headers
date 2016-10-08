/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSNavScopeView : NSView {
    NSButton * _editButton;
    unsigned int  _isEditing;
    NSButton * _plusButton;
    NSNavNode * _queryNode;
    unsigned int  _reserved;
    NSButton * _saveButton;
    NSMutableArray * _scopeButtons;
    NSArray * _searchTypeButtons;
    NSBox * _seperatorView;
    unsigned int  _shouldShowPlus;
    NSButton * _smartFolderTitle;
}

@property (nonatomic, readwrite) BOOL shouldShowPlus;

- (void)_addDefaultScopeButtons;
- (void)_addSearchTypeButtons;
- (id)_backgroundColor;
- (id)_createButtonWithTitle:(id)arg1;
- (void)_createEditButtonIfRequired;
- (void)_createPlusButtonIsRequired;
- (void)_createSaveButtonIfRequired;
- (void)_createSmartFolderTitleIfRequired;
- (void)_editButtonClick:(id)arg1;
- (void)_ensureSeperatorView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForButtonOnTheRight:(id)arg1;
- (void)_hideAllScopeButtons;
- (double)_lastScopeButtonX;
- (void)_layoutRightHandButtons;
- (void)_layoutViews:(id)arg1 startingInsetFromXOrigin:(double)arg2 insetFromTop:(double)arg3 withSpacing:(double)arg4 sizeToFit:(BOOL)arg5 horizontal:(BOOL)arg6;
- (id)_plusImage:(BOOL)arg1;
- (void)_searchFileNameButtonClicked:(id)arg1;
- (void)_selectCorrectScopeButton;
- (id)_selectedScopeButton;
- (void)_sizeButtonToFit:(id)arg1;
- (id)_smartFolderTitleString;
- (double)_startForSearchButtonsX;
- (void)_storeDefaultSearchScopeMode;
- (void)_syncScopeLayout;
- (void)_updatePlusButtonImage;
- (void)_updateSearchTypeButtons;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityRoleAttribute;
- (id)accessibilityValueAttribute;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)editButton;
- (BOOL)isEditing;
- (BOOL)isFlipped;
- (id)plusButton;
- (id)queryNode;
- (id)saveButton;
- (void)scopeButtonAction:(id)arg1;
- (Class)scopeButtonClass;
- (void)setCurrentDirectoryNode:(id)arg1;
- (void)setEditButton:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlusButton:(id)arg1;
- (void)setPlusButtonAction:(SEL)arg1 target:(id)arg2;
- (void)setQueryNode:(id)arg1;
- (void)setSaveButton:(id)arg1;
- (void)setSaveButtonAction:(SEL)arg1 target:(id)arg2;
- (void)setShouldShowPlus:(BOOL)arg1;
- (void)setSmartFolderTitleButton:(id)arg1;
- (BOOL)shouldShowPlus;
- (void)sizeToFit;
- (id)smartFolderTitleButton;
- (void)tile;
- (void)windowDidUpdate:(id)arg1;

@end
