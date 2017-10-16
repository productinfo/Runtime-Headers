/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapFeatureJunction : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    GEOVectorTile * _tile;
    struct { 
        float x; 
        float y; 
    }  _tilePoint;
}

@property (nonatomic, readonly) struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*connectivityJunction;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) BOOL isOnTileBorder;
@property (nonatomic, readonly) GEOVectorTile *tile;
@property (nonatomic, readonly) struct { float x1; float x2; } tilePoint;

+ (BOOL)_isPointOnTileBorder:(struct { float x1; float x2; })arg1;

- (void).cxx_destruct;
- (struct { double x1; double x2; })coordinate;
- (BOOL)isOnTileBorder;

// GEOMapFeatureJunction (Private)

+ (id)junctionForRoadFeature:(struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; BOOL x13; unsigned char x14; BOOL x15; BOOL x16; unsigned char x17; BOOL x18; unsigned char x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; BOOL x21; unsigned int x22; }*)arg1 startJunction:(BOOL)arg2;

- (struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*)connectivityJunction;
- (id)tile;
- (struct { float x1; float x2; })tilePoint;

@end