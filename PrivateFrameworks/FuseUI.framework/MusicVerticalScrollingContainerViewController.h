/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicVerticalScrollingContainerViewController : UIViewController <MusicClientContextConsuming, MusicVerticalScrollingContainerCollectionViewCellDelegate, MusicVerticalScrollingContainerCollectionViewDelegate, MusicVerticalScrollingContainerItemContextDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    MusicClientContext *_clientContext;
    MusicVerticalScrollingContainerCollectionView *_containerCollectionView;
    <MusicVerticalScrollingContainerViewControllerDelegate> *_delegate;
    struct { 
        unsigned int contentOffsetProxyingPolicyForItem : 1; 
        unsigned int didLayoutSubviews : 1; 
        unsigned int didScroll : 1; 
        unsigned int contentSizeDidChange : 1; 
        unsigned int willEndDraggingWithVelocity : 1; 
    } _delegateRespondsToSelector;
    NSMapTable *_itemToItemContext;
    int _keyboardDismissMode;
    unsigned int _numberOfRunningAnimatedInvalidations;
    BOOL _shouldUpdateLayoutOfVisibleCollectionViewCellsUponCompletingAnimatedInvalidations;
    NSArray *_verticalScrollingContainerItems;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) UICollectionView *containerCollectionView;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicVerticalScrollingContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int keyboardDismissMode;
@property (getter=isPerformingLayout, nonatomic, readonly) BOOL performingLayout;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *verticalScrollingContainerItems;

- (void).cxx_destruct;
- (void)_didFinishAnimatedInvalidation;
- (id)_parentCellForItem:(id)arg1;
- (unsigned int)_positionForItemAtIndexPath:(id)arg1;
- (void)_updateLayoutOfCollectionViewCell:(id)arg1;
- (void)_updateLayoutOfVisibleCollectionViewCells;
- (void)_willBeginAnimatedInvalidation;
- (void)beginOverridingContentHeightOfVerticalScrollingContainerItem:(id)arg1 toValue:(float)arg2;
- (id)clientContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)containerCollectionView;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (struct CGPoint { float x1; float x2; })contentOffsetForVerticalScrollingContainerItem:(id)arg1;
- (int)contentOffsetProxyingPolicyForVerticalScrollingContainerItemContext:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)endOverridingContentHeightOfVerticalScrollingContainerItem:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidateLayoutForVerticalScrollingContainerItems:(id)arg1;
- (void)invalidateLayoutForVerticalScrollingContainerItems:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)isOverridingContentHeightOfVerticalScrollingContainerItem:(id)arg1;
- (BOOL)isPerformingLayout;
- (int)keyboardDismissMode;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardDismissMode:(int)arg1;
- (void)setVerticalScrollingContainerItems:(id)arg1;
- (void)verticalScrollingContainerCollectionViewCell:(id)arg1 didUpdateBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withPreviousBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)verticalScrollingContainerCollectionViewContentSizeDidChange:(id)arg1;
- (void)verticalScrollingContainerCollectionViewDidLayoutSubviews:(id)arg1;
- (void)verticalScrollingContainerItemContextRequestsContentSizeUpdate:(id)arg1;
- (id)verticalScrollingContainerItems;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end