//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IJKSDLAudioUnitController : NSObject
{
    struct OpaqueAudioComponentInstance *_auUnit;
    _Bool _isPaused;
    struct SDL_AudioSpec _spec;
}

- (void)close;
- (void)dealloc;
- (void)flush;
- (id)initWithAudioSpec:(const struct SDL_AudioSpec *)arg1;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) struct SDL_AudioSpec spec; // @synthesize spec=_spec;
- (void)stop;

@end

