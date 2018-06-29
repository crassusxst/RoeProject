//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMusicPlayerController, NSMutableSet;

@interface IMDeviceVolumeManager : NSObject
{
    _Bool _shouldUpdateVolume;
    NSMutableSet *_schemes;
    MPMusicPlayerController *_musicController;
}

- (void).cxx_destruct;
- (void)addSchemeForVolumeChange:(id)arg1;
- (int)getDeviceVolumeWithPublisherVolumeControl:(_Bool)arg1;
- (id)init;
- (id)javascriptForVolumeChangeWithPublisherVolumeControl:(_Bool)arg1;
@property(retain, nonatomic) MPMusicPlayerController *musicController; // @synthesize musicController=_musicController;
- (void)removeSchemeForVolumeChange:(id)arg1;
@property(retain, nonatomic) NSMutableSet *schemes; // @synthesize schemes=_schemes;
@property(nonatomic) _Bool shouldUpdateVolume; // @synthesize shouldUpdateVolume=_shouldUpdateVolume;

@end

