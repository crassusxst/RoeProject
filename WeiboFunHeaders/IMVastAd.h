//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMVastObject.h"

@class NSArray, NSMutableArray;

@interface IMVastAd : IMVastObject
{
    _Bool _hasInlineElement;
    NSArray *_mediafiles;
    NSArray *_eventTrackers;
    NSArray *_impressionTrackers;
    NSArray *_errorTrackers;
    NSArray *_clickThrough;
    NSArray *_clickTrackers;
    NSArray *_extensions;
    NSMutableArray *_companionAds;
    long long _tagType;
    long long _adType;
    double _duration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long adType; // @synthesize adType=_adType;
@property(readonly, nonatomic) NSArray *clickThrough; // @synthesize clickThrough=_clickThrough;
@property(readonly, nonatomic) NSArray *clickTrackers; // @synthesize clickTrackers=_clickTrackers;
@property(retain, nonatomic) NSMutableArray *companionAds; // @synthesize companionAds=_companionAds;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSArray *errorTrackers; // @synthesize errorTrackers=_errorTrackers;
@property(readonly, nonatomic) NSArray *eventTrackers; // @synthesize eventTrackers=_eventTrackers;
@property(readonly, nonatomic) NSArray *extensions; // @synthesize extensions=_extensions;
- (id)fetchURLsFromArray:(id)arg1;
@property(readonly, nonatomic) _Bool hasInlineElement; // @synthesize hasInlineElement=_hasInlineElement;
@property(readonly, nonatomic) NSArray *impressionTrackers; // @synthesize impressionTrackers=_impressionTrackers;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSArray *mediafiles; // @synthesize mediafiles=_mediafiles;
- (double)stringToTimeComponent:(id)arg1 minVal:(int)arg2 maxVal:(int)arg3;
@property(readonly, nonatomic) long long tagType; // @synthesize tagType=_tagType;
- (double)timeStringToSeconds:(id)arg1;

@end

