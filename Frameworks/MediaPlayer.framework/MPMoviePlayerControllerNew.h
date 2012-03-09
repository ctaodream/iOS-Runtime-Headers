/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableSet, NSError, NSMutableDictionary, MPMovieErrorLog, MPMovieAccessLog, NSMutableArray, MPMovieView, MPMoviePlayerController, MPVideoViewController, MPAVController, NSArray;

@interface MPMoviePlayerControllerNew : NSObject <MPMovieViewDelegate, MPMediaPlayback> {
    MPAVController *_player;
    MPMoviePlayerController *_moviePlayer;
    MPVideoViewController *_videoViewController;
    MPMovieView *_movieView;
    NSArray *_movies;
    NSMutableArray *_queuedThumbnailRequests;
    NSMutableSet *_asyncImageGenerators;
    float _currentPlaybackRate;
    unsigned int _stateBeforeSettingPlaybackTime;
    int _movieSourceType;
    int _controlStyle;
    int _repeatMode;
    BOOL _shouldAutoplay;
    BOOL _useApplicationAudioSession;
    BOOL _setUseApplicationAudioSessionWhenPlaybackEnds;
    BOOL _preparedQueue;
    BOOL _didAppear;
    BOOL _ignorePlaybackStateChanges;
    BOOL _playWhenSourceTypeIsDetermined;
    BOOL _prepareWhenSourceTypeIsDetermined;
    BOOL _isChangingMoviePath;
    BOOL _wasPlayingBeforeSuspended;
    BOOL _canPostDidFinishNotificationOnItemChange;
    BOOL _didPostDidFinishNotification;
    BOOL _shouldRestartPlaybackFromBeginning;
    NSError *_playbackError;
    double _initialPlaybackTime;
    double _endPlaybackTime;
    NSMutableDictionary *_timedMetadataForUniqueKey;
    BOOL _isActive;
    BOOL _isResigningActive;
    BOOL _didResignActive;
    BOOL _canShowControlsOverlayBeforeResignedActive;
    double _timeWhenResignedActive;
    unsigned int _movieIndexWhenResignedActive;
    MPMovieAccessLog *_cachedAccessLog;
    MPMovieErrorLog *_cachedErrorLog;
}

@property(readonly) BOOL isPreparedToPlay;
@property double currentPlaybackTime;
@property float currentPlaybackRate;


- (id)init;
- (void)dealloc;
- (id)timedMetadataForKey:(id)arg1;
- (void)cancelAllThumbnailImageRequests;
- (void)_setNowPlayingMovie:(id)arg1;
- (id)_movies;
- (void)setMovieControlMode:(int)arg1;
- (BOOL)_shouldEnforceHDCP;
- (void)_setShouldEnforceHDCP:(BOOL)arg1;
- (void)_setMovieMediaTypesOverride:(int)arg1;
- (void)_setControlsHidden:(BOOL)arg1;
- (id)_navigationBar;
- (id)_movieTitle;
- (id)_movieSubtitle;
- (BOOL)_areControlsHidden;
- (BOOL)videoController:(id)arg1 tappedButtonPart:(unsigned int)arg2;
- (void)viewControllerRequestsExit:(id)arg1 reason:(int)arg2;
- (void)videoControllerDidExitFullscreen:(id)arg1;
- (void)videoControllerWillExitFullscreen:(id)arg1;
- (void)videoControllerDidEnterFullscreen:(id)arg1;
- (void)videoControllerWillEnterFullscreen:(id)arg1;
- (BOOL)videoControllerShouldAutohide:(id)arg1;
- (BOOL)_shouldContinuePlaybackInBackground;
- (id)_nowPlayingMovie;
- (void)requestThumbnailImagesAtTimes:(id)arg1 timeOption:(int)arg2;
- (void)_videoViewScaleModeDidChangeNotification:(id)arg1;
- (void)_setControlsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_pausePlaybackForSuspension;
- (BOOL)_canContinuePlayingWhenLocked;
- (id)thumbnailImageAtTime:(double)arg1 timeOption:(int)arg2;
- (void)_clearPlaybackStateAfterTimeJumpIfNecessary;
- (void)_postNotificationName:(id)arg1 object:(id)arg2;
- (void)_restartPlaybackFromBeginning;
- (void)_postDidFinishNotificationWithUserInfo:(id)arg1;
- (void)_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_cacheAccessAndErrorLogs;
- (void)_prepareToPlayWithStartIndex:(unsigned int)arg1;
- (void)_setUseApplicationAudioSession:(BOOL)arg1;
- (void)_ensureActive;
- (void)_setMovies:(id)arg1;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_windowOrientationChangingNotification:(id)arg1;
- (void)_willTerminateNotification:(id)arg1;
- (void)_didBecomeActiveNotification:(id)arg1;
- (void)_willResignActiveNotification:(id)arg1;
- (void)_videoViewPathWillChangeNotification:(id)arg1;
- (void)_movieNaturalSizeAvailableNotification:(id)arg1;
- (void)_movieDurationAvailableNotification:(id)arg1;
- (void)_movieSourceTypeAvailableNotification:(id)arg1;
- (void)_movieTypeAvailableNotification:(id)arg1;
- (void)_moviePlayerDidBecomeActiveNotification:(id)arg1;
- (void)_moviePlayerWillBecomeActiveNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_timedMetadataImageAvailableNotification:(id)arg1;
- (void)_timedMetadataAvailableNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_itemPlaybackErrorNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemReadyToPlayNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)arg1;
- (void)movieViewDidMoveToWindow:(id)arg1;
- (void)movieView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)_resignActive;
- (void)setCurrentPlaybackRate:(float)arg1;
- (float)currentPlaybackRate;
- (void)setCurrentPlaybackTime:(double)arg1;
- (double)endPlaybackTime;
- (double)initialPlaybackTime;
- (void)setMovieSourceType:(int)arg1;
- (BOOL)isPreparedToPlay;
- (BOOL)allowsAirPlay;
- (void)setScalingMode:(int)arg1;
- (int)scalingMode;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1;
- (BOOL)isFullscreen;
- (void)setShouldAutoplay:(BOOL)arg1;
- (BOOL)shouldAutoplay;
- (void)setControlStyle:(int)arg1;
- (int)controlStyle;
- (int)loadState;
- (id)contentURL;
- (void)_setMoviePlayer:(id)arg1;
- (id)_videoView;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (id)errorLog;
- (id)accessLog;
- (id)timedMetadata;
- (BOOL)isAirPlayVideoActive;
- (void)prepareToPlay;
- (void)pause;
- (void)stop;
- (id)backgroundView;
- (id)view;
- (double)duration;
- (void)setBackgroundColor:(id)arg1;
- (void)play;
- (int)movieSourceType;
- (int)movieMediaTypes;
- (id)_videoViewController;
- (void)_setMovieTitle:(id)arg1;
- (void)_setMovieSubtitle:(id)arg1;
- (void)setAllowsAirPlay:(BOOL)arg1;
- (void)setContentURL:(id)arg1;
- (void)setEndPlaybackTime:(double)arg1;
- (void)setInitialPlaybackTime:(double)arg1;
- (void)setUseApplicationAudioSession:(BOOL)arg1;
- (double)playableDuration;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)skipToPreviousItem;
- (void)skipToNextItem;
- (void)skipToBeginning;
- (void)setRepeatMode:(int)arg1;
- (double)currentPlaybackTime;
- (void)endSeeking;
- (int)repeatMode;
- (int)playbackState;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;

@end