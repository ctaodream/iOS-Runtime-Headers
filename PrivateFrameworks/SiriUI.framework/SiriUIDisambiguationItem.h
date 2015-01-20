/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class NSString, UIImageView;

@interface SiriUIDisambiguationItem : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    NSString *_extraDisambiguationSubText;
    NSString *_extraDisambiguationText;
    NSString *_headingText;
    UIImageView *_imageView;
    NSString *_subtitle;
    NSString *_title;
    } _titleBoldedRange;
    bool_showsFavoriteStar;
}

@property(copy) NSString * extraDisambiguationSubText;
@property(copy) NSString * extraDisambiguationText;
@property(copy) NSString * headingText;
@property(retain) UIImageView * imageView;
@property bool showsFavoriteStar;
@property(copy) NSString * subtitle;
@property(copy) NSString * title;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } titleBoldedRange;

+ (id)disambiguationItem;

- (void).cxx_destruct;
- (id)extraDisambiguationSubText;
- (id)extraDisambiguationText;
- (id)headingText;
- (id)imageView;
- (void)setExtraDisambiguationSubText:(id)arg1;
- (void)setExtraDisambiguationText:(id)arg1;
- (void)setHeadingText:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setShowsFavoriteStar:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleBoldedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)showsFavoriteStar;
- (id)subtitle;
- (id)title;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })titleBoldedRange;

@end