//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol InMobi_AvidVideoPlaybackListener <NSObject>
- (void)recordAdClickThruEvent;
- (void)recordAdCompleteEvent;
- (void)recordAdDurationChangeEvent:(NSString *)arg1 adRemainingTime:(NSString *)arg2;
- (void)recordAdEnteredFullscreenEvent;
- (void)recordAdErrorWithMessage:(NSString *)arg1;
- (void)recordAdExitedFullscreenEvent;
- (void)recordAdExpandedChangeEvent;
- (void)recordAdImpressionEvent;
- (void)recordAdLoadedEvent;
- (void)recordAdPausedEvent;
- (void)recordAdPlayingEvent;
- (void)recordAdSkippedEvent;
- (void)recordAdStartedEvent;
- (void)recordAdStoppedEvent;
- (void)recordAdUserAcceptInvitationEvent;
- (void)recordAdUserCloseEvent;
- (void)recordAdUserMinimizeEvent;
- (void)recordAdVideoFirstQuartileEvent;
- (void)recordAdVideoMidpointEvent;
- (void)recordAdVideoStartEvent;
- (void)recordAdVideoThirdQuartileEvent;
- (void)recordAdVolumeChangeEvent:(long long)arg1;
@end

