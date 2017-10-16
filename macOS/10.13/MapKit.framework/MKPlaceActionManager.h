/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKPlaceActionManager : NSObject <MKPlaceActionManagerProtocol> {
    MKPlaceCardActionItem * _brandStoreActionItem;
    MKPlaceCardActionItem * _callActionItem;
    TUCallProvider * _callProvider;
    MKPlaceCardActionItem * _favoriteActionItem;
    BOOL  _isCurrentLocation;
    id  _placeCardDelegate;
    BOOL  _placeInBookmarks;
    BOOL  _showContactActions;
    id  _transitCardDelegate;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) BOOL isCurrentLocation;
@property (nonatomic, readwrite) id placeCardDelegate;
@property (nonatomic, readwrite) BOOL placeInBookmarks;
@property (nonatomic, readwrite) BOOL showContactActions;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) id transitCardDelegate;

- (void).cxx_destruct;
- (void)_canMakeCalls:(id)arg1;
- (void)_enableStoreAction;
- (void)_launchMaps;
- (BOOL)_showReportAProblem;
- (id)contact;
- (id)createFooterActions;
- (id)createRowActions;
- (id)delegate;
- (id)favoriteItemForFooter:(BOOL)arg1;
- (id)init;
- (BOOL)isCurrentLocation;
- (id)mapItem;
- (void)openURL:(id)arg1;
- (unsigned long long)options;
- (void)performAction:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (id)placeCardDelegate;
- (BOOL)placeInBookmarks;
- (id)placeItem;
- (id)reportAProblemFooterAction;
- (void)setIsCurrentLocation:(BOOL)arg1;
- (void)setPlaceCardDelegate:(id)arg1;
- (void)setPlaceInBookmarks:(BOOL)arg1;
- (void)setShowContactActions:(BOOL)arg1;
- (void)setTransitCardDelegate:(id)arg1;
- (id)shortPlacecardFooterActions;
- (BOOL)showContactActions;
- (id)transitCardDelegate;
- (id)transitDelegate;
- (id)transitLineItem;

@end