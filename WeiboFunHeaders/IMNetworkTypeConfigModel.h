//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMJSONModel.h"

@interface IMNetworkTypeConfigModel : IMJSONModel
{
    long long _retryInterval;
    long long _maxBatchSize;
}

- (id)init;
- (id)initWithRetryInterval:(long long)arg1 andBatchSize:(long long)arg2;
@property(nonatomic) long long maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
@property(nonatomic) long long retryInterval; // @synthesize retryInterval=_retryInterval;
- (_Bool)validate:(id *)arg1;

@end

