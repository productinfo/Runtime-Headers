/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
 */

@interface MPSCNNBinaryConvolution : MPSCNNKernel {
    unsigned long long  _convType;
    unsigned long long  _filterStride;
    unsigned long long  _flags;
    bool  _fullyConnected;
    unsigned long long  _inputFeatureChannels;
    <MTLBuffer> * _inputScale;
    <MTLBuffer> * _inputbias;
    struct NeuronInfo { 
        int type; 
        float a; 
        float b; 
        NSData *aData; 
    }  _neuronInfo;
    unsigned long long  _outputFeatureChannels;
    <MTLBuffer> * _outputScale;
    float  _outputScaleValue;
    <MTLBuffer> * _outputbias;
    MPSCNNPoolingAverage * _poolingFilter;
    <MTLBuffer> * _weights;
}

@property (nonatomic, readonly) unsigned long long inputFeatureChannels;
@property (nonatomic, readonly) unsigned long long outputFeatureChannels;

// MPSCNNBinaryConvolution (null)

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_4_1_1; int (*x_4_1_2)(); unsigned long long x_4_1_3; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_5_1_1; int (*x_5_1_2)(); unsigned long long x_5_1_3; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_6_1_1; int (*x_6_1_2)(); unsigned long long x_6_1_3; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_7_1_1; int (*x_7_1_2)(); unsigned long long x_7_1_3; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_8_1_1; int (*x_8_1_2)(); unsigned long long x_8_1_3; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_9_1_1; int (*x_9_1_2)(); unsigned long long x_9_1_3; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_10_1_1; int (*x_10_1_2)(); unsigned long long x_10_1_3; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_11_1_1; int (*x_11_1_2)(); unsigned long long x_11_1_3; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_12_1_1; int (*x_12_1_2)(); unsigned long long x_12_1_3; } x12; }*)libraryInfo;

- (id)copyBuffer:(id)arg1 device:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)createBuffersFromkernelWeights:(const unsigned int*)arg1 inputBiasTerms:(const float*)arg2 inputScaleTerms:(const float*)arg3 outputBiasTerms:(const float*)arg4 outputScaleTerms:(const float*)arg5 useHalfPrecision:(BOOL)arg6;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 convolutionData:(id)arg2 outputBiasTerms:(const float*)arg3 outputScaleTerms:(const float*)arg4 inputBiasTerms:(const float*)arg5 inputScaleTerms:(const float*)arg6 type:(unsigned long long)arg7 flags:(unsigned long long)arg8;
- (id)initWithDevice:(id)arg1 convolutionData:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (id)initWithDeviceImpl:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const unsigned int*)arg3 biasTerms:(const float*)arg4 scaleValue:(float)arg5 type:(unsigned long long)arg6 flags:(unsigned long long)arg7;
- (id)initWithDeviceImpl:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const unsigned int*)arg3 outputBiasTerms:(const float*)arg4 outputScaleTerms:(const float*)arg5 inputBiasTerms:(const float*)arg6 inputScaleTerms:(const float*)arg7 type:(unsigned long long)arg8 flags:(unsigned long long)arg9;
- (unsigned long long)inputFeatureChannels;
- (unsigned long long)outputFeatureChannels;

@end