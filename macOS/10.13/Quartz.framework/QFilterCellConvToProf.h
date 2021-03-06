/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
 */

@interface QFilterCellConvToProf : QFilterCell {
    NSBox * ConvToProfBox;
    NSPopUpButton * ConvToProfColorModels;
    NSPopUpButton * ConvToProfObjects;
    NSPopUpButton * ConvToProfProfiles;
    NSTextField * ConvToProfText1;
    QFilterConvToProfView * ConvToProfView;
}

+ (BOOL)needsToRemainInViewHierarchy;

- (void)ConvToProfColorModelObjectAction:(id)arg1;
- (void)ConvToProfProfileAction:(id)arg1;
- (void)instantiateView;
- (void)updateUI;

@end
