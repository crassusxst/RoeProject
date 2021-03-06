//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "INMMoatBaseTracker.h"

@class INMMoatWebViewAndBridge, NSMutableDictionary, NSString;

@interface INMMoatReactiveVideoTracker : INMMoatBaseTracker
{
    _Bool _startedPlaying;
    unsigned long long _state;
    NSMutableDictionary *_adIds;
    INMMoatWebViewAndBridge *_mWebViewAndBridge;
    NSString *_partnerCode;
    double _duration;
    struct CGRect _playerDims;
}

+ (id)trackerWithPartnerCode:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *adIds; // @synthesize adIds=_adIds;
- (void)changeTargetLayer:(id)arg1 withContainingView:(id)arg2;
- (_Bool)checkOkToTrack;
- (void)dealloc;
- (void)destroy;
- (void)dispatchEvent:(id)arg1;
@property double duration; // @synthesize duration=_duration;
- (id)initTracker:(id)arg1;
@property(retain) INMMoatWebViewAndBridge *mWebViewAndBridge; // @synthesize mWebViewAndBridge=_mWebViewAndBridge;
@property(retain) NSString *partnerCode; // @synthesize partnerCode=_partnerCode;
@property struct CGRect playerDims; // @synthesize playerDims=_playerDims;
@property _Bool startedPlaying; // @synthesize startedPlaying=_startedPlaying;
- (_Bool)setTrackingParams:(id)arg1 playerDims:(struct CGRect)arg2 targetLayer:(id)arg3;
- (void)startTracking:(double)arg1;
@property(readonly) unsigned long long state; // @synthesize state=_state;
- (void)stopTracking;
- (_Bool)trackVideoAd:(id)arg1 withLayer:(id)arg2 withContainingView:(id)arg3 withDurationMillis:(double)arg4;

@end

