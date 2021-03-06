/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCardCollectionStackViewController : NSObject <ABCardCollectionViewPresentation> {
    CNScrollableContainerView * _container;
    <ABCardCollectionViewPresentationDelegate> * _delegate;
    NSMutableArray * _items;
    NSStackView * _stackView;
}

@property (nonatomic, readwrite, retain) CNScrollableContainerView *container;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) <ABCardCollectionViewPresentationDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) NSMutableArray *items;
@property (nonatomic, readwrite, retain) NSStackView *stackView;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)addItems:(id)arg1;
- (id)container;
- (id)delegate;
- (double)desiredHeight;
- (id)initWithDelegate:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (id)items;
- (void)performBatchUpdates:(id)arg1;
- (void)reloadItem:(id)arg1 animated:(BOOL)arg2;
- (void)removeAllItems;
- (void)removeItem:(id)arg1 animated:(BOOL)arg2;
- (void)setContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSpacing:(double)arg1 afterItem:(id)arg2;
- (void)setStackView:(id)arg1;
- (void)setUpContainer;
- (void)setUpStackView;
- (void)showItem:(id)arg1 animated:(BOOL)arg2;
- (id)stackView;
- (id)viewForDisplay;

@end
