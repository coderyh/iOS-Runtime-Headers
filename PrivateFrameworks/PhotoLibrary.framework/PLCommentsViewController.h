/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLCommentsViewControllerDelegate>, CAGradientLayer, NSCache, NSString, PLCloudSharedComment, PLManagedAsset, PLPhotoCommentEntryView, UIBarButtonItem, UIImageView, UITableView, UIView, _UIBackdropView;

@interface PLCommentsViewController : UIViewController <PLCloudCommentsChangeObserver, PLPhotoCommentEntryViewDelegate, PLDismissableViewController, UITableViewDelegate, UITableViewDataSource> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    PLManagedAsset *_asset;
    } _availableBounds;
    _UIBackdropView *_backdropView;
    UIBarButtonItem *_cancelButton;
    <PLCommentsViewControllerDelegate> *_commentsControllerDelegate;
    NSCache *_commentsHeightCache;
    UIView *_containerView;
    PLPhotoCommentEntryView *_entryView;
    UIImageView *_gradientView;
    PLCloudSharedComment *_justInsertedComment;
    double _keyboardOverlap;
    CAGradientLayer *_maskLayer;
    UIView *_tableContainerView;
    UITableView *_tableView;
    bool_editMode;
    bool_isCompact;
    bool_justTappedSmileButton;
    bool_shouldAdjustInitialScrollPosition;
    bool_temporaryKeyboardHideReshow;
}

@property(retain) PLManagedAsset * asset;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } availableBounds;
@property(readonly) UIBarButtonItem * cancelButton;
@property <PLCommentsViewControllerDelegate> * commentsControllerDelegate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool editMode;
@property(readonly) unsigned long long hash;
@property bool isCompact;
@property(retain) PLCloudSharedComment * justInsertedComment;
@property(readonly) Class superclass;

- (void)_addCommentButtonTapped:(id)arg1;
- (void)_adjustInitialScrollPosition:(bool)arg1;
- (bool)_adjustTextEntrySize;
- (bool)_checkAndAlertMaxCommentsReachedWhenFinalizing:(bool)arg1;
- (id)_firstUnreadCloudComment;
- (double)_heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_postCommentValidated:(id)arg1;
- (struct CGSize { double x1; double x2; })_preferredViewSizeInContainerSize:(struct CGSize { double x1; double x2; })arg1 forInterfaceOrientation:(long long)arg2 tableViewSize:(struct CGSize { double x1; double x2; }*)arg3;
- (void)_smileButtonTapped:(id)arg1;
- (void)_startWatchingKeyboard;
- (void)_stopWatchingKeyboard;
- (double)_tableViewHeightForWidth:(double)arg1 interfaceOrientation:(long long)arg2;
- (void)_updateLayerMaskWithBoundsChange;
- (id)asset;
- (long long)assetOwnerCommentSection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })availableBounds;
- (id)cancelButton;
- (void)cancelCurrentAction:(id)arg1;
- (void)cancelDeleteMode:(id)arg1;
- (bool)checkAndAlertMaxLikesReached;
- (void)cloudCommentsDidChange:(id)arg1;
- (id)commentsControllerDelegate;
- (void)dealloc;
- (bool)editMode;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCompact;
- (id)justInsertedComment;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)photoCommentEntryViewHeightDidChange:(id)arg1;
- (long long)postCommentSection;
- (bool)prepareForDismissingForced:(bool)arg1;
- (void)scrollToComment:(id)arg1 animated:(bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setAvailableBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCommentsControllerDelegate:(id)arg1;
- (void)setEditMode:(bool)arg1;
- (void)setIsCompact:(bool)arg1;
- (void)setJustInsertedComment:(id)arg1;
- (void)setRasterization:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldShowCommentPostingUI;
- (bool)showAssetOwnerSection;
- (long long)smileCommentSection;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (long long)textCommentSection;
- (void)updateViewLayoutWithDuration:(double)arg1 completion:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end