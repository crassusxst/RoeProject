//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "InMobi_AvidVideoPlaybackListener.h"

@class InMobi_AvidEventDispatcher, InMobi_InternalAvidManagedVideoAdSession, NSString;

@interface InMobi_AvidVideoPlaybackListenerImpl : NSObject <InMobi_AvidVideoPlaybackListener>
{
    InMobi_AvidEventDispatcher *_dispatcher;
    InMobi_InternalAvidManagedVideoAdSession *_avidVideoAdSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) InMobi_InternalAvidManagedVideoAdSession *avidVideoAdSession; // @synthesize avidVideoAdSession=_avidVideoAdSession;
@property(nonatomic) __weak InMobi_AvidEventDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
- (void)publishVideoEvent:(id)arg1 data:(id)arg2;
- (void)recordAdClickThruEvent;
- (void)recordAdCompleteEvent;
- (void)recordAdDurationChangeEvent:(id)arg1 adRemainingTime:(id)arg2;
- (void)recordAdEnteredFullscreenEvent;
- (void)recordAdErrorWithMessage:(id)arg1;
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

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

