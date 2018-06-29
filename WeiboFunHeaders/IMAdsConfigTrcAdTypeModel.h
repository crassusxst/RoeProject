//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMJSONModel.h"

@class IMNetworkTypeConfigDict;

@interface IMAdsConfigTrcAdTypeModel : IMJSONModel
{
    _Bool _enabled;
    long long _processingInterval;
    long long _maxRetryCount;
    long long _eventTTL;
    long long _maxEventsToPersist;
    long long _txLatency;
    IMNetworkTypeConfigDict *_networkType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long eventTTL; // @synthesize eventTTL=_eventTTL;
- (id)initWithDefaultEnabled:(_Bool)arg1;
- (id)initWithDictionary:(id)arg1;
@property(nonatomic) long long maxEventsToPersist; // @synthesize maxEventsToPersist=_maxEventsToPersist;
@property(nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(retain, nonatomic) IMNetworkTypeConfigDict *networkType; // @synthesize networkType=_networkType;
@property(nonatomic) long long processingInterval; // @synthesize processingInterval=_processingInterval;
@property(nonatomic) long long txLatency; // @synthesize txLatency=_txLatency;
- (_Bool)validate:(id *)arg1;

@end

