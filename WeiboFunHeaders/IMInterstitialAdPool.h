//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMAdPool.h"

#import "IMConfigDelegate.h"
#import "IMInterstitialAdUnitDelegate.h"

@class NSString;

@interface IMInterstitialAdPool : IMAdPool <IMInterstitialAdUnitDelegate, IMConfigDelegate>
{
}

+ (id)getSharedAdPoolForPlacementID:(long long)arg1;
- (void)ad:(id)arg1 didFailToLoadWithErrorCode:(int)arg2 andDescription:(id)arg3;
- (void)adDidFinishLoad:(id)arg1;
- (void)adIsAvailable:(id)arg1;
- (void)adPrefetchComplete:(id)arg1;
- (id)creativeId;
- (id)getAdMetaInfo;
- (id)getAdUnitForPlacementID:(long long)arg1;
- (void)registerForAdWithDelegate:(id)arg1;
- (void)warmCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

