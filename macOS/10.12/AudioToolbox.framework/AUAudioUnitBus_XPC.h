/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
 */

@interface AUAudioUnitBus_XPC : AUAudioUnitBus <NSSecureCoding> {
    AUAudioUnit_XH * _audioUnit;
    unsigned int  _element;
    AVAudioFormat * _format;
    <AUAudioUnitXPCProtocol> * _remoteAU;
    bool  _removingObserverWithContext;
    unsigned int  _scope;
    NSArray * _supportedChannelLayoutTags;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEnabled;
- (void)propertyChanged:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)setFormat:(id)arg1 error:(id*)arg2;

@end
