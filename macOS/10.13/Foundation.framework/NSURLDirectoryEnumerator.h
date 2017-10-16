/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
    struct __CFURLEnumerator { } * _enumerator;
    id  _errorHandler;
    BOOL  shouldContinue;
}

@property (atomic, readwrite, copy) id errorHandler;

- (void)dealloc;
- (id)directoryAttributes;
- (id)errorHandler;
- (id)fileAttributes;
- (id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(id)arg4;
- (unsigned long long)level;
- (id)nextObject;
- (void)setErrorHandler:(id)arg1;
- (void)skipDescendants;
- (void)skipDescendents;

@end