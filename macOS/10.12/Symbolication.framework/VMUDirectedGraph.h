/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
 */

@interface VMUDirectedGraph : NSObject <NSCopying> {
    NSDictionary * _additionalProperties;
    void * _deadNodes;
    unsigned int  _edgeCapacity;
    unsigned int  _edgeCount;
    struct _VMUDirectedGraphEdge { unsigned int x1; unsigned int x2; unsigned int x3; } * _edges;
    unsigned int  _externalEdges;
    BOOL  _graphIs64bit;
    unsigned int  _indexedEdges;
    unsigned int  _indexedNodeSpace;
    int  _insideSearch;
    BOOL  _inverted;
    unsigned int  _nextEdgeName;
    unsigned int  _nextNodeName;
    unsigned int * _nodeAdjIndex;
    unsigned int  _nodeCount;
}

@property (nonatomic, readwrite, copy) NSDictionary *additionalProperties;
@property (nonatomic, readonly) unsigned int edgeCount;
@property (nonatomic, readonly) unsigned int edgeNamespaceSize;
@property (nonatomic, readonly) BOOL graphIs64bit;
@property (nonatomic, readwrite) BOOL inverted;
@property (nonatomic, readonly) unsigned int nodeCount;
@property (nonatomic, readonly) unsigned int nodeNamespaceSize;

+ (id)_archivedBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (id)_archivedObject:(id)arg1 options:(unsigned long long)arg2;
+ (void*)_copyUnarchived:(id)arg1 length:(unsigned long long*)arg2 options:(unsigned long long)arg3;
+ (id)_unarchivedObject:(id)arg1 ofClass:(Class)arg2 options:(unsigned long long)arg3;

- (BOOL)_adjustAdjacencyMap;
- (void)_bfsCore:(unsigned int)arg1 colors:(char *)arg2 visitBlock:(id)arg3 examineBlock:(id)arg4;
- (void*)_deadNodeMap;
- (void)_dfsCore:(unsigned int)arg1 colors:(char *)arg2 visitBlock:(id)arg3 examineBlock:(id)arg4;
- (void)_dumpAdjacencyList;
- (void)_faultDeadNodeMap;
- (void)_internalAccessRawEdgesWithBlock:(id)arg1;
- (void)_internalAddEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2 withName:(unsigned int)arg3;
- (unsigned int)_internalEnumerateEdgesOfNode:(unsigned int)arg1 withBlock:(id)arg2;
- (void)_removeEdges:(id)arg1;
- (void)_renameWithNodeMap:(unsigned int*)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int*)arg3 edgeNamespace:(unsigned int)arg4;
- (void)_renormalize;
- (void)_searchMainLoop:(unsigned int)arg1 action:(id)arg2;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (unsigned int)addGroupNodeForNodes:(const unsigned int*)arg1 count:(unsigned int)arg2;
- (unsigned int)addNode;
- (id)additionalProperties;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;
- (void)breadthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(id)arg2 edgeVisitBlock:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)depthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(id)arg2 edgeVisitBlock:(id)arg3;
- (unsigned int)edgeCount;
- (unsigned int)edgeNamespaceSize;
- (unsigned int)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(id)arg2;
- (unsigned int)enumerateEdgesWithBlock:(id)arg1;
- (unsigned int)enumerateMembersOfGroupNode:(unsigned int)arg1 withBlock:(id)arg2;
- (unsigned int)enumerateNodesWithBlock:(id)arg1;
- (BOOL)graphIs64bit;
- (id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3;
- (id)initWithNodes:(unsigned int)arg1;
- (id)initWithPlistRepresentation:(id)arg1;
- (void)invertEdges;
- (BOOL)inverted;
- (id)invertedGraph;
- (BOOL)isNodePresent:(unsigned int)arg1;
- (unsigned int)nodeCount;
- (unsigned int)nodeNamespaceSize;
- (unsigned int)parentGroupForNode:(unsigned int)arg1;
- (id)plistRepresentationWithOptions:(unsigned long long)arg1;
- (void)removeMarkedEdges:(void*)arg1;
- (void)removeMarkedNodes:(void*)arg1;
- (id)renormalizedGraph;
- (void)setAdditionalProperties:(id)arg1;
- (void)setInverted:(BOOL)arg1;
- (id)subgraphWithMarkedNodes:(void*)arg1;
- (void)ungroupNode:(unsigned int)arg1;
- (void)withEdgeMarkingMap:(id)arg1;
- (void)withNodeMarkingMap:(id)arg1;

// VMUDirectedGraph (VMUUsefulAlgorithms)

- (void)markReachableNodesFromRoots:(void*)arg1 inMap:(void*)arg2;
- (void)stronglyConnectedComponentSearch:(unsigned int)arg1 withRecorder:(id)arg2;
- (id)subgraphWithShortestPathsFromNode:(unsigned int)arg1 toNodes:(void*)arg2;
- (id)subgraphWithUniquePathsFromNode:(unsigned int)arg1 toNodes:(void*)arg2;

@end
