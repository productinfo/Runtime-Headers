/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface _MTLLibrary : NSObject <MTLLibrary> {
    struct MTLLibraryContainer { int x1; struct { unsigned char x_2_1_1[32]; } x2; struct MTLLibraryData {} *x3; id x4; id x5; } * _cacheEntry;
    <MTLDevice> * _device;
    NSMutableDictionary * _functionDictionary;
    NSArray * _functionNames;
    NSString * _label;
    /* Warning: unhandled struct encoding: '{MTLLibraryData=^^?i@}' */ struct MTLLibraryData { int (**x1)(); int x2; id x3; } * _libraryData;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly, retain) NSMutableDictionary *functionDictionary;
@property (atomic, readonly, retain) NSArray *functionNames;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) NSString *label;
@property (atomic, readonly) /* Warning: unhandled struct encoding: '{MTLLibraryData=^^?i@}' */ struct MTLLibraryData { int (**x1)(); int x2; id x3; }*libraryData;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)device;
- (id)functionDictionary;
- (id)functionNames;
- (id)initWithLibraryContainer:(struct MTLLibraryContainer { int x1; struct { unsigned char x_2_1_1[32]; } x2; struct MTLLibraryData {} *x3; id x4; id x5; }*)arg1 device:(id)arg2;
- (id)label;
- (/* Warning: unhandled struct encoding: '{MTLLibraryData=^^?i@}' */ struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)libraryData;
- (id)newFunctionWithName:(id)arg1;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(id)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
- (void)setLabel:(id)arg1;

@end
