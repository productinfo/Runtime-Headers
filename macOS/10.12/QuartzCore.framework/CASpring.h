/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
 */

@interface CASpring : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _attachmentPointA;
    struct CGPoint { 
        double x; 
        double y; 
    }  _attachmentPointB;
    double  _damping;
    id  _delegate;
    BOOL  _enabled;
    CAValueFunction * _function;
    CALayer * _layerA;
    CALayer * _layerB;
    NSString * _name;
    double  _restLength;
    double  _stiffness;
}

@property (atomic, readwrite) struct CGPoint { double x1; double x2; } attachmentPointA;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } attachmentPointB;
@property (atomic, readwrite) double damping;
@property (atomic, readwrite) <CASpringDelegate> *delegate;
@property (getter=isEnabled, atomic, readwrite) BOOL enabled;
@property (atomic, readwrite, retain) CAValueFunction *function;
@property (atomic, readwrite, retain) CALayer *layerA;
@property (atomic, readwrite, retain) CALayer *layerB;
@property (atomic, readwrite, copy) NSString *name;
@property (atomic, readwrite) double restLength;
@property (atomic, readwrite) double stiffness;

+ (void)CAMLParserStartElement:(id)arg1;
+ (id)attributesForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)properties;
+ (id)spring;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (struct CGPoint { double x1; double x2; })attachmentPointA;
- (struct CGPoint { double x1; double x2; })attachmentPointB;
- (id)attributesForKeyPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)damping;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)function;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEnabled;
- (id)layerA;
- (id)layerB;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (double)restLength;
- (void)setAttachmentPointA:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAttachmentPointB:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDamping:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFunction:(id)arg1;
- (void)setLayerA:(id)arg1;
- (void)setLayerB:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRestLength:(double)arg1;
- (void)setStiffness:(double)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (double)stiffness;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end