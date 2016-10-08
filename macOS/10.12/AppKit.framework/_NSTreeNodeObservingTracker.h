/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSTreeNodeObservingTracker : NSObject {
    NSArray * _availableModelAndProxyKeys;
    NSMutableDictionary * _observedModelKeyPathInfoTable;
    id  _observedTreeNodesData;
    id  _treeNodeObserver;
    struct __treeNodeObservingTrackerFlags { 
        unsigned int _multipleObservedModelObjects : 1; 
        unsigned int _registersObservingWithKVOPriorKey : 1; 
        unsigned int _reservedModelObservingTrackerFlags : 30; 
    }  _treeNodeObservingTrackerFlags;
    NSCountedSet * _treeNodeObservingTracking;
}

- (void)_registerOrUnregister:(BOOL)arg1 observerNotificationsForKeyPath:(id)arg2;
- (void)_registerOrUnregister:(BOOL)arg1 observerNotificationsForKeyPath:(id)arg2 ofModelObject:(id)arg3;
- (void)_registerOrUnregister:(BOOL)arg1 observerNotificationsForModelObject:(id)arg2;
- (void)_startObservingModelObject:(id)arg1;
- (void)_stopObservingModelObject:(id)arg1;
- (void)dealloc;
- (id)initWithModelObserver:(id)arg1 availableModelAndProxyKeys:(id)arg2;
- (void)registerModelKeyPath:(id)arg1;
- (void)registerObservingForAnalyzableKeyPath:(id)arg1;
- (BOOL)registersObservingWithKVOPriorKey;
- (void)setRegistersObservingWithKVOPriorKey:(BOOL)arg1;
- (void)startObservingModelObject:(id)arg1;
- (void)startObservingModelObjectTree:(id)arg1;
- (void)stopAllModeObjectObserving;
- (void)stopObservingModelObject:(id)arg1;
- (void)unregisterModelKeyPath:(id)arg1;
- (void)unregisterObservingForAnalyzableKeyPath:(id)arg1;

@end
