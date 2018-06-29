//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMJSONModel.h"

@interface IMAdsConfigViewabilityVideoModel : IMJSONModel
{
    long long _impressionMinTimeViewed;
    long long _impressionMinPercentageViewed;
    long long _videoMinPercentagePlay;
}

@property(nonatomic) long long impressionMinPercentageViewed; // @synthesize impressionMinPercentageViewed=_impressionMinPercentageViewed;
@property(nonatomic) long long impressionMinTimeViewed; // @synthesize impressionMinTimeViewed=_impressionMinTimeViewed;
- (id)init;
@property(nonatomic) long long videoMinPercentagePlay; // @synthesize videoMinPercentagePlay=_videoMinPercentagePlay;
- (_Bool)validate:(id *)arg1;

@end

