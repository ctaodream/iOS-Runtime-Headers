/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKPanGestureRecognizer : UIPanGestureRecognizer {
    NSMutableArray *_accumulatedTouches;
    float _currentMaxWeight;
    float _currentWeight;
    struct CGPoint { 
        float x; 
        float y; 
    } _locationOfFirstTouch;
}

@property (nonatomic, retain) NSMutableArray *accumulatedTouches;
@property (nonatomic) float currentMaxWeight;
@property (nonatomic) float currentWeight;
@property (nonatomic) struct CGPoint { float x1; float x2; } locationOfFirstTouch;
@property (nonatomic, readonly) NSArray *touchesBeforeRecognition;

- (void).cxx_destruct;
- (id)accumulatedTouches;
- (float)currentMaxWeight;
- (float)currentWeight;
- (struct CGPoint { float x1; float x2; })locationOfFirstTouch;
- (struct CGPoint { float x1; float x2; })locationOfFirstTouchInView:(id)arg1;
- (void)reset;
- (void)setAccumulatedTouches:(id)arg1;
- (void)setCurrentMaxWeight:(float)arg1;
- (void)setCurrentWeight:(float)arg1;
- (void)setLocationOfFirstTouch:(struct CGPoint { float x1; float x2; })arg1;
- (id)touchesBeforeRecognition;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
