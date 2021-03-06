/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NS1DVelocityFilter : NSObject {
    double  _lastTimestamp;
    double  _maxAllowedVelocity;
    id  _private;
}

@property (atomic, readonly) double filteredVelocity;
@property (atomic, readwrite) double lastTimestamp;
@property (atomic, readwrite) double maxAllowedVelocity;

- (BOOL)_isTimestampOutOfDate:(double)arg1;
- (void)addDelta:(double)arg1 withTimestamp:(double)arg2;
- (void)dealloc;
- (double)filteredVelocity;
- (id)init;
- (double)lastTimestamp;
- (double)maxAllowedVelocity;
- (void)reset;
- (BOOL)resetIfOutOfDate:(double)arg1;
- (void)setLastTimestamp:(double)arg1;
- (void)setMaxAllowedVelocity:(double)arg1;

@end
