/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
 */

@interface InkRecognizerText : InkRecognizerBase <NSCoding, NSCopying> {
    NSMutableArray * _charInfoArray;
    BOOL  _firstWordOfPhrase;
    NSMutableArray * _leadingSpacesArray;
    NSValue * _refCon;
    unsigned long long  _remainingWords;
    NSMutableArray * _strokeArray;
    NSMutableArray * _textArray;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct OpaqueInkTextRef { }*)createInkTextRef;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInkTextPtr:(struct InkText { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned char x6; unsigned int x7; struct InkStroke {} **x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; unsigned char x10; unsigned char x11; unsigned short x12; unsigned short **x13; unsigned int *x14; char *x15; struct InkCharInfo {} **x16; void *x17; }*)arg1;
- (id)initWithInkTextRef:(struct OpaqueInkTextRef { }*)arg1;
- (id)initWithPhrase:(struct InkPhrase { unsigned short x1; unsigned short x2; int x3; unsigned int x4; unsigned int x5; unsigned char x6; unsigned int x7; struct InkStroke {} **x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; struct InkGesture {} *x10; unsigned char x11; unsigned char x12[3]; struct InkPhraseWordGroup {} **x13; void *x14; }*)arg1 andPhraseWord:(struct InkPhraseWord { unsigned short x1; unsigned short x2; struct InkPhraseWordGroup {} *x3; unsigned int x4; unsigned int x5; unsigned char x6; unsigned char x7; unsigned short x8; unsigned short **x9; unsigned int *x10; char *x11; struct InkCharInfo {} **x12; }*)arg2 andIsFirstWordOfAGroup:(BOOL)arg3;
- (long long)leadingSpacesCountAtIndex:(unsigned long long)arg1;
- (unsigned long long)remainingWords;
- (void)setRemainingWords:(unsigned long long)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;

@end
