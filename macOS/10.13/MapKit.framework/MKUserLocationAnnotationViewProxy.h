/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKRouteMatchedAnnotationPresentation, VKTrackableAnnotationPresentation> {
    MKAnnotationView * _annotationView;
    NSHashTable * _presentationCoordinateObservers;
}

@property (nonatomic, readwrite) MKAnnotationView *annotationView;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) struct { double x1; double x2; } presentationCoordinate;
@property (nonatomic, readwrite) double presentationCourse;
@property (nonatomic, readwrite, retain) GEORouteMatch *routeMatch;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) BOOL tracking;

- (void).cxx_destruct;
- (void)addPresentationCoordinateChangedObserver:(id)arg1;
- (id)annotationView;
- (struct { double x1; double x2; })presentationCoordinate;
- (double)presentationCourse;
- (void)removePresentationCoordinateChangedObserver:(id)arg1;
- (id)routeMatch;
- (void)setAnimatingToCoordinate:(BOOL)arg1;
- (void)setAnnotationView:(id)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setTracking:(BOOL)arg1;
- (BOOL)tracking;

@end