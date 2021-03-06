/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/Versions/A/MPSMatrix
 */

@interface MPSMatrixCopy : MPSKernel {
    unsigned long long  _copyColumns;
    unsigned long long  _copyRows;
    BOOL  _destinationsAreTransposed;
    BOOL  _sourcesAreTransposed;
}

@property (nonatomic, readonly) unsigned long long copyColumns;
@property (nonatomic, readonly) unsigned long long copyRows;
@property (nonatomic, readonly) BOOL destinationsAreTransposed;
@property (nonatomic, readonly) BOOL sourcesAreTransposed;

// MPSMatrixCopy (null)

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_4_1_1; int (*x_4_1_2)(); unsigned long long x_4_1_3; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_5_1_1; int (*x_5_1_2)(); unsigned long long x_5_1_3; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_6_1_1; int (*x_6_1_2)(); unsigned long long x_6_1_3; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_7_1_1; int (*x_7_1_2)(); unsigned long long x_7_1_3; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_8_1_1; int (*x_8_1_2)(); unsigned long long x_8_1_3; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_9_1_1; int (*x_9_1_2)(); unsigned long long x_9_1_3; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_10_1_1; int (*x_10_1_2)(); unsigned long long x_10_1_3; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_11_1_1; int (*x_11_1_2)(); unsigned long long x_11_1_3; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo {} *x_12_1_1; int (*x_12_1_2)(); unsigned long long x_12_1_3; } x12; }*)libraryInfo;

- (unsigned long long)copyColumns;
- (unsigned long long)copyRows;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (id)debugDescription;
- (BOOL)destinationsAreTransposed;
- (void)encodeToCommandBuffer:(id)arg1 copyDescriptor:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 copyRows:(unsigned long long)arg2 copyColumns:(unsigned long long)arg3 sourcesAreTransposed:(BOOL)arg4 destinationsAreTransposed:(BOOL)arg5;
- (BOOL)sourcesAreTransposed;

@end
