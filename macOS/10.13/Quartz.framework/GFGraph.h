/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface GFGraph : GFNode {
    GFList * _connections;
    BOOL  _finalizing;
    struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } * _graphLock;
    GFList * _nodes;
    void * _unused2;
}

+ (Class)baseClass;
+ (Class)connectionClass;
+ (Class)proxyPortClass;

- (void)__createConnectionFrom:(id)arg1 to:(id)arg2 forKey:(id)arg3 withUserInfo:(id)arg4;
- (void)__createProxyPortWithNode:(id)arg1 portKey:(id)arg2 forKey:(id)arg3 withUserInfo:(id)arg4;
- (BOOL)addNode:(id)arg1;
- (BOOL)addNode:(id)arg1 forKey:(id)arg2;
- (void)applyFunctionOnConnections:(int (*)arg1 context:(void*)arg2;
- (void)applyFunctionOnNodes:(int (*)arg1 context:(void*)arg2;
- (BOOL)canAddNode:(id)arg1;
- (BOOL)canCreateConnectionFromPort:(id)arg1 toPort:(id)arg2;
- (BOOL)canCreateProxyPortWithOriginalPort:(id)arg1;
- (id)connectionForKey:(id)arg1;
- (id)connections;
- (id)createConnectionFromPort:(id)arg1 toPort:(id)arg2;
- (id)createConnectionFromPort:(id)arg1 toPort:(id)arg2 forKey:(id)arg3;
- (id)createProxyPortWithOriginalPort:(id)arg1;
- (id)createProxyPortWithOriginalPort:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)deleteConnection:(id)arg1;
- (void)deleteConnectionForKey:(id)arg1;
- (void)deleteInputPortForKey:(id)arg1;
- (void)deleteOutputPortForKey:(id)arg1;
- (void)deleteProxyPortForKey:(id)arg1;
- (void)deleteProxyPortWithOriginalPort:(id)arg1;
- (void)enumerateConnectionsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (void)enumerateNodesWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (id)keyForConnection:(id)arg1;
- (id)keyForNode:(id)arg1;
- (id)nodeForKey:(id)arg1;
- (id)nodeForPath:(id)arg1;
- (id)nodes;
- (id)pathForNode:(id)arg1;
- (id)pathForPort:(id)arg1;
- (id)portForPath:(id)arg1;
- (id)proxyInputPorts;
- (id)proxyOutputPorts;
- (id)proxyPortForOriginalPort:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)removeNodeForKey:(id)arg1;
- (void)setLock:(struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; }*)arg1;
- (BOOL)setState:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (id)state;

// GFGraph (GFGraphView)

- (Class)graphViewClass;

// GFGraph (Notes)

- (void)_setNote:(id)arg1 atIndex:(id)arg2;

// GFGraph (Private)

- (id)_connections;
- (BOOL)_finalizing;
- (BOOL)_isConnectionKeyInUse:(id)arg1;
- (BOOL)_isNodeKeyInUse:(id)arg1;
- (void)_layoutUpdated;
- (BOOL)_loadState:(id)arg1;
- (id)_nodes;
- (BOOL)_saveState:(id)arg1 filterTarget:(id)arg2 filterAction:(SEL)arg3 flatten:(BOOL)arg4;
- (id)_uniqueConnectionKey;
- (id)_uniqueKeyFromNode:(id)arg1;
- (id)_uniqueProxyPortKeyFromPort:(id)arg1;
- (void)_willDeleteNodeInputPort:(id)arg1;
- (void)_willDeleteNodeOutputPort:(id)arg1;

// GFGraph (ProxyPortKeyFromName)

- (id)uniqueProxyPortKeyFromName:(id)arg1;

@end
