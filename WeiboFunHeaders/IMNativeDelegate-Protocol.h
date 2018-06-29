//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMNative, IMRequestStatus, NSDictionary;

@protocol IMNativeDelegate <NSObject>
- (void)native:(IMNative *)arg1 didFailToLoadWithError:(IMRequestStatus *)arg2;
- (void)native:(IMNative *)arg1 didInteractWithParams:(NSDictionary *)arg2;
- (void)nativeAdImpressed:(IMNative *)arg1;
- (void)nativeDidDismissScreen:(IMNative *)arg1;
- (void)nativeDidFinishLoading:(IMNative *)arg1;
- (void)nativeDidFinishPlayingMedia:(IMNative *)arg1;
- (void)nativeDidPresentScreen:(IMNative *)arg1;
- (void)nativeWillDismissScreen:(IMNative *)arg1;
- (void)nativeWillPresentScreen:(IMNative *)arg1;
- (void)userDidSkipPlayingMediaFromNative:(IMNative *)arg1;
- (void)userWillLeaveApplicationFromNative:(IMNative *)arg1;
@end

