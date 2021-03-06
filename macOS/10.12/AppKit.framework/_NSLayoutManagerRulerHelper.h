/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSLayoutManagerRulerHelper : NSObject {
    NSLayoutManager * _layoutManager;
    NSBox * _rulerAccView;
    NSControl * _rulerAccViewAlignmentButtons;
    NSTabWell * _rulerAccViewCenterTabWell;
    NSTabWell * _rulerAccViewDecimalTabWell;
    NSTabWell * _rulerAccViewLeftTabWell;
    NSPopUpButton * _rulerAccViewLists;
    NSTabWell * _rulerAccViewRightTabWell;
    NSPopUpButton * _rulerAccViewSpacing;
    NSPopUpButton * _rulerAccViewStyles;
    bool  temporarySpacingChange;
}

@property (atomic, readwrite) NSControl *alignments;
@property (atomic, readwrite) NSTabWell *centerTabWell;
@property (atomic, readwrite) NSTabWell *decimalTabWell;
@property (atomic, readwrite) NSTabWell *leftTabWell;
@property (atomic, readwrite) NSPopUpButton *lists;
@property (atomic, readwrite) NSTabWell *rightTabWell;
@property (atomic, readwrite, retain) NSBox *rulerAccessoryView;
@property (atomic, readwrite) NSPopUpButton *spacings;
@property (atomic, readwrite) NSPopUpButton *styles;

- (void)_doUserParagraphStyleLineHeightMultiple:(double)arg1 min:(double)arg2 max:(double)arg3 lineSpacing:(double)arg4 paragraphSpacingBefore:(double)arg5 after:(double)arg6 isFinal:(BOOL)arg7;
- (void)_doUserRemoveMarkerFormatInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_doUserSetAttributes:(id)arg1 removeAttributes:(id)arg2;
- (void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2;
- (void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2 startingItemNumber:(long long)arg3 forceStartingItemNumber:(BOOL)arg4;
- (void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2 startingItemNumber:(long long)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 level:(unsigned long long)arg5;
- (unsigned long long)_markerLevelForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_rulerAccView;
- (void)_rulerAccViewAlignmentAction:(id)arg1;
- (void)_rulerAccViewListsAction:(id)arg1;
- (void)_rulerAccViewSetUpLists;
- (void)_rulerAccViewSpacingAction:(id)arg1;
- (void)_rulerAccViewStylesAction:(id)arg1;
- (void)_rulerAccViewUpdateStyles:(id)arg1;
- (id)alignments;
- (id)centerTabWell;
- (void)dealloc;
- (id)decimalTabWell;
- (double)defaultLineHeightForFont:(id)arg1;
- (id)initWithLayoutManager:(id)arg1;
- (id)leftTabWell;
- (id)lists;
- (id)rightTabWell;
- (id)rulerAccessoryView;
- (id)rulerAccessoryViewForTextView:(id)arg1 paragraphStyle:(id)arg2 ruler:(id)arg3 enabled:(BOOL)arg4;
- (id)rulerMarkersForTextView:(id)arg1 paragraphStyle:(id)arg2 ruler:(id)arg3;
- (void)setAlignments:(id)arg1;
- (void)setCenterTabWell:(id)arg1;
- (void)setDecimalTabWell:(id)arg1;
- (void)setLeftTabWell:(id)arg1;
- (void)setLists:(id)arg1;
- (void)setRightTabWell:(id)arg1;
- (void)setRulerAccessoryView:(id)arg1;
- (void)setSpacings:(id)arg1;
- (void)setStyles:(id)arg1;
- (id)spacings;
- (id)styles;

@end
