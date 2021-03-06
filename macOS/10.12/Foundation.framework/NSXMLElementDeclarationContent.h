/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSXMLElementDeclarationContent : NSXMLNode {
    unsigned long long  _contentKind;
    NSXMLElementDeclarationContent * _leftChild;
    NSString * _name;
    unsigned long long  _occurrence;
    NSXMLElementDeclarationContent * _rightChild;
}

+ (id)createElementContent:(struct _xmlElementContent { int x1; int x2; char *x3; struct _xmlElementContent {} *x4; struct _xmlElementContent {} *x5; struct _xmlElementContent {} *x6; char *x7; }*)arg1;
+ (id)createElementContentFromString:(id)arg1;

- (void)XMLStringSequenceStarted:(BOOL)arg1 choiceStarted:(BOOL)arg2 appendingToString:(id)arg3;
- (void)_XMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (unsigned long long)contentKind;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithContentKind:(unsigned long long)arg1 occurrence:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)leftChild;
- (struct _xmlElementContent { int x1; int x2; char *x3; struct _xmlElementContent {} *x4; struct _xmlElementContent {} *x5; struct _xmlElementContent {} *x6; char *x7; }*)libxml2Content;
- (id)name;
- (unsigned long long)occurrence;
- (id)rightChild;
- (void)setLeftChild:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRightChild:(id)arg1;

@end
