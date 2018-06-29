//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AdViewDelegate.h"

@class AdViewView, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface AdViewController : NSObject <AdViewDelegate>
{
    AdViewView *adView_;
    double ad_x;
    double ad_y;
    _Bool ad_hidden;
    _Bool adTestMode;
    _Bool adLogMode;
    NSString *adviewKey;
    int nOrientationSupport;
    int nOrientation;
    _Bool bSuperOrientFix;
    int adBannerSize_;
    UIViewController *adRootController_;
    id <AdViewControllerDelegate> notifyDelegate_;
}

+ (void)deleteController;
+ (void)deleteControllerById:(int)arg1;
+ (void)load;
+ (void)setAllAdProviders:(_Bool)arg1 Except:(int)arg2;
+ (id)sharedController;
+ (id)sharedControllerById:(int)arg1;
+ (id)sharedControllerIfExists;
+ (id)sharedControllerIfExistsById:(int)arg1;
- (void).cxx_destruct;
- (id)BaiDuApIDString;
- (id)BaiDuApSpecString;
- (int)PreferBannerSize;
@property(nonatomic) int adBannerSize; // @synthesize adBannerSize=adBannerSize_;
- (_Bool)adGpsMode;
@property(nonatomic) __weak UIViewController *adRootController; // @synthesize adRootController=adRootController_;
@property(retain, nonatomic) AdViewView *adView; // @synthesize adView=adView_;
- (int)adViewAppAdBackgroundGradientType;
- (id)adViewApplicationKey;
- (id)adViewApplicationPublishChannel;
- (int)adViewBannerAnimationType;
- (void)adViewDidClickAd:(id)arg1;
- (void)adViewDidDismissFullScreenModal;
- (void)adViewDidFailToReceiveAd:(id)arg1 usingBackup:(_Bool)arg2;
- (void)adViewDidReceiveAd:(id)arg1;
- (void)adViewDidReceiveConfig:(id)arg1;
- (void)adViewFailRequestAd:(id)arg1 error:(id)arg2;
- (_Bool)adViewLogMode;
- (void)adViewReceivedGenericRequest:(id)arg1;
- (void)adViewReceivedNotificationAdsAreOff:(id)arg1;
- (void)adViewStartGetAd:(id)arg1;
- (_Bool)adViewTestMode;
- (_Bool)adViewUsingHtml5;
- (void)adViewWillPresentFullScreenModal;
- (void)addAdView;
- (void)adjustAdSize;
@property(nonatomic) _Bool bSuperOrientFix; // @synthesize bSuperOrientFix;
- (void)dealloc;
- (void)didChangedStatusBarOrientation:(id)arg1;
- (void)enterForeground:(id)arg1;
- (struct CGPoint)getAdPosition;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)notifyApp:(id)arg1 Info:(id)arg2;
@property(nonatomic) __weak id <AdViewControllerDelegate> notifyDelegate; // @synthesize notifyDelegate=notifyDelegate_;
- (void)removeNotification;
- (void)requestNewAd;
- (void)rollOver;
- (void)setAdHidden:(_Bool)arg1;
- (void)setAdPosition:(struct CGPoint)arg1;
- (void)setAdViewKey:(id)arg1;
- (void)setModeTest:(_Bool)arg1 Log:(_Bool)arg2;
- (void)setOrientationUp:(_Bool)arg1 Down:(_Bool)arg2 Left:(_Bool)arg3 Right:(_Bool)arg4;
- (id)viewControllerForPresentingModalView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

