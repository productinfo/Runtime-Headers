/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/Versions/A/MPSMatrix
 */

@interface MPSMatrixSolveTriangular : MPSMatrixBinaryKernel {
    double  _alpha;
    unsigned long long  _numberOfRightHandSides;
    unsigned long long  _order;
    BOOL  _right;
    BOOL  _transpose;
    BOOL  _unit;
    BOOL  _upper;
    MPSMatrix * _workspace;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readwrite) unsigned long long numberOfRightHandSides;
@property (nonatomic, readwrite) unsigned long long order;
@property (nonatomic, readonly) BOOL right;
@property (nonatomic, readonly) BOOL transpose;
@property (nonatomic, readonly) BOOL unit;
@property (nonatomic, readonly) BOOL upper;

// MPSMatrixSolveTriangular (null)

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_4_1_1; int (*x_4_1_2)(); unsigned long long x_4_1_3; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_5_1_1; int (*x_5_1_2)(); unsigned long long x_5_1_3; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_6_1_1; int (*x_6_1_2)(); unsigned long long x_6_1_3; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_7_1_1; int (*x_7_1_2)(); unsigned long long x_7_1_3; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_8_1_1; int (*x_8_1_2)(); unsigned long long x_8_1_3; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_9_1_1; int (*x_9_1_2)(); unsigned long long x_9_1_3; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_10_1_1; int (*x_10_1_2)(); unsigned long long x_10_1_3; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_11_1_1; int (*x_11_1_2)(); unsigned long long x_11_1_3; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_12_1_1; int (*x_12_1_2)(); unsigned long long x_12_1_3; } x12; }*)libraryInfo;

- (double)alpha;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 solutionMatrix:(id)arg4;
- (id)initWithDevice:(id)arg1 right:(BOOL)arg2 upper:(BOOL)arg3 transpose:(BOOL)arg4 unit:(BOOL)arg5 order:(unsigned long long)arg6 numberOfRightHandSides:(unsigned long long)arg7 alpha:(double)arg8;
- (unsigned long long)numberOfRightHandSides;
- (unsigned long long)order;
- (BOOL)right;
- (void)setNumberOfRightHandSides:(unsigned long long)arg1;
- (void)setOrder:(unsigned long long)arg1;
- (BOOL)transpose;
- (BOOL)unit;
- (BOOL)upper;

@end
