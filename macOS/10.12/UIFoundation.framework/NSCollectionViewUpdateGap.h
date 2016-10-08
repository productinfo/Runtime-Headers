/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface NSCollectionViewUpdateGap : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _beginningRect;
    NSMutableArray * _deleteItems;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endingRect;
    NSCollectionViewUpdateItem * _firstUpdateItem;
    NSMutableArray * _insertItems;
    NSCollectionViewUpdateItem * _lastUpdateItem;
}

@property (nonatomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } beginningRect;
@property (nonatomic, readonly) NSArray *deleteItems;
@property (nonatomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endingRect;
@property (nonatomic, readwrite, retain) NSCollectionViewUpdateItem *firstUpdateItem;
@property (nonatomic, readonly) BOOL hasInserts;
@property (nonatomic, readonly) NSArray *insertItems;
@property (nonatomic, readonly) BOOL isDeleteBasedGap;
@property (nonatomic, readonly) BOOL isSectionBasedGap;
@property (nonatomic, readwrite, retain) NSCollectionViewUpdateItem *lastUpdateItem;
@property (nonatomic, readonly) NSArray *updateItems;

+ (id)gapWithUpdateItem:(id)arg1;

- (void).cxx_destruct;
- (void)addUpdateItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })beginningRect;
- (id)deleteItems;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endingRect;
- (id)firstUpdateItem;
- (BOOL)hasInserts;
- (id)init;
- (id)insertItems;
- (BOOL)isDeleteBasedGap;
- (BOOL)isSectionBasedGap;
- (id)lastUpdateItem;
- (void)setBeginningRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEndingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFirstUpdateItem:(id)arg1;
- (void)setLastUpdateItem:(id)arg1;
- (id)updateItems;

@end
