/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSegmentItem : NSObject <NSCoding, NSCopying> {
    NSImage * _alternateImage;
    struct { 
        unsigned int needsRecalc : 1; 
        unsigned int selected : 1; 
        unsigned int disabled : 1; 
        unsigned int showMenuIndicator : 1; 
        unsigned int mouseInside : 1; 
        unsigned int inactiveStateDisablesRollovers : 1; 
        unsigned int imageScaling : 2; 
        unsigned int showsBadge : 1; 
        unsigned int springLoadingHighlight : 2; 
        unsigned int reserved : 21; 
    }  _flags;
    double  _fullWidth;
    NSImage * _image;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageRect;
    NSString * _label;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _labelRect;
    NSMenu * _menu;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _menuIndRect;
    NSSegmentedCell * _owningCell;
    double  _shrinkage;
    long long  _tag;
    NSString * _toolTip;
    long long  _toolTipTag;
    double  _width;
}

@property (getter=_alternateImage, setter=_setAlternateImage:, atomic, readwrite, retain) NSImage *alternateImage;
@property (getter=_badgeEmblem, atomic, readonly) NSImage *badgeEmblem;
@property (getter=_badgeValue, setter=_setBadgeValue:, atomic, readwrite) long long badgeValue;
@property (getter=_badgeView, setter=_setBadgeView:, atomic, readwrite, retain) NSImageView *badgeView;
@property (getter=_disabled, setter=_setDisabled:, atomic, readwrite) BOOL disabled;
@property (getter=_displayWidth, atomic, readonly) double displayWidth;
@property (getter=_fullWidth, atomic, readonly) double fullWidth;
@property (getter=_image, setter=_setImage:, atomic, readwrite, retain) NSImage *image;
@property (getter=_imageRect, atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageRect;
@property (getter=_imageScaling, setter=_setImageScaling:, atomic, readwrite) unsigned long long imageScaling;
@property (getter=_inactiveStateDisablesRollovers, setter=_setInactiveStateDisablesRollovers:, atomic, readwrite) BOOL inactiveStateDisablesRollovers;
@property (atomic, readwrite) long long index;
@property (getter=_label, setter=_setLabel:, atomic, readwrite, copy) NSString *label;
@property (getter=_labelRect, atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } labelRect;
@property (getter=_menu, setter=_setMenu:, atomic, readwrite, retain) NSMenu *menu;
@property (getter=_menuIndRect, atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } menuIndRect;
@property (getter=_mouseInside, setter=_setMouseInside:, atomic, readwrite) BOOL mouseInside;
@property (getter=_needsRecalc, atomic, readonly) BOOL needsRecalc;
@property (atomic, readwrite, retain) NSSegmentItemView *segmentItemView;
@property (getter=_selected, setter=_setSelected:, atomic, readwrite) BOOL selected;
@property (getter=_showMenuIndicator, setter=_setShowMenuIndicator:, atomic, readwrite) BOOL showMenuIndicator;
@property (getter=_showsBadge, setter=_setShowsBadge:, atomic, readwrite) BOOL showsBadge;
@property (getter=_shrinkage, setter=_setShrinkage:, atomic, readwrite) double shrinkage;
@property (getter=_springLoadingHighlight, setter=_setSpringLoadingHighlight:, atomic, readwrite) long long springLoadingHighlight;
@property (atomic, readwrite) long long tag;
@property (atomic, readwrite, copy) NSString *toolTip;
@property (atomic, readwrite) long long toolTipTag;
@property (setter=_setWidth:, atomic, readwrite) double width;

- (id)_alternateImage;
- (id)_auxiliaryStorage;
- (id)_badgeEmblem;
- (id)_badgeEmblemForValue:(long long)arg1;
- (long long)_badgeValue;
- (id)_badgeView;
- (BOOL)_disabled;
- (double)_displayWidth;
- (double)_fullWidth;
- (id)_image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageRect;
- (unsigned long long)_imageScaling;
- (BOOL)_inactiveStateDisablesRollovers;
- (id)_label;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelRect;
- (id)_menu;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_menuIndRect;
- (BOOL)_mouseInside;
- (BOOL)_needsRecalc;
- (void)_recalcRectsForCell:(id)arg1;
- (BOOL)_selected;
- (void)_setAlternateImage:(id)arg1;
- (void)_setBadgeValue:(long long)arg1;
- (void)_setBadgeView:(id)arg1;
- (void)_setDisabled:(BOOL)arg1;
- (void)_setImage:(id)arg1;
- (void)_setImageScaling:(unsigned long long)arg1;
- (void)_setInactiveStateDisablesRollovers:(BOOL)arg1;
- (void)_setLabel:(id)arg1;
- (void)_setMenu:(id)arg1;
- (void)_setMouseInside:(BOOL)arg1;
- (void)_setNeedsRecalc;
- (void)_setOwningCell:(id)arg1;
- (void)_setSelected:(BOOL)arg1;
- (void)_setShowMenuIndicator:(BOOL)arg1;
- (void)_setShowsBadge:(BOOL)arg1;
- (void)_setShrinkage:(double)arg1;
- (void)_setSpringLoadingHighlight:(long long)arg1;
- (void)_setToolTipTag:(long long)arg1;
- (void)_setWidth:(double)arg1;
- (BOOL)_showMenuIndicator;
- (BOOL)_showsBadge;
- (double)_shrinkage;
- (long long)_springLoadingHighlight;
- (long long)_toolTipTag;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)disabled;
- (void)encodeWithCoder:(id)arg1;
- (long long)index;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)segmentItemView;
- (void)setDisabled:(BOOL)arg1;
- (void)setIndex:(long long)arg1;
- (void)setSegmentItemView:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)setToolTip:(id)arg1;
- (void)setToolTipTag:(long long)arg1;
- (long long)tag;
- (id)toolTip;
- (long long)toolTipTag;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint { double x1; double x2; })arg3 userData:(void*)arg4;
- (double)width;

@end
