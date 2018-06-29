//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BaiduMobAdSFDelegate.h"
#import "BaiduMobAdWebLPControllerDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "SFSafariViewControllerDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class BaiduMobAdLPTransitionAnimation, BaiduMobAdSFViewController, NSDictionary, NSString, UIViewController, UIWindow;

@interface BaiduMobAdActionComposer : NSObject <SFSafariViewControllerDelegate, BaiduMobAdSFDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, SKStoreProductViewControllerDelegate, BaiduMobAdWebLPControllerDelegate, UIViewControllerTransitioningDelegate>
{
    id _handlerImpl;
    int _state;
    UIViewController *_innerADController;
    UIWindow *_userCurrentWindow;
    UIWindow *_innerADWindow;
    _Bool _sfDidDismissed;
    int _type;
    id <BaiduMobAdActionComposerDelegate> _delegate;
    NSDictionary *_actionOption;
    BaiduMobAdLPTransitionAnimation *_animation;
    double _lpStartTime;
    double _lpLoadTime;
    double _duration;
    double _lpWebStartLoad;
    double _lpWebFinishLoad;
    BaiduMobAdSFViewController *_sfViewController;
}

+ (_Bool)canMail;
+ (_Bool)canMap;
+ (_Bool)canSMS;
+ (_Bool)composerSupportType:(int)arg1;
+ (id)composerWithType:(int)arg1 delegate:(id)arg2;
+ (void)setActionUrl:(id)arg1 dumpar:(_Bool)arg2 delegate:(id)arg3;
@property(readonly, nonatomic) int Type; // @synthesize Type=_type;
@property(retain, nonatomic) NSDictionary *actionOption; // @synthesize actionOption=_actionOption;
@property(retain, nonatomic) BaiduMobAdLPTransitionAnimation *animation; // @synthesize animation=_animation;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)buildAndSendType39LogUrl;
- (void)dealloc;
@property(nonatomic) id <BaiduMobAdActionComposerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinish:(id)arg1 error:(_Bool)arg2;
- (void)didScrollToSwipeBack;
- (void)dismissSFOnce:(_Bool)arg1;
- (void)dismissVC:(id)arg1;
- (_Bool)doAction:(id)arg1 withParam:(id)arg2;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)initWithType:(int)arg1 delegate:(id)arg2;
- (_Bool)innerDoAction:(id)arg1 withParam:(id)arg2;
- (_Bool)innerDoActionAPO:(id)arg1 withParam:(id)arg2;
- (_Bool)innerDoActionDL:(id)arg1 withParam:(id)arg2;
- (_Bool)innerDoActionLP:(id)arg1 withParam:(id)arg2;
@property(nonatomic) double lpLoadTime; // @synthesize lpLoadTime=_lpLoadTime;
@property(nonatomic) double lpStartTime; // @synthesize lpStartTime=_lpStartTime;
@property(nonatomic) double lpWebFinishLoad; // @synthesize lpWebFinishLoad=_lpWebFinishLoad;
@property(nonatomic) double lpWebStartLoad; // @synthesize lpWebStartLoad=_lpWebStartLoad;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)presentLpController:(id)arg1 withNavigationController:(id)arg2 withParam:(id)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)sendAPOLogURL:(_Bool)arg1 scheme:(id)arg2;
- (void)sendLPMonitorLogURL:(id)arg1 logType:(id)arg2 dictionary:(id)arg3;
@property(nonatomic) _Bool sfDidDismissed; // @synthesize sfDidDismissed=_sfDidDismissed;
@property(retain, nonatomic) BaiduMobAdSFViewController *sfViewController; // @synthesize sfViewController=_sfViewController;
@property(retain, nonatomic) UIWindow *userCurrentWindow; // @synthesize userCurrentWindow=_userCurrentWindow;
- (void)useSafariViewControllerToOpenUrl:(id)arg1 inNavigationController:(id)arg2;
- (void)webLPController:(id)arg1 didFinishWithResult:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

