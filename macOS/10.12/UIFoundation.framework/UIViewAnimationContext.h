/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface UIViewAnimationContext : NSObject {
    long long  _animationCount;
    id  _completionHandler;
    NSArray * _viewAnimations;
}

@property (nonatomic, readwrite) long long animationCount;
@property (nonatomic, readonly) id completionHandler;
@property (nonatomic, readwrite, retain) NSArray *viewAnimations;

- (long long)animationCount;
- (id)completionHandler;
- (void)dealloc;
- (id)initWithCompletionHandler:(id)arg1;
- (void)setAnimationCount:(long long)arg1;
- (void)setViewAnimations:(id)arg1;
- (id)viewAnimations;

@end
