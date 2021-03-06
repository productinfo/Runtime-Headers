/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSFullScreenTileToTabTransitionOverlayWindow : _NSFullScreenTileResizeCrossfadeOverlayWindow {
    CALayer * _finalTabBackgroundLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _finalTabFrame;
    CALayer * _finalTabLayer;
    CALayer * _realTabCoverLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startingTileFrame;
}

- (void)captureAfterWindowsUsingTileFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 destinationTab:(id)arg2;
- (void)captureBeforeWindowsUsingTileFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })closingTileTargetFrame;
- (void)configureAnimationToFinalStateWithDuration:(double)arg1;
- (void)dealloc;

@end
