/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPointUtility : NSObject

+ (void*)controlPoints:(id)arg1 usesZilch:(BOOL)arg2;
+ (struct { double x1; double x2; })pointAt:(unsigned long long)arg1 pointData:(id)arg2 usesZilch:(BOOL)arg3;
+ (unsigned long long)pointCount:(id)arg1 usesZilch:(BOOL)arg2;
+ (id)subdataFromPointData:(id)arg1 fromPointIndex:(unsigned long long)arg2 usesZilch:(BOOL)arg3;
+ (id)unpackBasicPoints:(id)arg1;
+ (id)unpackPoints:(id)arg1 usesZilch:(BOOL)arg2;
+ (id)unpackZilchPoints:(id)arg1;
+ (id)zilchData:(id)arg1 fromPointIndex:(unsigned long long)arg2;
+ (BOOL)zilchPointsSupported;

@end