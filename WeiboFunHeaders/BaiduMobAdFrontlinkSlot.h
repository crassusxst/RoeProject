//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XLinearAdSlot.h"

@class BaiduMobAdFrontlinkGestureControl;

@interface BaiduMobAdFrontlinkSlot : XLinearAdSlot
{
    _Bool _isLeft;
    _Bool _isFloat;
    BaiduMobAdFrontlinkGestureControl *_gestureControl;
    double _marginPercent;
}

- (void)close;
- (void)dealloc;
@property(retain, nonatomic) BaiduMobAdFrontlinkGestureControl *gestureControl; // @synthesize gestureControl=_gestureControl;
- (void)initializePosition;
@property(nonatomic) _Bool isFloat; // @synthesize isFloat=_isFloat;
@property(nonatomic) _Bool isLeft; // @synthesize isLeft=_isLeft;
- (void)loadEmbeddedRender:(id)arg1;
- (void)loadFloatRender:(id)arg1;
@property(nonatomic) double marginPercent; // @synthesize marginPercent=_marginPercent;
- (void)request;
- (void)start;
- (void)successCallback:(id)arg1 withRequestAndResponseDic:(id)arg2;
- (id)type;

@end

