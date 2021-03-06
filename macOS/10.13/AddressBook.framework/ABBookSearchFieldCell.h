/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABBookSearchFieldCell : NSSearchFieldCell {
    NSProgressIndicator * _progressIndicator;
    BOOL  _showsProgress;
}

@property (nonatomic, readwrite) NSProgressIndicator *progressIndicator;
@property (nonatomic, readwrite) BOOL showsProgress;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cancelButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)progressIndicator;
- (void)setProgressIndicator:(id)arg1;
- (void)setShowsProgress:(BOOL)arg1;
- (BOOL)showsProgress;

@end
