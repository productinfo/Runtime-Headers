/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
 */

@interface InkRecognizerMessageBase : NSObject {
    NSString * _dataKey;
    void * _explicitTarget;
    id  _inkRecognizerData;
}

+ (int)addPhraseRef:(void*)arg1 toEvent:(struct OpaqueEventRef { }*)arg2 withEventType:(unsigned int)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)finishPostingCarbonEvent:(struct OpaqueEventRef { }*)arg1 withEventType:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithInkRecognizerData:(id)arg1 andKey:(id)arg2;
- (BOOL)postCarbonEvent;
- (BOOL)postCarbonEventAgainAsPhraseEventWithPhraseRef:(void*)arg1;
- (void)setTarget:(id)arg1;

@end
