//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMPlacementData : NSObject
{
    long long _placementID;
    NSString *_tp;
    long long _lastAccessTimestamp;
    NSString *_adType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(nonatomic) long long lastAccessTimestamp; // @synthesize lastAccessTimestamp=_lastAccessTimestamp;
@property(nonatomic) long long placementID; // @synthesize placementID=_placementID;
@property(retain, nonatomic) NSString *tp; // @synthesize tp=_tp;

@end

