/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface _MKPlaceReservationInfo : NSObject {
    NSString * _attributionProviderDisplayName;
    NSImage * _attributionProviderLogoImage;
    NSArray * _openTimes;
    <_MKPlaceReservationDelegate> * _reservationDelegate;
}

@property (nonatomic, readonly, copy) NSString *attributionProviderDisplayName;
@property (nonatomic, readonly) NSImage *attributionProviderLogoImage;
@property (nonatomic, readonly, copy) NSArray *openTimes;
@property (nonatomic, readonly) <_MKPlaceReservationDelegate> *reservationDelegate;

- (void).cxx_destruct;
- (id)attributionProviderDisplayName;
- (id)attributionProviderLogoImage;
- (id)initWithOpenTimes:(id)arg1 attributionProviderName:(id)arg2 providerLogoImage:(id)arg3 delegate:(id)arg4;
- (id)openTimes;
- (id)reservationDelegate;

@end
