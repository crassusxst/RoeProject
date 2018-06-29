//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface IJKSDLAudioQueueController : NSObject
{
    struct OpaqueAudioQueue *_audioQueueRef;
    struct AudioQueueBuffer *_audioQueueBufferRefArray[3];
    _Bool _isPaused;
    _Bool _isStopped;
    _Bool _isAborted;
    NSLock *_lock;
    struct SDL_AudioSpec _spec;
}

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (void)flush;
- (double)get_latency_seconds;
- (id)initWithAudioSpec:(const struct SDL_AudioSpec *)arg1;
- (void)pause;
- (void)play;
- (void)setPlaybackRate:(float)arg1;
@property(readonly, nonatomic) struct SDL_AudioSpec spec; // @synthesize spec=_spec;
- (void)stop;

@end

