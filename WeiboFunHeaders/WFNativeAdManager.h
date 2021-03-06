//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMNativeDelegate.h"

@class IMNative, NSString, TTURLRequest, WFNativeAdInfo;

__attribute__((visibility("hidden")))
@interface WFNativeAdManager : NSObject <IMNativeDelegate>
{
    IMNative *_inmobiAd;
    WFNativeAdInfo *_adInfo;
    _Bool _isLoading;
    _Bool _isPresentingAdScreen;
    TTURLRequest *_request;
    id <WFNativeAdRefreshDelegate> _refreshDelegate;
}

+ (id)adNativeConfig;
+ (long long)minHotCommentCount:(int)arg1;
+ (_Bool)nativeAdEnabled;
+ (void)setAdNativeConfig:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)getAd;
- (_Bool)isPresentingAdScreen;
- (void)loadAd;
- (void)native:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)native:(id)arg1 didInteractWithParams:(id)arg2;
- (void)nativeAdImpressed:(id)arg1;
- (void)nativeDidDismissScreen:(id)arg1;
- (void)nativeDidFinishLoading:(id)arg1;
- (void)nativeDidFinishPlayingMedia:(id)arg1;
- (void)nativeDidPresentScreen:(id)arg1;
- (void)nativeWillDismissScreen:(id)arg1;
- (void)nativeWillPresentScreen:(id)arg1;
- (void)setRefreshDelegate:(id)arg1;
- (void)userDidSkipPlayingMediaFromNative:(id)arg1;
- (void)userWillLeaveApplicationFromNative:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

