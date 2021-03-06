/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSFullScreenSpaceMenuRevealAnimation : NSAnimation {
    float  _endingReveal;
    double  _serverStartTime;
    _NSFullScreenSpace * _siblingSpace;
    float  _startingReveal;
}

@property (nonatomic, readwrite) float endingReveal;
@property (nonatomic, readwrite) double serverStartTime;
@property (nonatomic, readwrite, retain) _NSFullScreenSpace *siblingSpace;
@property (nonatomic, readwrite) float startingReveal;

- (void)dealloc;
- (float)endingReveal;
- (double)serverStartTime;
- (void)setCurrentProgress:(float)arg1;
- (void)setEndingReveal:(float)arg1;
- (void)setServerStartTime:(double)arg1;
- (void)setSiblingSpace:(id)arg1;
- (void)setStartingReveal:(float)arg1;
- (id)siblingSpace;
- (float)startingReveal;

@end
