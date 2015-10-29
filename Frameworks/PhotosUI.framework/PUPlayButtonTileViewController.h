/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPlayButtonTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver> {
    PUBrowsingVideoPlayer *__browsingVideoPlayer;
    UIView<PLVideoOverlayButton> *__playButton;
    BOOL __shouldShowPlayButton;
    PUAssetViewModel *_assetViewModel;
    <PUPlayButtonTileViewControllerDelegate> *_delegate;
    struct { 
        BOOL respondsToDidTapButton; 
        BOOL respondsToDelayForButtonAnimation; 
    } _delegateFlags;
}

@property (setter=_setBrowsingVideoPlayer:, nonatomic, retain) PUBrowsingVideoPlayer *_browsingVideoPlayer;
@property (setter=_setPlayButton:, nonatomic, retain) UIView<PLVideoOverlayButton> *_playButton;
@property (setter=_setShouldShowPlayButton:, nonatomic) BOOL _shouldShowPlayButton;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPlayButtonTileViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (struct CGSize { float x1; float x2; })playButtonTileSize;

- (void).cxx_destruct;
- (id)_browsingVideoPlayer;
- (id)_playButton;
- (void)_playButtonTapped:(id)arg1;
- (void)_setBrowsingVideoPlayer:(id)arg1;
- (void)_setPlayButton:(id)arg1;
- (void)_setShouldShowPlayButton:(BOOL)arg1;
- (void)_setShouldShowPlayButton:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_shouldShowPlayButton;
- (void)_updateButtonVisibilityAnimated:(BOOL)arg1;
- (id)assetViewModel;
- (void)becomeReusable;
- (void)dealloc;
- (id)delegate;
- (id)loadView;
- (void)setAssetViewModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
