/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUIrisBadgeVisibilityController : NSObject <PUAssetViewModelChangeObserver> {
    unsigned int _appearanceState;
    PUAssetViewModel *_assetViewModel;
    <PUIrisBadgeVisibilityControllerDelegate> *_delegate;
    unsigned int _requestID;
    BOOL _requestIsInProgress;
}

@property (nonatomic) unsigned int appearanceState;
@property (nonatomic) PUAssetViewModel *assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUIrisBadgeVisibilityControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelHideRequest;
- (unsigned int)_defaultAppearanceState;
- (void)_enqueueHideRequest;
- (void)_transitionToAppearanceState:(unsigned int)arg1;
- (void)_updateAppearance;
- (unsigned int)appearanceState;
- (id)assetViewModel;
- (id)delegate;
- (id)init;
- (void)setAssetViewModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
