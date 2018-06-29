//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WFWeiboUtils : NSObject
{
}

+ (id)albumFromData:(id)arg1 withType:(int)arg2;
+ (id)getCodeFromType:(int)arg1;
+ (id)getEmptyInfoFromType:(int)arg1;
+ (struct CGSize)getFullscreenSizeForMsg:(id)arg1;
+ (struct CGSize)getFullscreenSizeForUserPost:(id)arg1;
+ (struct CGSize)getFullscreenSizeForWeibo:(id)arg1;
+ (struct CGSize)getImageViewSizeForMsg:(id)arg1 maxWidth:(double)arg2;
+ (struct CGSize)getImageViewSizeForQuotedWeibo:(id)arg1;
+ (struct CGSize)getImageViewSizeForSearchedWeibo:(id)arg1;
+ (struct CGSize)getImageViewSizeForUserPost:(id)arg1;
+ (struct CGSize)getImageViewSizeForWeibo:(id)arg1;
+ (long long)getLatestTimestampForType:(int)arg1 isOfficial:(_Bool)arg2;
+ (id)getLatestUpdateTimeForType:(int)arg1 isOfficial:(_Bool)arg2;
+ (long long)getLatestViewedTimestampForHotWeibo;
+ (id)getNameFromType:(int)arg1;
+ (id)getStatFormatFromType:(int)arg1;
+ (id)getTypeCodeFromType:(int)arg1;
+ (int)getTypeForCode:(id)arg1;
+ (_Bool)imageRequiredForType:(int)arg1;
+ (id)objectFromData:(id)arg1 withType:(int)arg2 postSource:(int)arg3 dataEncrypted:(_Bool)arg4;
+ (void)setLatestTimestamp:(long long)arg1 forType:(int)arg2 isOfficial:(_Bool)arg3;
+ (void)setLatestUpdateTime:(id)arg1 forType:(int)arg2 isOfficial:(_Bool)arg3;
+ (void)setLatestViewedTimestampForHotWeibo:(long long)arg1;

@end
