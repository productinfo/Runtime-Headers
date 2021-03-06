/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/Versions/A/ToneKit
 */

@interface TKPickerOutlineView : NSOutlineView {
    <TKPickerOutlineViewEventHandlingDelegate> * _eventHandlingDelegate;
    BOOL  _shouldSkipNextScrollRowToVisibleMessage;
}

@property (nonatomic, readwrite) <TKPickerOutlineViewEventHandlingDelegate> *eventHandlingDelegate;

- (void).cxx_destruct;
- (id)eventHandlingDelegate;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)scrollRowToVisible:(long long)arg1;
- (void)selectRowWithoutScrolling:(long long)arg1;
- (void)setEventHandlingDelegate:(id)arg1;

@end
