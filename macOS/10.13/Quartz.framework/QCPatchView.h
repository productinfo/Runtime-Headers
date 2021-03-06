/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCPatchView : GFGraphView {
    double  _cascadeDistance;
    BOOL  _hasSelectedPatches;
    QCPatch * _triggerPatchLinkCandidate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _triggerPatchLinkEnd;
    struct CGPoint { 
        double x; 
        double y; 
    }  _triggerPatchLinkStart;
    void * _unused2;
}

- (void)__computeOrder:(id)arg1 context:(void*)arg2;
- (void)__explode:(id)arg1 context:(void*)arg2;
- (BOOL)__filterAll:(id)arg1;
- (void)__removeUnusedPatchesFromGraph:(id)arg1 recursively:(BOOL)arg2;
- (void)_addSubgraph:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForSelection;
- (id)_colorForConnection:(id)arg1;
- (id)_createSubgraphFromSelection:(id)arg1;
- (void)_drawConnection:(id)arg1 fromPort:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3 toPoint:(struct CGPoint { double x1; double x2; })arg4;
- (BOOL)_editNode:(id)arg1;
- (void)_explodeSubgraphFromSelection:(id)arg1;
- (void)_finishInitialization;
- (BOOL)_hasSelectedPatches;
- (struct CGPoint { double x1; double x2; })_pastePoint;
- (BOOL)_readSelectionFromUnarchiver:(id)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_removeUnusedPatches:(id)arg1;
- (void)_selectionUpdated:(id)arg1;
- (void)_writeSelectionToArchiver:(id)arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2;
- (BOOL)acceptDroppedFile:(id)arg1;
- (Class)classForPath:(id)arg1;
- (int)connectionTypeForConnection:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawTriggerPatchLink;
- (void)duplicate:(id)arg1;
- (id)menuForGraph;
- (void)paste:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)performDroppedFile:(id)arg1 atPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)setGraph:(id)arg1;
- (void)setNeedsDisplayForNode:(id)arg1;
- (BOOL)trackTriggerPatch:(id)arg1 fromNode:(id)arg2;

// QCPatchView (Wrappers)

- (id)patch;
- (void)setPatch:(id)arg1;

@end
