//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMJSONModel.h"

@interface IMAdsConfigPreloadModel : IMJSONModel
{
    _Bool _enabled;
    long long _placementExpiry;
    long long _maxPreloadedAds;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)init;
@property(nonatomic) long long maxPreloadedAds; // @synthesize maxPreloadedAds=_maxPreloadedAds;
@property(nonatomic) long long placementExpiry; // @synthesize placementExpiry=_placementExpiry;
- (_Bool)validate:(id *)arg1;

@end

