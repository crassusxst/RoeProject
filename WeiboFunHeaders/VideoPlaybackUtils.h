//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VideoPlaybackUtils : NSObject
{
}

+ (void)clearOldFilesInDir:(id)arg1;
+ (id)concatFilesDirectory;
+ (unsigned long long)coreCount;
+ (id)coreNameForType:(int)arg1;
+ (id)getConcatFilePathFromSegmentURLs:(id)arg1 durations:(id)arg2 sourceURL:(id)arg3;
+ (id)playerCoreConfig;
+ (void)setPlayerCoreConfig:(id)arg1;
+ (void)setVideoPlayerCore:(int)arg1;
+ (int)videoPlayerCore:(_Bool)arg1 projectionMode:(long long)arg2;

@end
