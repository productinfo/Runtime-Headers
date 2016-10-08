/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSUserNotification : NSObject <NSCoding, NSCopying> {
    id  _internal;
}

@property (atomic, readwrite) BOOL _actionButtonIsSnooze;
@property (getter=_isAllDayEvent, atomic, readwrite) BOOL _allDayEvent;
@property (atomic, readwrite, copy) NSArray *_alternateActionButtonTitles;
@property (atomic, readonly) unsigned long long _alternateActionIndex;
@property (atomic, readwrite) BOOL _alwaysShowAlternateActionMenu;
@property (atomic, readwrite) unsigned long long _badgeCount;
@property (atomic, readwrite) BOOL _clearable;
@property (atomic, readwrite, copy) NSString *_dateString;
@property (atomic, readwrite, copy) NSDateComponents *_deliveryExpiration;
@property (atomic, readwrite) BOOL _dismissAfterDuration;
@property (atomic, readwrite) unsigned long long _displayStyle;
@property (atomic, readwrite, copy) NSDate *_eventDate;
@property (atomic, readwrite) BOOL _hasAttachment;
@property (nonatomic, readonly) BOOL _hasContentImage;
@property (atomic, readwrite, copy) NSImage *_identityImage;
@property (nonatomic, readonly) NSData *_identityImageData;
@property (atomic, readwrite) BOOL _identityImageHasBorder;
@property (atomic, readwrite) unsigned long long _identityImageStyle;
@property (atomic, readwrite) BOOL _ignoresDoNotDisturb;
@property (atomic, readwrite, copy) NSURL *_imageURL;
@property (atomic, readwrite) BOOL _lockscreenOnly;
@property (atomic, readonly) NSDate *_nextFireDate;
@property (atomic, readwrite) BOOL _persistent;
@property (atomic, readwrite) BOOL _poofsOnCancel;
@property (atomic, readwrite, copy) NSString *_proxyIdentifier;
@property (getter=_isRemote, atomic, readonly) BOOL _remote;
@property (atomic, readwrite) BOOL _showsButtons;
@property (atomic, readonly) double _snoozeInterval;
@property (atomic, readonly) BOOL _snoozed;
@property (atomic, readonly) double _snoozedDate;
@property (atomic, readwrite, retain) id _storageID;
@property (atomic, readwrite) unsigned long long _style;
@property (atomic, readwrite) BOOL _substitutesEmojiInResponse;
@property (atomic, readwrite, copy) NSString *actionButtonTitle;
@property (atomic, readonly) long long activationType;
@property (atomic, readonly, copy) NSDate *actualDeliveryDate;
@property (atomic, readwrite, copy) NSArray *additionalActions;
@property (atomic, readonly, copy) NSUserNotificationAction *additionalActivationAction;
@property (atomic, readwrite, copy) NSImage *contentImage;
@property (atomic, readwrite, copy) NSDate *deliveryDate;
@property (atomic, readwrite, copy) NSDateComponents *deliveryRepeatInterval;
@property (atomic, readwrite, copy) NSTimeZone *deliveryTimeZone;
@property (atomic, readwrite, copy) NSDateComponents *duration;
@property (atomic, readwrite) BOOL hasActionButton;
@property (atomic, readwrite) BOOL hasReplyButton;
@property (atomic, readwrite, copy) NSString *identifier;
@property (atomic, readwrite, copy) NSString *informativeText;
@property (atomic, readwrite, copy) NSString *otherButtonTitle;
@property (atomic, readwrite, copy) NSArray *peopleIdentifiers;
@property (getter=isPresented, atomic, readonly) BOOL presented;
@property (getter=isRemote, atomic, readonly) BOOL remote;
@property (atomic, readonly, copy) NSAttributedString *response;
@property (atomic, readwrite, copy) NSString *responsePlaceholder;
@property (atomic, readwrite, copy) NSString *soundName;
@property (atomic, readwrite, copy) NSString *subtitle;
@property (atomic, readwrite, copy) NSString *title;
@property (atomic, readwrite, copy) NSDictionary *userInfo;

+ (void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id*)arg5 returnDateAfter:(id*)arg6;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)supportsSecureCoding;

- (BOOL)_areIdentifiersEqual:(id)arg1;
- (BOOL)_hasContentImage;
- (id)_identityImageData;
- (id)_nextFireDate;
- (void)_setActivationType:(long long)arg1;
- (void)_setActualDeliveryDate:(id)arg1;
- (void)_setIdentityImage:(id)arg1 withIdentifier:(id)arg2;
- (void)_setPresented:(BOOL)arg1;
- (void)_setRemote:(BOOL)arg1;
- (void)_setSnoozeInterval:(double)arg1;
- (void)_setSnoozed:(BOOL)arg1;
- (void)_setSnoozedDate:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setContentImage:(id)arg1;

@end