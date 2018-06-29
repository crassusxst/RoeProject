//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdSpreadScreenAdNetworkAdapter.h"

#import "BaiduMobAdSplashDelegate.h"

@class BaiduMobAdSplash, NSString;

__attribute__((visibility("hidden")))
@interface AdSplashAdapterBaidu : AdSpreadScreenAdNetworkAdapter <BaiduMobAdSplashDelegate>
{
    BaiduMobAdSplash *_splash;
}

+ (void)load;
+ (int)networkType;
- (void).cxx_destruct;
- (id)channelId;
- (_Bool)enableLocation;
- (_Bool)loadAdSpreadScreen:(id)arg1;
- (id)publisherId;
@property(retain, nonatomic) BaiduMobAdSplash *splash; // @synthesize splash=_splash;
- (void)splashDidDismissScreen:(id)arg1;
- (void)splashSuccessPresentScreen:(id)arg1;
- (void)splashlFailPresentScreen:(id)arg1 withError:(int)arg2;
- (void)stopBeingDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
