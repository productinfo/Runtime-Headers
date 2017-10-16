/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCMeshCreator : QCPatch {
    QCStructurePort * _inputColors;
    QCStructurePort * _inputIndices;
    QCStructurePort * _inputNormals;
    QCNumberPort * _inputPointSize;
    QCIndexPort * _inputSliceDepth;
    QCIndexPort * _inputSliceHeight;
    QCIndexPort * _inputSliceWidth;
    QCStructurePort * _inputTexcoords;
    QCOpenGLPort_Image * _inputTextures;
    QCStructurePort * _inputVolume;
    int  _mode;
    QCStructurePort * inputVertices;
    QCMeshPort * outputMesh;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)stateKeysWithIdentifier:(id)arg1;
+ (unsigned long long)stateVersionWithIdentifier:(id)arg1;

- (void)_forwardRenderingFlag;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (void)setMode:(int)arg1;
- (BOOL)setState:(id)arg1;
- (id)state;

// QCMeshCreator (QCInspector)

+ (id)inspectorNibNameWithIdentifier:(id)arg1;

@end