/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNSuggestionsManager : NSObject <MNLocationManagerObserver> {
    BOOL  _changingState;
    BOOL  _locationsAvailable;
    NSHashTable * _observers;
    unsigned long long  _state;
    NSMutableDictionary * _suggestionsStorage;
}

@property (atomic, readonly) NSArray *allSuggestions;
@property (atomic, readwrite) BOOL changingState;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) BOOL locationsAvailable;
@property (atomic, readwrite, retain) NSHashTable *observers;
@property (nonatomic, readwrite) unsigned long long state;
@property (atomic, readwrite, retain) NSMutableDictionary *suggestionsStorage;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addFakeSuggestion:(id)arg1;
- (void)_notifyObserversDidAddSuggestion:(id)arg1;
- (void)_notifyObserversDidUpdateSuggestions;
- (void)_startListenForDebugTestNotifications;
- (void)_stopListenForDebugTestNotifications;
- (void)_updateLocationsAvailable;
- (void)_verifyHaveObservers;
- (void)addObserver:(id)arg1;
- (void)addSuggestions:(id)arg1;
- (id)allSuggestions;
- (BOOL)changingState;
- (void)dealloc;
- (id)init;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (BOOL)locationsAvailable;
- (id)observers;
- (BOOL)refreshSuggestions;
- (void)removeObserver:(id)arg1;
- (void)setChangingState:(BOOL)arg1;
- (void)setLocationsAvailable:(BOOL)arg1;
- (void)setObservers:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSuggestionsStorage:(id)arg1;
- (unsigned long long)state;
- (id)suggestionsStorage;

@end
