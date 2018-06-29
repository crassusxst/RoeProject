//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IJKMediaPlayback.h"

@class IJKFFMonitor, IJKFFMoviePlayerMessagePool, IJKNotificationManager, NSString, NSTimer, UIView, UIView<SDLGLViewProtocol>;

@interface IJKFFMoviePlayerController : NSObject <IJKMediaPlayback>
{
    struct IjkMediaPlayer *_mediaPlayer;
    UIView<SDLGLViewProtocol> *_glView;
    IJKFFMoviePlayerMessagePool *_msgPool;
    NSString *_urlString;
    long long _videoWidth;
    long long _videoHeight;
    long long _sampleAspectRatioNumerator;
    long long _sampleAspectRatioDenominator;
    _Bool _seeking;
    long long _bufferingTime;
    long long _bufferingPosition;
    _Bool _keepScreenOnWhilePlaying;
    _Bool _pauseInBackground;
    _Bool _isVideoToolboxOpen;
    _Bool _playingBeforeInterruption;
    IJKNotificationManager *_notificationManager;
    struct AVAppAsyncStatistic _asyncStat;
    _Bool _shouldShowHudView;
    NSTimer *_hudTimer;
    _Bool _isPreparedToPlay;
    _Bool _shouldAutoplay;
    _Bool _allowsMediaAirPlay;
    _Bool _airPlayMediaActive;
    _Bool _isDanmakuMediaAirPlay;
    _Bool _allowsVRPlay;
    UIView *_view;
    double currentPlaybackTime;
    double duration;
    double playableDuration;
    long long _bufferingProgress;
    long long _numberOfBytesTransferred;
    long long _playbackState;
    unsigned long long _loadState;
    long long _scalingMode;
    IJKFFMonitor *_monitor;
    double _fpsInMeta;
    id <IJKMediaUrlOpenDelegate> _segmentOpenDelegate;
    id <IJKMediaUrlOpenDelegate> _tcpOpenDelegate;
    id <IJKMediaUrlOpenDelegate> _httpOpenDelegate;
    id <IJKMediaUrlOpenDelegate> _liveOpenDelegate;
    id <IJKMediaNativeInvokeDelegate> _nativeInvokeDelegate;
    struct CGSize _naturalSize;
}

+ (_Bool)checkIfFFmpegVersionMatch:(_Bool)arg1;
+ (_Bool)checkIfPlayerVersionMatch:(_Bool)arg1 version:(id)arg2;
+ (void)setLogLevel:(int)arg1;
+ (void)setLogReport:(_Bool)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool airPlayMediaActive; // @synthesize airPlayMediaActive=_airPlayMediaActive;
@property(nonatomic) _Bool allowsMediaAirPlay; // @synthesize allowsMediaAirPlay=_allowsMediaAirPlay;
@property(readonly, nonatomic) _Bool allowsVRPlay; // @synthesize allowsVRPlay=_allowsVRPlay;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)applicationWillResignActive;
- (void)applicationWillTerminate;
- (void)audioSessionInterrupt:(id)arg1;
@property(readonly, nonatomic) long long bufferingProgress; // @synthesize bufferingProgress=_bufferingProgress;
- (void)changeNaturalSize;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime;
- (void)dealloc;
- (void)didShutdown;
@property(readonly, nonatomic) double duration; // @synthesize duration;
@property(readonly, nonatomic) double fpsAtOutput;
@property(readonly, nonatomic) double fpsInMeta; // @synthesize fpsInMeta=_fpsInMeta;
@property(retain, nonatomic) id <IJKMediaUrlOpenDelegate> httpOpenDelegate; // @synthesize httpOpenDelegate=_httpOpenDelegate;
- (id)initWithContentURL:(id)arg1 withOptions:(id)arg2;
- (id)initWithContentURLString:(id)arg1 withOptions:(id)arg2;
- (id)initWithContentURLString:(id)arg1 withOptions:(id)arg2 withVRMode:(_Bool)arg3;
@property(nonatomic) _Bool isDanmakuMediaAirPlay; // @synthesize isDanmakuMediaAirPlay=_isDanmakuMediaAirPlay;
- (_Bool)isPlaying;
@property(readonly, nonatomic) _Bool isPreparedToPlay; // @synthesize isPreparedToPlay=_isPreparedToPlay;
- (_Bool)isVideoToolboxOpen;
@property(retain, nonatomic) id <IJKMediaUrlOpenDelegate> liveOpenDelegate; // @synthesize liveOpenDelegate=_liveOpenDelegate;
@property(readonly, nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(readonly, nonatomic) IJKFFMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IJKMediaNativeInvokeDelegate> nativeInvokeDelegate; // @synthesize nativeInvokeDelegate=_nativeInvokeDelegate;
@property(readonly, nonatomic) struct CGSize naturalSize; // @synthesize naturalSize=_naturalSize;
@property(readonly, nonatomic) long long numberOfBytesTransferred; // @synthesize numberOfBytesTransferred=_numberOfBytesTransferred;
- (id)obtainMessage;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) double playableDuration; // @synthesize playableDuration;
@property(nonatomic) float playbackRate;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
- (void)postEvent:(id)arg1;
- (void)prepareToPlay;
- (void)refreshHudView;
- (void)registerApplicationObservers;
@property(nonatomic) long long scalingMode; // @synthesize scalingMode=_scalingMode;
@property(retain, nonatomic) id <IJKMediaUrlOpenDelegate> segmentOpenDelegate; // @synthesize segmentOpenDelegate=_segmentOpenDelegate;
- (void)setCodecOptionIntValue:(long long)arg1 forKey:(id)arg2;
- (void)setCodecOptionValue:(id)arg1 forKey:(id)arg2;
- (void)setFormatOptionIntValue:(long long)arg1 forKey:(id)arg2;
- (void)setFormatOptionValue:(id)arg1 forKey:(id)arg2;
- (void)setHudUrl:(id)arg1;
- (void)setMaxBufferSize:(int)arg1;
- (void)setOptionIntValue:(long long)arg1 forKey:(id)arg2 ofCategory:(int)arg3;
- (void)setOptionValue:(id)arg1 forKey:(id)arg2 ofCategory:(int)arg3;
- (void)setPauseInBackground:(_Bool)arg1;
- (void)setPlayerOptionIntValue:(long long)arg1 forKey:(id)arg2;
- (void)setPlayerOptionValue:(id)arg1 forKey:(id)arg2;
- (void)setScreenOn:(_Bool)arg1;
@property(nonatomic) _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
@property(nonatomic) _Bool shouldShowHudView;
- (void)setSwsOptionIntValue:(long long)arg1 forKey:(id)arg2;
- (void)setSwsOptionValue:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) id <IJKMediaUrlOpenDelegate> tcpOpenDelegate; // @synthesize tcpOpenDelegate=_tcpOpenDelegate;
- (void)shutdown;
- (void)shutdownClose:(id)arg1;
- (void)shutdownWaitStop:(id)arg1;
- (void)startHudTimer;
- (void)stop;
- (void)stopHudTimer;
- (id)thumbnailImageAtCurrentTime;
- (id)thumbnailImageAtTime:(double)arg1 timeOption:(long long)arg2;
- (void)unregisterApplicationObservers;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

