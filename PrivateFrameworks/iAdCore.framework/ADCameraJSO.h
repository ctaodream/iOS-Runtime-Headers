/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSString, <ADJSODelegate>;

@interface ADCameraJSO : ADJavaScriptObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    NSString *_currentPictureURI;
    <ADJSODelegate> *_delegate;
    NSString *_internalPictureURI;
}

@property(copy) NSString * currentPictureURI;
@property <ADJSODelegate> * delegate;
@property(copy) NSString * internalPictureURI;

+ (void)initializeInContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptSelectors;
+ (id)scriptingKeys;

- (void)_finishWithSuccess:(BOOL)arg1;
- (void)_presentCamera;
- (void)_setCurrentImage:(struct CGImage { }*)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)currentPictureURI;
- (void)dealloc;
- (id)delegate;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)init;
- (id)internalPictureURI;
- (void)present:(id)arg1;
- (void)setCurrentPictureURI:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalPictureURI:(id)arg1;

@end