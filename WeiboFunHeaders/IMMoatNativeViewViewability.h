//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMMoatNativeViewability.h"

@class INMMoatNativeDisplayTracker, NSString;

@interface IMMoatNativeViewViewability : IMMoatNativeViewability
{
    NSString *_impressionID;
    INMMoatNativeDisplayTracker *_moatTracker;
}

- (void).cxx_destruct;
- (void)attachViewabilityToView:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
- (id)initWithMoatParameters:(id)arg1;
@property(retain, nonatomic) INMMoatNativeDisplayTracker *moatTracker; // @synthesize moatTracker=_moatTracker;
- (void)startMoatTracker:(id)arg1 withIds:(id)arg2;

@end

