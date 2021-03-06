/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
 */

@interface QFilterCell : NSCell {
    int  IDX;
    NSObject * attribute;
    BOOL  forceImmediateQFilterCellDisplay;
    struct QFilterInfo { id x1; struct QuartzFilterOptions {} x2; struct QuartzFilterOptionsInfo {} *x3; id x4; id x5; BOOL x6[5]; struct AssignComponentInfo { id x_7_1_1; id x_7_1_2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x_7_1_3; void*x_7_1_4; int x_7_1_5; void*x_7_1_6; int x_7_1_7[12]; long long x_7_1_8[12]; int x_7_1_9[4][5]; } x7; struct DefaultComponentInfo { id x_8_1_1; id x_8_1_2; void*x_8_1_3; void*x_8_1_4; int x_8_1_5; void*x_8_1_6; int x_8_1_7[12]; long long x_8_1_8[12]; int x_8_1_9[4][5]; } x8; struct IntermediateComponentInfo { id x_9_1_1; void*x_9_1_2; void*x_9_1_3; int x_9_1_4; void*x_9_1_5; int x_9_1_6[16]; int x_9_1_7[16]; long long x_9_1_8[16]; int x_9_1_9[16][7]; int x_9_1_10[4][5]; } x9; struct TargetComponentInfo { id x_10_1_1; void*x_10_1_2; void*x_10_1_3; int x_10_1_4; void*x_10_1_5; int x_10_1_6[16]; long long x_10_1_7[16]; int x_10_1_8[4][5]; } x10; struct RenderingIntentInfo { int x_11_1_1[16]; int x_11_1_2[16]; unsigned int x_11_1_3[16]; } x11; id x12; } * info;
    BOOL  initialized;
    QFilterCellOwner * owner;
    NSView * view;
}

+ (BOOL)needsToRemainInViewHierarchy;

- (int)IDX;
- (id)attribute;
- (void)awakeFromNib;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)editWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (id)initAll:(struct QFilterInfo { id x1; struct QuartzFilterOptions {} x2; struct QuartzFilterOptionsInfo {} *x3; id x4; id x5; BOOL x6[5]; struct AssignComponentInfo { id x_7_1_1; id x_7_1_2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x_7_1_3; void*x_7_1_4; int x_7_1_5; void*x_7_1_6; int x_7_1_7[12]; long long x_7_1_8[12]; int x_7_1_9[4][5]; } x7; struct DefaultComponentInfo { id x_8_1_1; id x_8_1_2; void*x_8_1_3; void*x_8_1_4; int x_8_1_5; void*x_8_1_6; int x_8_1_7[12]; long long x_8_1_8[12]; int x_8_1_9[4][5]; } x8; struct IntermediateComponentInfo { id x_9_1_1; void*x_9_1_2; void*x_9_1_3; int x_9_1_4; void*x_9_1_5; int x_9_1_6[16]; int x_9_1_7[16]; long long x_9_1_8[16]; int x_9_1_9[16][7]; int x_9_1_10[4][5]; } x9; struct TargetComponentInfo { id x_10_1_1; void*x_10_1_2; void*x_10_1_3; int x_10_1_4; void*x_10_1_5; int x_10_1_6[16]; long long x_10_1_7[16]; int x_10_1_8[4][5]; } x10; struct RenderingIntentInfo { int x_11_1_1[16]; int x_11_1_2[16]; unsigned int x_11_1_3[16]; } x11; id x12; }*)arg1 owner:(id)arg2 index:(int)arg3;
- (id)initIndex:(int)arg1;
- (id)initWithFilterInfo:(struct QFilterInfo { id x1; struct QuartzFilterOptions {} x2; struct QuartzFilterOptionsInfo {} *x3; id x4; id x5; BOOL x6[5]; struct AssignComponentInfo { id x_7_1_1; id x_7_1_2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x_7_1_3; void*x_7_1_4; int x_7_1_5; void*x_7_1_6; int x_7_1_7[12]; long long x_7_1_8[12]; int x_7_1_9[4][5]; } x7; struct DefaultComponentInfo { id x_8_1_1; id x_8_1_2; void*x_8_1_3; void*x_8_1_4; int x_8_1_5; void*x_8_1_6; int x_8_1_7[12]; long long x_8_1_8[12]; int x_8_1_9[4][5]; } x8; struct IntermediateComponentInfo { id x_9_1_1; void*x_9_1_2; void*x_9_1_3; int x_9_1_4; void*x_9_1_5; int x_9_1_6[16]; int x_9_1_7[16]; long long x_9_1_8[16]; int x_9_1_9[16][7]; int x_9_1_10[4][5]; } x9; struct TargetComponentInfo { id x_10_1_1; void*x_10_1_2; void*x_10_1_3; int x_10_1_4; void*x_10_1_5; int x_10_1_6[16]; long long x_10_1_7[16]; int x_10_1_8[4][5]; } x10; struct RenderingIntentInfo { int x_11_1_1[16]; int x_11_1_2[16]; unsigned int x_11_1_3[16]; } x11; id x12; }*)arg1 owner:(id)arg2;
- (BOOL)initialized;
- (void)instantiateView;
- (void)loadPopup:(id)arg1 names:(id)arg2 skip:(long long)arg3 current:(long long)arg4;
- (id)objectValue;
- (void)removeViewFromSuperview;
- (void)setAttribute:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setView:(id)arg1;
- (void)setViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (void)trackMouse:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (void)updateFilterInfo;
- (void)updateUI;
- (BOOL)validateMenuItem:(id)arg1;
- (id)view;

@end
