/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIMenuItem : NSObject  {
    NSString *_title;
    SEL _action;
    BOOL _dontDismiss;
}

@property(copy) NSString * title;
@property SEL action;
@property BOOL dontDismiss;


- (SEL)action;
- (BOOL)dontDismiss;
- (void)setDontDismiss:(BOOL)arg1;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2;
- (id)title;
- (void)setAction:(SEL)arg1;
- (void)setTitle:(id)arg1;

@end