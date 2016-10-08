/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
 */

@interface InkRecognizerWordGroup : NSObject {
    NSMutableArray * _phraseWordArray;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct InkPhraseWordGroup { unsigned short x1; unsigned short x2; struct InkPhraseWord {} **x3; struct InkPhrase {} *x4; }*)createInkPhraseWordGroupWithParent:(struct InkPhrase { unsigned short x1; unsigned short x2; int x3; unsigned int x4; unsigned int x5; unsigned char x6; unsigned int x7; struct InkStroke {} **x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; struct InkGesture {} *x10; unsigned char x11; unsigned char x12[3]; struct InkPhraseWordGroup {} **x13; void *x14; }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInkPhraseWordGroup:(struct InkPhraseWordGroup { unsigned short x1; unsigned short x2; struct InkPhraseWord {} **x3; struct InkPhrase {} *x4; }*)arg1;
- (unsigned long long)phraseWordGroupCount;

@end
