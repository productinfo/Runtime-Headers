/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSScrollingConcurrentPageAlignmentAnimation : _NSScrollingConcurrentVBLPreprocessFilter {
    struct CGPoint { 
        double x; 
        double y; 
    }  _destinationOrigin;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialOrigin;
    double  _initialTimestamp;
}

@property (atomic, readwrite) struct CGPoint { double x1; double x2; } destinationOrigin;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } initialOrigin;

- (void)dealloc;
- (struct CGPoint { double x1; double x2; })destinationOrigin;
- (id)init;
- (struct CGPoint { double x1; double x2; })initialOrigin;
- (void)scrollingVBLMonitor:(id)arg1 synchronizeForVBLSerialNumber:(unsigned long long)arg2 timestamp:(double)arg3 updateDuration:(double)arg4;
- (void)setDestinationOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialOrigin:(struct CGPoint { double x1; double x2; })arg1;

@end
