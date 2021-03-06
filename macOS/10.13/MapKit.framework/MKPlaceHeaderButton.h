/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKPlaceHeaderButton : NSButton <_MKPlaceActionButtonControllerProtocol> {
    _MKPlaceActionButtonController * _buttonController;
    unsigned long long  _buttonType;
    NSLayoutConstraint * _heightConstraint;
    BOOL  _primary;
}

@property (nonatomic, readwrite) _MKPlaceActionButtonController *buttonController;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)_primaryButtonTextColor;
- (void)_updateStyleNonPrimaryButton;
- (void)_updateStylePrimaryButton;
- (void)applyButtonDefaultConfiguration;
- (id)buttonController;
- (void)buttonSelected:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (id)init;
- (id)initWithPrimaryType:(unsigned long long)arg1;
- (void)placeActionbuttonControllerTextDidChanged:(id)arg1;
- (void)setAttributesWithTitle:(id)arg1 subTitle:(id)arg2;
- (void)setButtonController:(id)arg1;
- (void)setPrimaryButtonTitle:(id)arg1;

@end
