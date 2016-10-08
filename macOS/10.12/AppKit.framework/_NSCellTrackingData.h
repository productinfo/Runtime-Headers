/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCellTrackingData : NSObject {
    BOOL  _cellNeedsDisplay;
    NSCell * _mouseCell;
    long long  _mouseCol;
    long long  _mouseRow;
}

@property (atomic, readwrite) BOOL cellNeedsDisplay;
@property (nonatomic, readwrite, retain) NSCell *mouseCell;
@property (atomic, readwrite) long long mouseCol;
@property (atomic, readwrite) long long mouseRow;

- (BOOL)cellNeedsDisplay;
- (void)dealloc;
- (id)mouseCell;
- (long long)mouseCol;
- (long long)mouseRow;
- (void)setCellNeedsDisplay:(BOOL)arg1;
- (void)setMouseCell:(id)arg1;
- (void)setMouseCol:(long long)arg1;
- (void)setMouseRow:(long long)arg1;

@end
