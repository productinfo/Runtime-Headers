/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCRunLoopPatch : QCPatch {
    void * _unused4;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)_runLoopThread:(id)arg1;
- (void)cleanup:(id)arg1;
- (void)performSelectorOnRunloop:(SEL)arg1 withArgument:(id)arg2 waitForCompletion:(BOOL)arg3;
- (id)runLoop;
- (BOOL)setup:(id)arg1;

@end
