/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface _ABBookUndoableCommandAdapter : ABBookUndoableCommand {
    <ABCommand> * _nonUndoableCommand;
}

- (void)dealloc;
- (void)execute;
- (void)executeRedo;
- (void)executeUndo;
- (id)initWithNonUndoableCommand:(id)arg1;

@end
