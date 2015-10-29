/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImageTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUImageRequesterObserver> {
    int __assetLoadingStage;
    NSDate *__assetLoadingStartDate;
    int __fullsizeImageOrientation;
    struct CGSize { 
        float width; 
        float height; 
    } __fullsizeImageSize;
    struct CGSize { 
        float width; 
        float height; 
    } __fullsizeImageUntransformedSize;
    NSData *__fullsizeJPEGData;
    PLTiledLayer *__fullsizeTiledLayer;
    PUImageRequester *__imageRequester;
    UIImageView *__imageView;
    BOOL __isDisplayingFullQualityImage;
    BOOL __needsUpdateFullsizeImageMetadata;
    BOOL __needsUpdateFullsizeTiledLayer;
    BOOL __needsUpdateImage;
    BOOL __needsUpdateImageView;
    struct CGSize { 
        float width; 
        float height; 
    } __targetSize;
    BOOL _animatesImageAppearance;
    <PUDisplayAsset> *_asset;
    PUAssetViewModel *_assetViewModel;
    UIImage *_image;
    PUMediaProvider *_mediaProvider;
    UIColor *_placeholderColor;
    BOOL _shouldUseFullsizeJPEG;
}

@property (setter=_setAssetLoadingStage:, nonatomic) int _assetLoadingStage;
@property (setter=_setAssetLoadingStartDate:, nonatomic, retain) NSDate *_assetLoadingStartDate;
@property (setter=_setFullsizeImageOrientation:, nonatomic) int _fullsizeImageOrientation;
@property (setter=_setFullsizeImageSize:, nonatomic) struct CGSize { float x1; float x2; } _fullsizeImageSize;
@property (setter=_setFullsizeImageUntransformedSize:, nonatomic) struct CGSize { float x1; float x2; } _fullsizeImageUntransformedSize;
@property (setter=_setFullsizeJPEGData:, nonatomic, retain) NSData *_fullsizeJPEGData;
@property (setter=_setFullsizeTiledLayer:, nonatomic, retain) PLTiledLayer *_fullsizeTiledLayer;
@property (setter=_setImageRequester:, nonatomic, retain) PUImageRequester *_imageRequester;
@property (nonatomic, readonly) UIImageView *_imageView;
@property (setter=_setDisplayingFullQualityImage:, nonatomic) BOOL _isDisplayingFullQualityImage;
@property (setter=_setNeedsUpdateFullsizeImageMetadata:, nonatomic) BOOL _needsUpdateFullsizeImageMetadata;
@property (setter=_setNeedsUpdateFullsizeTiledLayer:, nonatomic) BOOL _needsUpdateFullsizeTiledLayer;
@property (setter=_setNeedsUpdateImage:, nonatomic) BOOL _needsUpdateImage;
@property (setter=_setNeedsUpdateImageView:, nonatomic) BOOL _needsUpdateImageView;
@property (setter=_setTargetSize:, nonatomic) struct CGSize { float x1; float x2; } _targetSize;
@property (nonatomic) BOOL animatesImageAppearance;
@property (nonatomic, retain) <PUDisplayAsset> *asset;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) PUMediaProvider *mediaProvider;
@property (nonatomic, copy) UIColor *placeholderColor;
@property (nonatomic) BOOL shouldUseFullsizeJPEG;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_assetLoadingStage;
- (id)_assetLoadingStartDate;
- (void)_cancelAllImageRequests;
- (int)_fullsizeImageOrientation;
- (struct CGSize { float x1; float x2; })_fullsizeImageSize;
- (struct CGSize { float x1; float x2; })_fullsizeImageUntransformedSize;
- (id)_fullsizeJPEGData;
- (id)_fullsizeTiledLayer;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleShouldReloadAssetMediaNotification:(id)arg1;
- (id)_imageRequester;
- (id)_imageView;
- (void)_invalidateFullsizeImageMetadata;
- (void)_invalidateFullsizeTiledLayer;
- (void)_invalidateImage;
- (void)_invalidateImageView;
- (BOOL)_isDisplayingFullQualityImage;
- (BOOL)_needsUpdate;
- (BOOL)_needsUpdateFullsizeImageMetadata;
- (BOOL)_needsUpdateFullsizeTiledLayer;
- (BOOL)_needsUpdateImage;
- (BOOL)_needsUpdateImageView;
- (void)_setAssetLoadingStage:(int)arg1;
- (void)_setAssetLoadingStartDate:(id)arg1;
- (void)_setDisplayingFullQualityImage:(BOOL)arg1;
- (void)_setFullsizeImageOrientation:(int)arg1;
- (void)_setFullsizeImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setFullsizeImageUntransformedSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setFullsizeJPEGData:(id)arg1;
- (void)_setFullsizeTiledLayer:(id)arg1;
- (void)_setImageRequester:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateFullsizeImageMetadata:(BOOL)arg1;
- (void)_setNeedsUpdateFullsizeTiledLayer:(BOOL)arg1;
- (void)_setNeedsUpdateImage:(BOOL)arg1;
- (void)_setNeedsUpdateImageView:(BOOL)arg1;
- (void)_setTargetSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_targetSize;
- (void)_updateAssetLoadingStage;
- (void)_updateFullsizeImageMetadataIfNeeded;
- (void)_updateFullsizeTiledLayerIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateImageIfNeeded;
- (void)_updateImageViewIfNeeded;
- (void)_updateReadyForDisplay;
- (BOOL)animatesImageAppearance;
- (void)applyLayoutInfo:(id)arg1;
- (id)asset;
- (void)assetContentDidChange;
- (void)assetDidChange;
- (id)assetViewModel;
- (void)assetViewModelDidChange;
- (void)becomeReusable;
- (void)dealloc;
- (void)didChangeVisibleRect;
- (id)generateAssetTransitionInfo;
- (id)image;
- (void)imageRequester:(id)arg1 didChange:(id)arg2;
- (id)loadView;
- (id)mediaProvider;
- (void)mediaProviderDidChange;
- (id)placeholderColor;
- (void)setAnimatesImageAppearance:(BOOL)arg1;
- (void)setAsset:(id)arg1;
- (void)setAssetViewModel:(id)arg1;
- (void)setEdgeAntialiasingEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setPreloadedImage:(id)arg1;
- (void)setShouldUseFullsizeJPEG:(BOOL)arg1;
- (BOOL)shouldUseFullsizeJPEG;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (BOOL)wantsVisibleRectChanges;

@end
