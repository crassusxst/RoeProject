//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMRenderView, NSDictionary, NSError, NSString;

@protocol IMRenderViewDelegate <NSObject>

@optional
- (void)imRenderView:(IMRenderView *)arg1 failedToLoad:(NSError *)arg2;
- (void)imRenderView:(IMRenderView *)arg1 gotCommand:(NSString *)arg2 onScheme:(NSString *)arg3;
- (_Bool)imRenderView:(IMRenderView *)arg1 saveBlob:(NSString *)arg2;
- (void)imRenderView:(IMRenderView *)arg1 setCloseEndCardTracker:(NSString *)arg2;
- (void)imRenderView:(IMRenderView *)arg1 shouldFireEvent:(NSString *)arg2 withPayload:(NSDictionary *)arg3;
- (void)imRenderView:(IMRenderView *)arg1 showEndCardForWebVideoOnScheme:(NSString *)arg2;
- (void)imRenderViewAdWasInteracted:(IMRenderView *)arg1;
- (void)imRenderViewAdWillLeaveApplication:(IMRenderView *)arg1;
- (void)imRenderViewAppearOnScreen:(IMRenderView *)arg1;
- (void)imRenderViewDidDismissScreen:(IMRenderView *)arg1;
- (void)imRenderViewDidInteractWithParams:(NSDictionary *)arg1 onRenderView:(IMRenderView *)arg2;
- (void)imRenderViewDidPresentScreen:(IMRenderView *)arg1;
- (void)imRenderViewDisappearedFromScreen:(IMRenderView *)arg1;
- (NSString *)imRenderViewFetchBlob:(IMRenderView *)arg1;
- (void)imRenderViewFinishedLoading:(IMRenderView *)arg1;
- (void)imRenderViewFireAdFailed:(IMRenderView *)arg1;
- (void)imRenderViewFireAdReady:(IMRenderView *)arg1;
- (void)imRenderViewFireSkipForWebView:(IMRenderView *)arg1 onScheme:(NSString *)arg2;
- (void)imRenderViewIncentActionComplete:(NSDictionary *)arg1;
- (void)imRenderViewStartedLoading:(IMRenderView *)arg1;
- (void)imRenderViewWillDismissScreeen:(IMRenderView *)arg1;
- (void)imRenderViewWillPresentScreen:(IMRenderView *)arg1;
@end

