/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTextStorageElementArray : NSArray {
    NSTextStorage * _container;
    unsigned long long  _count;
    NSMutableArray * _elements;
    NSString * _key;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 key:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)tokenizeToCount:(unsigned long long)arg1;

@end