/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptureInput : NSObject {
    AVCaptureInputInternal * _inputInternal;
}

@property (nonatomic, readonly) NSArray *ports;

- (BOOL)addInputUnitsForInputPort:(id)arg1 toGraph:(struct OpaqueCMIOGraph { }*)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4;
- (int)clockProviderNodeForInputPort:(id)arg1;
- (void)dealloc;
- (id)defaultPortForMediaType:(id)arg1;
- (int)graphNodeForInputPort:(id)arg1;
- (void)graphWillStartForSession:(id)arg1;
- (void)graphWillStopForSession:(id)arg1 error:(id)arg2;
- (id)initSubclass;
- (struct OpaqueCMClock { }*)inputClock;
- (id)notReadyError;
- (id)ports;
- (id)portsForMediaType:(id)arg1;
- (void)removeInputUnitsForInputPort:(id)arg1 fromGraph:(struct OpaqueCMIOGraph { }*)arg2 ofCaptureSession:(id)arg3;
- (id)session;
- (void)sessionWillUseOutputDecompressionOptions:(id)arg1 forPort:(id)arg2;
- (void)setSession:(id)arg1;
- (unsigned int)unitOutputNumberForInputPort:(id)arg1;

@end
