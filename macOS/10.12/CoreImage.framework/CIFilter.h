/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIFilter : NSObject <NSCopying, NSSecureCoding> {
    void * _priv;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (getter=isEnabled, atomic, readwrite) BOOL enabled;
@property (nonatomic, readonly) NSArray *inputKeys;
@property (nonatomic, readwrite, copy) NSString *name;
@property (nonatomic, readonly) CIImage *outputImage;
@property (nonatomic, readonly) NSArray *outputKeys;

// Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage

+ (id)filterArrayFromSerializedXMP:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 error:(id*)arg3;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)serializedXMPFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (BOOL)supportsSecureCoding;

- (id)_copyFilterWithZone:(struct _NSZone { }*)arg1;
- (void)_crashed_when_dealloc_called_setValue_nil_forKey_probably_because_the_subclass_already_released_it:(id)arg1;
- (id)apply:(id)arg1;
- (id)apply:(id)arg1 arguments:(id)arg2 options:(id)arg3;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)enabled;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inputKeys;
- (BOOL)isEnabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)outputImage;
- (id)outputKeys;
- (void)setDefaults;
- (void)setEnabled:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

// CIFilter (Apply)

- (id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inSpace:(struct CGColorSpace { }*)arg4;
- (id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inoutSpace:(struct CGColorSpace { }*)arg4;

// CIFilter (CIFilterRegistry)

+ (id)filterNamesInCategories:(id)arg1;
+ (id)filterNamesInCategory:(id)arg1;
+ (id)filterWithName:(id)arg1;
+ (id)filterWithName:(id)arg1 keysAndValues:(id)arg2;
+ (id)filterWithName:(id)arg1 withInputParameters:(id)arg2;
+ (id)localizedDescriptionForFilterName:(id)arg1;
+ (id)localizedNameForCategory:(id)arg1;
+ (id)localizedNameForFilterName:(id)arg1;
+ (id)localizedReferenceDocumentationForFilterName:(id)arg1;
+ (void)registerFilterName:(id)arg1 constructor:(id)arg2 classAttributes:(id)arg3;

// CIFilter (CIFilterRegistryPrivate)

+ (id)allCategories:(BOOL)arg1;
+ (id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2;
+ (id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2 keysAndValues:(id)arg3;
+ (id)filterWithName:(id)arg1 setDefaults:(BOOL)arg2;

- (int)compatibilityVersion;

// CIFilter (CIRAWFilter)

+ (id)filterWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 properties:(id)arg2 options:(id)arg3;
+ (id)filterWithImageData:(id)arg1 options:(id)arg2;
+ (id)filterWithImageURL:(id)arg1 options:(id)arg2;

// CIFilter (Private)

+ (id)_filterArrayFromImageMetadata:(struct CGImageMetadata { }*)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)_filterArrayFromProperties:(id)arg1;
+ (id)_filterArrayFromProperties:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGImageMetadata { }*)_imageMetadataFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)_propertyArrayFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)customAttributes;
+ (id)filterWithString:(id)arg1;

- (BOOL)_filterClassInCategory:(id)arg1;
- (BOOL)_isIdentity;
- (id)_serializedXMPString;
- (id)customAttributes;
- (void)setIdentity;
- (void)setOption:(id)arg1 forKey:(id)arg2;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

// Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore

// CIFilter (_CACIFilterAdditions)

+ (void)CAMLParserStartElement:(id)arg1;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLType;
- (id)CAMLTypeForKey:(id)arg1;
- (id)CA_attributesForKeyPath:(id)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;

@end
