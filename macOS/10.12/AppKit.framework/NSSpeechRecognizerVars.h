/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSpeechRecognizerVars : NSObject {
    <NSSpeechRecognizerDelegate> * _delegate;
    NSArray * _displayedStringsArray;
    NSString * _displayedStringsTitle;
    NSLocale * _locale;
    struct __RXRecognitionSystem { } * _recognitionSystem;
    struct __RXRecognizer { } * _recognizer;
    NSArray * _simpleCommandsArray;
}

@property (atomic, readwrite, retain) <NSSpeechRecognizerDelegate> *delegate;
@property (atomic, readwrite, retain) NSArray *displayedStringsArray;
@property (atomic, readwrite, copy) NSString *displayedStringsTitle;
@property (atomic, readwrite, retain) NSLocale *locale;
@property (atomic, readwrite) struct __RXRecognitionSystem { }*recognitionSystem;
@property (atomic, readwrite) struct __RXRecognizer { }*recognizer;
@property (atomic, readwrite, copy) NSArray *simpleCommandsArray;

- (void)dealloc;
- (id)delegate;
- (id)displayedStringsArray;
- (id)displayedStringsTitle;
- (id)init;
- (id)locale;
- (struct __RXRecognitionSystem { }*)recognitionSystem;
- (struct __RXRecognizer { }*)recognizer;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedStringsArray:(id)arg1;
- (void)setDisplayedStringsTitle:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setRecognitionSystem:(struct __RXRecognitionSystem { }*)arg1;
- (void)setRecognizer:(struct __RXRecognizer { }*)arg1;
- (void)setSimpleCommandsArray:(id)arg1;
- (id)simpleCommandsArray;

@end
