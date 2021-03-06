/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface _NSConcreteUserNotification : NSUserNotification <NSSecureCoding> {
    BOOL  _actionButtonIsSnooze;
    NSString * _actionButtonTitle;
    long long  _activationType;
    NSDate * _actualDeliveryDate;
    NSArray * _additionalActions;
    NSUserNotificationAction * _additionalActivationAction;
    BOOL  _allDayEvent;
    NSArray * _alternateActionButtonTitles;
    unsigned long long  _alternateActionIndex;
    BOOL  _alwaysShowAlternateActionMenu;
    unsigned long long  _badgeCount;
    BOOL  _clearable;
    NSData * _contentImageData;
    NSString * _dateString;
    NSDate * _deliveryDate;
    NSDateComponents * _deliveryExpiration;
    NSDateComponents * _deliveryRepeatInterval;
    NSTimeZone * _deliveryTimeZone;
    BOOL  _dismissAfterDuration;
    unsigned long long  _displayStyle;
    NSDateComponents * _duration;
    NSData * _encodedResponse;
    NSData * _encodedUserInfo;
    NSDate * _eventDate;
    BOOL  _hasActionButton;
    BOOL  _hasAttachment;
    BOOL  _hasReplyButton;
    NSString * _identifier;
    NSData * _identityImageData;
    unsigned long long  _identityImageStyle;
    BOOL  _ignoresDoNotDisturb;
    NSURL * _imageURL;
    NSString * _informativeText;
    BOOL  _lockscreenOnly;
    NSString * _otherButtonTitle;
    NSArray * _peopleIdentifiers;
    BOOL  _persistent;
    BOOL  _poofsOnCancel;
    BOOL  _presented;
    NSString * _proxyIdentifier;
    BOOL  _remote;
    NSString * _responsePlaceholder;
    NSData * _secureEncodedUserInfo;
    BOOL  _showsButtons;
    double  _snoozeInterval;
    BOOL  _snoozed;
    double  _snoozedDate;
    NSString * _soundName;
    id  _storageID;
    unsigned long long  _style;
    BOOL  _substitutesEmojiInResponse;
    NSString * _subtitle;
    NSString * _title;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)_actionButtonIsSnooze;
- (id)_alternateActionButtonTitles;
- (unsigned long long)_alternateActionIndex;
- (BOOL)_alwaysShowAlternateActionMenu;
- (BOOL)_areIdentifiersEqual:(id)arg1;
- (unsigned long long)_badgeCount;
- (BOOL)_clearable;
- (id)_dateString;
- (id)_deliveryExpiration;
- (BOOL)_dismissAfterDuration;
- (unsigned long long)_displayStyle;
- (id)_eventDate;
- (BOOL)_hasAttachment;
- (BOOL)_hasContentImage;
- (id)_identityImage;
- (id)_identityImageData;
- (BOOL)_identityImageHasBorder;
- (unsigned long long)_identityImageStyle;
- (BOOL)_ignoresDoNotDisturb;
- (id)_imageURL;
- (BOOL)_isAllDayEvent;
- (BOOL)_isRemote;
- (BOOL)_lockscreenOnly;
- (id)_nextFireDate;
- (BOOL)_persistent;
- (BOOL)_poofsOnCancel;
- (id)_proxyIdentifier;
- (void)_setActivationType:(long long)arg1;
- (void)_setActualDeliveryDate:(id)arg1;
- (void)_setAdditionalActivationAction:(id)arg1;
- (void)_setAlternateActionIndex:(unsigned long long)arg1;
- (void)_setEncodedUserInfo:(id)arg1;
- (void)_setIdentityImage:(id)arg1 withIdentifier:(id)arg2;
- (void)_setPresented:(BOOL)arg1;
- (void)_setResponse:(id)arg1;
- (void)_setSnoozeInterval:(double)arg1;
- (void)_setSnoozed:(BOOL)arg1;
- (void)_setSnoozedDate:(double)arg1;
- (BOOL)_showsButtons;
- (double)_snoozeInterval;
- (BOOL)_snoozed;
- (double)_snoozedDate;
- (id)_storageID;
- (unsigned long long)_style;
- (BOOL)_substitutesEmojiInResponse;
- (id)_subtitle;
- (id)actionButtonTitle;
- (long long)activationType;
- (id)actualDeliveryDate;
- (id)additionalActions;
- (id)additionalActivationAction;
- (id)contentImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)deliveryDate;
- (id)deliveryRepeatInterval;
- (id)deliveryTimeZone;
- (id)description;
- (id)duration;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasActionButton;
- (BOOL)hasReplyButton;
- (unsigned long long)hash;
- (id)identifier;
- (id)informativeText;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPresented;
- (BOOL)isRemote;
- (id)otherButtonTitle;
- (id)peopleIdentifiers;
- (id)response;
- (id)responsePlaceholder;
- (void)setActionButtonTitle:(id)arg1;
- (void)setAdditionalActions:(id)arg1;
- (void)setContentImage:(id)arg1;
- (void)setDeliveryDate:(id)arg1;
- (void)setDeliveryRepeatInterval:(id)arg1;
- (void)setDeliveryTimeZone:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setHasActionButton:(BOOL)arg1;
- (void)setHasReplyButton:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setOtherButtonTitle:(id)arg1;
- (void)setPeopleIdentifiers:(id)arg1;
- (void)setRemote:(BOOL)arg1;
- (void)setResponsePlaceholder:(id)arg1;
- (void)setSoundName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)set_actionButtonIsSnooze:(BOOL)arg1;
- (void)set_allDayEvent:(BOOL)arg1;
- (void)set_alternateActionButtonTitles:(id)arg1;
- (void)set_alwaysShowAlternateActionMenu:(BOOL)arg1;
- (void)set_badgeCount:(unsigned long long)arg1;
- (void)set_clearable:(BOOL)arg1;
- (void)set_dateString:(id)arg1;
- (void)set_deliveryExpiration:(id)arg1;
- (void)set_dismissAfterDuration:(BOOL)arg1;
- (void)set_displayStyle:(unsigned long long)arg1;
- (void)set_eventDate:(id)arg1;
- (void)set_hasAttachment:(BOOL)arg1;
- (void)set_identityImage:(id)arg1;
- (void)set_identityImageHasBorder:(BOOL)arg1;
- (void)set_identityImageStyle:(unsigned long long)arg1;
- (void)set_ignoresDoNotDisturb:(BOOL)arg1;
- (void)set_imageURL:(id)arg1;
- (void)set_lockscreenOnly:(BOOL)arg1;
- (void)set_persistent:(BOOL)arg1;
- (void)set_poofsOnCancel:(BOOL)arg1;
- (void)set_proxyIdentifier:(id)arg1;
- (void)set_showsButtons:(BOOL)arg1;
- (void)set_storageID:(id)arg1;
- (void)set_style:(unsigned long long)arg1;
- (void)set_substitutesEmojiInResponse:(BOOL)arg1;
- (void)set_subtitle:(id)arg1;
- (id)soundName;
- (id)subtitle;
- (id)title;
- (id)userInfo;

@end
