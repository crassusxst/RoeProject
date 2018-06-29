//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AdNativeManager, AdViewAdNetworkConfig, AdViewConfig, UIViewController;

@interface AdNativeAdNetworkAdapter : NSObject
{
    id <AdNativeManagerDelegate> adNativeDelegate;
    AdNativeManager *adNativeManager;
    AdViewConfig *adNativeConfig;
    AdViewAdNetworkConfig *networkConfig;
    UIViewController *adNativeController;
    int loadType;
    _Bool _bWaitAd;
}

+ (int)networkType;
- (void).cxx_destruct;
@property(retain, nonatomic) AdViewConfig *adNativeConfig; // @synthesize adNativeConfig;
@property(retain, nonatomic) UIViewController *adNativeController; // @synthesize adNativeController;
@property(nonatomic) __weak id <AdNativeManagerDelegate> adNativeDelegate; // @synthesize adNativeDelegate;
@property(nonatomic) __weak AdNativeManager *adNativeManager; // @synthesize adNativeManager;
@property(nonatomic) _Bool bWaitAd; // @synthesize bWaitAd=_bWaitAd;
- (void)clickNativeAd:(id)arg1 withClickPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)initWithAdNativeDelegate:(id)arg1 manager:(id)arg2 config:(id)arg3 networkConfig:(id)arg4;
- (_Bool)isBannerAnimationOK:(int)arg1;
- (_Bool)isOpenGps;
- (_Bool)isTestMode;
- (void)loadNativeAd:(int)arg1;
@property(nonatomic) int loadType; // @synthesize loadType;
@property(retain, nonatomic) AdViewAdNetworkConfig *networkConfig; // @synthesize networkConfig;
- (void)rotateToOrientation:(long long)arg1;
- (_Bool)shouldSendExMetric;
- (void)showNativeAd:(id)arg1 withNativeData:(id)arg2;
- (void)stopBeingDelegate;

@end
