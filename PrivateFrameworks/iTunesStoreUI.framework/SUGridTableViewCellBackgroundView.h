/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIBezierPath, UIColor, UIImage;

@interface SUGridTableViewCellBackgroundView : UIView  {
    UIColor *_backgroundColor;
    int _borderedEdges;
    UIImage *_borderImage;
    UIBezierPath *_bottomCornersPath;
    UIBezierPath *_topCornersPath;
}

@property int borderedEdges;
@property(retain) UIImage * borderImage;


- (void)dealloc;
- (void)setBorderImage:(id)arg1;
- (id)borderImage;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)borderedEdges;
- (void)setBorderedEdges:(int)arg1;
- (void)_drawBorderToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawInteriorBordersWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_bottomCornersPath;
- (id)_topCornersPath;
- (void)_resetCachedPaths;

@end