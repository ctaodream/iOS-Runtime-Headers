/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, UIImageView, UIButton;

@interface UIStepper : UIControl  {
    BOOL _isRtoL;
    UIImageView *_middleView;
    UIButton *_plusButton;
    UIButton *_minusButton;
    NSTimer *_repeatTimer;
    int _repeatCount;
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _stepValue;
    BOOL _continuous;
    BOOL _autorepeat;
    BOOL _wraps;
}

@property(getter=isContinuous) BOOL continuous;
@property BOOL autorepeat;
@property BOOL wraps;
@property double value;
@property double minimumValue;
@property double maximumValue;
@property double stepValue;


- (void)dealloc;
- (void)setAutorepeat:(BOOL)arg1;
- (BOOL)autorepeat;
- (double)stepValue;
- (void)setStepValue:(double)arg1;
- (void)_stopTimer;
- (void)_updateCount:(id)arg1;
- (void)_updateHighlightingAtPoint:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_startTimer;
- (void)_updateButtonEnabled;
- (void)_commonStepperInit;
- (void)setWraps:(BOOL)arg1;
- (BOOL)wraps;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setContinuous:(BOOL)arg1;
- (BOOL)isContinuous;
- (double)maximumValue;
- (double)minimumValue;
- (double)value;
- (void)setValue:(double)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end