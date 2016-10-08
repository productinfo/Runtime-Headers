/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
 */

@interface AUAudioUnit_XH : AUAudioUnit {
    AUParameterTree * _cachedParameterTree;
    BOOL  _canProcess;
    BOOL  _canRender;
    struct ComponentInstanceRecord { long long x1[1]; } * _componentInstance;
    struct unique_ptr<AUProcAndUserData, std::__1::default_delete<AUProcAndUserData> > { 
        struct __compressed_pair<AUProcAndUserData *, std::__1::default_delete<AUProcAndUserData> > { 
            struct AUProcAndUserData {} *__first_; 
        } __ptr_; 
    }  _elementCountListenerToken;
    NSExtension * _extension;
    AUAudioUnitBusArray_XH * _inputBusses;
    AUAudioUnitBusArray_XH * _outputBusses;
    struct recursive_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _propListenerMutex;
    struct vector<AUAudioUnit_XH_PropListener, std::__1::allocator<AUAudioUnit_XH_PropListener> > { 
        struct AUAudioUnit_XH_PropListener {} *__begin_; 
        struct AUAudioUnit_XH_PropListener {} *__end_; 
        struct __compressed_pair<AUAudioUnit_XH_PropListener *, std::__1::allocator<AUAudioUnit_XH_PropListener> > { 
            struct AUAudioUnit_XH_PropListener {} *__first_; 
        } __end_cap_; 
    }  _propListeners;
    <AUAudioUnitXPCProtocol> * _remote;
    int  _remotePID;
    bool  _removingObserverWithContext;
    struct IPCAURenderingClient { 
        int (**_vptr$IPCAURenderingClient)(); 
        bool mInitialized; 
        bool mRenderPrioritySet; 
        bool mIsOffline; 
        struct IPCAUSharedMemory { 
            int (**_vptr$SharableMemoryBase)(); 
            bool mIsOwner; 
            bool mWasMapped; 
            unsigned long long mSize; 
            void *mBuffer; 
            unsigned int mPort; 
            int mFileDesc; 
            int mSerial; 
            NSObject<OS_xpc_object> *mXPCObject; 
            unsigned int mHeaderSize; 
            struct vector<IPCAUSharedMemoryBase::Element, std::__1::allocator<IPCAUSharedMemoryBase::Element> > { 
                struct Element {} *__begin_; 
                struct Element {} *__end_; 
                struct __compressed_pair<IPCAUSharedMemoryBase::Element *, std::__1::allocator<IPCAUSharedMemoryBase::Element> > { 
                    struct Element {} *__first_; 
                } __end_cap_; 
            } mElements; 
            unsigned int mMaxFrames; 
            bool mInitializing; 
        } mSharedMemory; 
        struct unique_ptr<SemaphoreIOMessenger_Sender, std::__1::default_delete<SemaphoreIOMessenger_Sender> > { 
            struct __compressed_pair<SemaphoreIOMessenger_Sender *, std::__1::default_delete<SemaphoreIOMessenger_Sender> > { 
                struct SemaphoreIOMessenger_Sender {} *__first_; 
            } __ptr_; 
        } mMessenger; 
        double mOutputSampleRate; 
        struct CAMutex { 
            int (**_vptr$CAMutex)(); 
            char *mName; 
            struct _opaque_pthread_t {} *mOwner; 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } mMutex; 
        } mMessageBufferLock; 
        struct CAMutex { 
            int (**_vptr$CAMutex)(); 
            char *mName; 
            struct _opaque_pthread_t {} *mOwner; 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } mMutex; 
        } mConnectionLock; 
        struct HostCallbackInfo { 
            void *hostUserData; 
            int (*beatAndTempoProc)(); 
            int (*musicalTimeLocationProc)(); 
            int (*transportStateProc)(); 
            int (*transportStateProc2)(); 
        } mHostCallbackInfo; 
        id mMusicalContextBlock; 
        id mTransportStateBlock; 
        id mPullInputBlock; 
        int mNumInputs; 
        int mNumOutputs; 
        unsigned int mMaximumFramesToProcess; 
        double mLastRenderSampleTime; 
    }  _renderClient;
    NSUUID * _requestIdentifier;
    struct unique_ptr<AUSyncCaller, std::__1::default_delete<AUSyncCaller> > { 
        struct __compressed_pair<AUSyncCaller *, std::__1::default_delete<AUSyncCaller> > { 
            struct AUSyncCaller {} *__first_; 
        } __ptr_; 
    }  _syncCaller;
    NSObject<OS_dispatch_queue> * _viewControllerRequestQueue;
}

@property (nonatomic, readonly) <AUAudioUnitXPCProtocol> *remote;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)instantiateWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2 instance:(struct ComponentInstanceRecord { long long x1[1]; }*)arg3 options:(unsigned int)arg4 completionHandler:(id)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id*)arg3;
- (id)_getValueForKey:(id)arg1;
- (id)_getValueForProperty:(id)arg1;
- (void)_refreshBusses:(unsigned int)arg1;
- (BOOL)_setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 error:(id*)arg3;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (BOOL)allocateRenderResourcesAndReturnError:(id*)arg1;
- (void)dealloc;
- (void)deallocateRenderResources;
- (void)didCrash;
- (void)doOpen:(id)arg1 completion:(id)arg2;
- (id)inputBusses;
- (void)internalInitWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2 instance:(struct ComponentInstanceRecord { long long x1[1]; }*)arg3 completion:(id)arg4;
- (id)internalRenderBlock;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputBusses;
- (id)parameterTree;
- (id)parametersForOverviewWithCount:(long long)arg1;
- (void)propertiesChanged:(id)arg1;
- (id)remote;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)requestViewControllerWithCompletionHandler:(id)arg1;
- (void)reset;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
