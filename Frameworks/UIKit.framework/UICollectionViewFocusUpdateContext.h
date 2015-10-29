/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewFocusUpdateContext : UIFocusUpdateContext {
    UICollectionView *_collectionView;
    BOOL _didSetNextFocusedIndexPath;
    BOOL _didSetPreviouslyFocusedIndexPath;
    NSIndexPath *_nextFocusedIndexPath;
    NSIndexPath *_previouslyFocusedIndexPath;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) NSIndexPath *nextFocusedIndexPath;
@property (nonatomic, readonly) NSIndexPath *previouslyFocusedIndexPath;

+ (id)_contextWithContext:(id)arg1 collectionView:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithContext:(id)arg1 collectionView:(id)arg2;
- (void)_setInitialDestinationEnvironment:(id)arg1;
- (void)_setSourceView:(id)arg1;
- (id)collectionView;
- (id)nextFocusedIndexPath;
- (id)previouslyFocusedIndexPath;

@end
