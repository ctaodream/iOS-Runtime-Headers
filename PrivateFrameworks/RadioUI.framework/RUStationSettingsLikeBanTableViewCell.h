/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSString, UIImage, UIImageView, UILabel;

@interface RUStationSettingsLikeBanTableViewCell : RUTableViewCell {
    NSString *_album;
    UILabel *_albumLabel;
    double _albumMinXRatioWithContentWidth;
    NSString *_artist;
    UILabel *_artistLabel;
    double _artistMinXRatioWithContentWidth;
    UIImageView *_artworkImageView;
    double _artworkMinX;
    UILabel *_titleLabel;
}

@property(copy) NSString * album;
@property double albumMinXRatioWithContentWidth;
@property(copy) NSString * artist;
@property double artistMinXRatioWithContentWidth;
@property(retain) UIImage * artworkImage;
@property double artworkMinX;
@property(copy) NSString * title;

+ (id)_textLabelFontWithEmphasis:(bool)arg1;
+ (struct CGSize { double x1; double x2; })artworkSize;
+ (double)defaultHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_updateAlbumLabel;
- (void)_updateArtistLabel;
- (void)_updateViewForHorizontalSizeClassChange;
- (void)_updateViewForTraitCollectionChange;
- (id)album;
- (double)albumMinXRatioWithContentWidth;
- (id)artist;
- (double)artistMinXRatioWithContentWidth;
- (id)artworkImage;
- (double)artworkMinX;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setAlbum:(id)arg1;
- (void)setAlbumMinXRatioWithContentWidth:(double)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtistMinXRatioWithContentWidth:(double)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setArtworkMinX:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end