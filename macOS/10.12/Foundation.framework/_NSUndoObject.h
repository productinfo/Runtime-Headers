/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface _NSUndoObject : NSObject {
    id  _target;
    _NSUndoObject * next;
    _NSUndoObject * previous;
}

- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)invoke;
- (BOOL)isBeginMark;
- (BOOL)isEndMark;
- (id)target;

@end
