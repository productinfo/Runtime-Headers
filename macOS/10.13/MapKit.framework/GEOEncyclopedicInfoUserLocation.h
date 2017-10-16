/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface GEOEncyclopedicInfoUserLocation : NSObject <GEOEncyclopedicInfo> {
    MKMapItem * _mapItem;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOMapItemAttribution *encyclopedicAttribution;
@property (nonatomic, readonly) NSArray *factoids;
@property (nonatomic, readonly) BOOL hasPairOfFactoids;
@property (nonatomic, readonly) BOOL hasTextBlock;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) MKMapItem *mapItem;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) NSString *textBlockText;
@property (nonatomic, readonly) NSString *textBlockTitle;

- (void).cxx_destruct;
- (id)encyclopedicAttribution;
- (id)factoids;
- (BOOL)hasPairOfFactoids;
- (BOOL)hasTextBlock;
- (id)initWithMapItem:(id)arg1;
- (id)mapItem;
- (void)setMapItem:(id)arg1;
- (id)textBlockText;
- (id)textBlockTitle;

@end