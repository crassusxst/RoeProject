//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMNativeRenderController.h"

#import "SKStoreProductViewControllerDelegate.h"

@class IMNativeSKStoreController, NSArray, NSNumber, NSString;

@interface IMNativeFullScreenRenderController : IMNativeRenderController <SKStoreProductViewControllerDelegate>
{
    _Bool _isSecondScreenPresented;
    _Bool _isCloseScheduled;
    long long _transitionStyle;
    IMNativeSKStoreController *_skstoreController;
    NSString *_skStoreID;
    NSNumber *_skStoreHeight;
    NSArray *_companionExtensionTrackers;
}

+ (id)getMoatVideoAssetsFromRootAsset:(id)arg1;
- (void).cxx_destruct;
- (void)asset:(id)arg1 builtNonObstuctiveViewForVideoViewability:(id)arg2;
- (void)closeAd;
@property(retain, nonatomic) NSArray *companionExtensionTrackers; // @synthesize companionExtensionTrackers=_companionExtensionTrackers;
- (id)fetchAdUnitType;
- (void)fireCloseActionFromWebView;
- (void)fireCompanionExtensionTrackers;
- (void)fireShowEndCardFromWebView;
- (void)fireSkipActionFromWebView;
- (void)fireWebViewDidInteractWithParams:(id)arg1;
- (void)fireWebViewWillLeaveApplication;
- (id)getVideoProperties;
- (_Bool)hasSKStore;
- (void)imActionFoundCompanionExtensionTrackers:(id)arg1;
- (_Bool)imActionIsCloseScheduled;
- (double)imActionMinimumVisiblePercentage;
- (_Bool)imActionShouldRequireCustomViewabilityTracker:(id)arg1;
- (void)imActionShowVideoEndCardForAsset:(id)arg1;
- (void)imNativeLandingPageProcessorDidDismissEmbeddedBrowser:(id)arg1;
- (void)imNativeLandingPageProcessorDidDismissScreen:(id)arg1;
- (void)imNativeLandingPageProcessorDidPresentEmbeddedBrowser:(id)arg1;
- (void)imNativeLandingPageProcessorDidPresentScreen:(id)arg1;
- (id)initWithConfig:(id)arg1;
@property(nonatomic) _Bool isCloseScheduled; // @synthesize isCloseScheduled=_isCloseScheduled;
@property(nonatomic) _Bool isSecondScreenPresented; // @synthesize isSecondScreenPresented=_isSecondScreenPresented;
- (_Bool)performAction:(id)arg1 withReferenceID:(id)arg2;
- (void)presentEndCard;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)scheduleClose;
@property(retain, nonatomic) NSNumber *skStoreHeight; // @synthesize skStoreHeight=_skStoreHeight;
@property(retain, nonatomic) NSString *skStoreID; // @synthesize skStoreID=_skStoreID;
@property(retain, nonatomic) IMNativeSKStoreController *skstoreController; // @synthesize skstoreController=_skstoreController;
@property(nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
- (void)showFromViewController:(id)arg1 animated:(_Bool)arg2 forTrackingType:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)skipToEndCardAndPauseVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

