/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
 */

@interface AUHALOutputUnit : AUAudioUnitV2Bridge {
    bool  _inputBusEnabled;
    id  _inputHandler;
    bool  _inputWasEnabled;
    id  _outputProvider;
    bool  _outputWasEnabled;
    int  _renderObserverToken;
    struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)> > >="__table_"{__hash_table<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)> > >="__bucket_list_"{unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *> > >="__ptr_"{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *> > >="__first_"^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> {}  _renderObservers;
}

@property (nonatomic, readonly) unsigned int deviceID;
@property (getter=isInputEnabled, nonatomic, readwrite) BOOL inputEnabled;
@property (getter=isOutputEnabled, nonatomic, readwrite) BOOL outputEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_inputHandler;
- (void)addRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (BOOL)canPerformInput;
- (BOOL)canPerformOutput;
- (void)dealloc;
- (unsigned int)deviceID;
- (double)deviceInputLatency;
- (double)deviceLatency:(BOOL)arg1;
- (double)deviceOutputLatency;
- (int)enableBus:(unsigned int)arg1 scope:(unsigned int)arg2 enable:(BOOL)arg3;
- (void)initAUHALOutputUnit;
- (id)initWithAudioUnit:(struct ComponentInstanceRecord { long long x1[1]; }*)arg1 description:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)isInputEnabled;
- (BOOL)isOutputEnabled;
- (BOOL)isRunning;
- (id)outputProvider;
- (void)removeRenderObserver:(long long)arg1;
- (void)removeRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (BOOL)setDeviceID:(unsigned int)arg1 error:(id*)arg2;
- (void)setInputEnabled:(BOOL)arg1;
- (void)setInputHandler:(id)arg1;
- (void)setOutputEnabled:(BOOL)arg1;
- (void)setOutputProvider:(id)arg1;
- (BOOL)startHardwareAndReturnError:(id*)arg1;
- (void)stopHardware;
- (long long)tokenByAddingRenderObserver:(id)arg1;

@end
