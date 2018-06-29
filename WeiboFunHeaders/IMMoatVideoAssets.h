//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, AVPlayerLayer, UIView;

@interface IMMoatVideoAssets : NSObject
{
    AVPlayer *_videoPlayer;
    AVPlayerLayer *_videoPlayerLayer;
    UIView *_videoPlayerView;
    double _duration;
}

- (void).cxx_destruct;
@property double duration; // @synthesize duration=_duration;
- (id)initWithPlayer:(id)arg1 playerLayer:(id)arg2 playerContainerView:(id)arg3 withDuration:(double)arg4;
- (double)videoDuration;
@property(readonly, nonatomic) AVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(readonly, nonatomic) AVPlayerLayer *videoPlayerLayer; // @synthesize videoPlayerLayer=_videoPlayerLayer;
@property(readonly, nonatomic) UIView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;

@end

