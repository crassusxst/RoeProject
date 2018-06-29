//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMNativeDelegate.h"

@class IMNative, NSDate, NSString, NSTimer, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WFSplashAdManager : NSObject <IMNativeDelegate>
{
    IMNative *_nativeAd;
    UIImageView *_logoView;
    UIView *_imageView;
    UIImageView *_bottomLogoView;
    UILabel *_timerLabel;
    UILabel *_infoLabel;
    NSTimer *_splashTimer;
    NSDate *_startReqTime;
    double _splashShowTime;
    double _reqTime;
    NSDate *_splashShowStartTime;
    NSDate *_lastBackgroundTime;
    _Bool _isLoading;
    _Bool _isShowing;
    _Bool _isNewLaunch;
    _Bool _isNativeInfoLoading;
    _Bool _hasFinished;
    _Bool _isVideo;
    NSString *_cacheDir;
}

+ (id)adSplashConfig;
+ (double)imageRequestTimeout;
+ (double)maxCacheSaveDays;
+ (double)minBackgroundTime;
+ (void)setAdSplashConfig:(id)arg1;
+ (id)sharedManager;
+ (double)splashMaxLoadTime:(_Bool)arg1;
+ (double)splashShowInterval:(_Bool)arg1;
+ (double)splashShowTime:(_Bool)arg1 isVideo:(_Bool)arg2;
- (void).cxx_destruct;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
@property(readonly, copy) NSString *cacheDir; // @synthesize cacheDir=_cacheDir;
- (void)dismissSplashScreen;
- (void)hideSplashImage;
- (id)init;
- (_Bool)isShowing;
- (void)native:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)native:(id)arg1 didInteractWithParams:(id)arg2;
- (void)nativeAdImpressed:(id)arg1;
- (void)nativeDidDismissScreen:(id)arg1;
- (void)nativeDidFinishLoading:(id)arg1;
- (void)nativeDidFinishPlayingMedia:(id)arg1;
- (void)nativeDidPresentScreen:(id)arg1;
- (void)nativeWillDismissScreen:(id)arg1;
- (void)nativeWillPresentScreen:(id)arg1;
- (void)requestDidEnd:(_Bool)arg1;
- (void)requestSplash;
- (void)requestTimedOut;
- (void)showLogoScreen;
- (void)showSplash:(_Bool)arg1;
- (void)showSplashImage;
- (void)splashTikTok:(id)arg1;
- (void)userWillLeaveApplicationFromNative:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
