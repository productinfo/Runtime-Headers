/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTracer : NSObject {
    unsigned long long  defaultPriority;
    NSMapTable * flavorPriorityMap;
    id  reporter;
    SEL  reporterSelector;
}

+ (void)initialize;
+ (id)sharedTracer;
+ (void)traceWithFlavor:(id)arg1 priority:(unsigned long long)arg2 format:(id)arg3;

- (void)dealloc;
- (id)init;
- (unsigned long long)priorityForFlavor:(id)arg1;
- (void)setDefaultPriority:(unsigned long long)arg1;
- (void)setPriority:(unsigned long long)arg1 forFlavor:(id)arg2;
- (void)setReporter:(id)arg1 selector:(SEL)arg2;
- (void)traceWithFlavor:(id)arg1 priority:(unsigned long long)arg2 format:(id)arg3;
- (void)traceWithFlavor:(id)arg1 priority:(unsigned long long)arg2 format:(id)arg3 arguments:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; })arg4;

@end
