//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TLAppUpdateNotifier : NSObject
{
    NSString *newVersion;
    NSString *itunesLink;
    _Bool isAlerting;
}

+ (id)sharedNotifier;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkForVersion:(id)arg1 itunesLink:(id)arg2 updateDescription:(id)arg3;

@end

