/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface GFConnection : NSObject <GFBase> {
    NSDictionary * _attributes;
    GFPort * _destPort;
    GFGraph * _owner;
    GFPort * _sourcePort;
    void * _unused;
    NSMutableDictionary * _userInfo;
}

- (id)attributes;
- (void)connectionWillDeleteFromGraph;
- (void)dealloc;
- (id)description;
- (id)destinationPort;
- (id)graph;
- (id)init;
- (id)initWithGraph:(id)arg1 sourcePort:(id)arg2 destinationPort:(id)arg3 arguments:(id)arg4;
- (id)key;
- (BOOL)setState:(id)arg1;
- (id)sourcePort;
- (id)state;
- (void)stateUpdated;
- (id)userInfo;

@end