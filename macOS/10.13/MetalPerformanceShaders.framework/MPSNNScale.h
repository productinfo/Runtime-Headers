/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
 */

@interface MPSNNScale : MPSCNNKernel {
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _destSize;
    MPSImageScale * _filter;
    <MPSHandle> * _handle;
    <MPSImageTransformProvider> * _transformProvider;
}

// MPSNNScale (null)

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_4_1_1; int (*x_4_1_2)(); unsigned long long x_4_1_3; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_5_1_1; int (*x_5_1_2)(); unsigned long long x_5_1_3; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_6_1_1; int (*x_6_1_2)(); unsigned long long x_6_1_3; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_7_1_1; int (*x_7_1_2)(); unsigned long long x_7_1_3; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_8_1_1; int (*x_8_1_2)(); unsigned long long x_8_1_3; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_9_1_1; int (*x_9_1_2)(); unsigned long long x_9_1_3; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_10_1_1; int (*x_10_1_2)(); unsigned long long x_10_1_3; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_11_1_1; int (*x_11_1_2)(); unsigned long long x_11_1_3; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_12_1_1; int (*x_12_1_2)(); unsigned long long x_12_1_3; } x12; }*)libraryInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(struct { long long x1; long long x2; long long x3; }*)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 transformProvider:(id)arg2 handle:(id)arg3 outputSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 scaleClass:(Class)arg5;
- (void)setEdgeMode:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end