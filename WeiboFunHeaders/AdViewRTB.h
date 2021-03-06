//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdCompView.h"

@class CLLocation;

@interface AdViewRTB : AdCompView
{
    _Bool isReady;
    id <AdCompViewDelegate> delegate;
    CLLocation *location;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AdCompViewDelegate> delegate; // @synthesize delegate;
- (id)initAdInstWithDelegate:(id)arg1;
- (id)initBannerSize:(struct CGSize)arg1 withDelegate:(id)arg2;
- (id)initBannerWithDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isReady; // @synthesize isReady;
@property(retain, nonatomic) CLLocation *location; // @synthesize location;
- (void)pauseRequestAd;
- (void)resumeRequestAd;
- (void)showWithRootViewController:(id)arg1;

@end

