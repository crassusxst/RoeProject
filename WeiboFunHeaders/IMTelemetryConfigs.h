//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMConfig.h"

@class IMNetworkTypeConfigDict, NSString;

@interface IMTelemetryConfigs : IMConfig
{
    NSString *_telemetryUrl;
    long long _maxRetryCount;
    long long _maxEventsToPersist;
    long long _eventTTL;
    long long _processingInterval;
    long long _txLatency;
    IMNetworkTypeConfigDict *_networkType;
}

- (void).cxx_destruct;
@property(nonatomic) long long eventTTL; // @synthesize eventTTL=_eventTTL;
- (id)getNetworkTypeConfig;
- (id)getType;
- (id)init;
- (_Bool)isValid;
@property(nonatomic) long long maxEventsToPersist; // @synthesize maxEventsToPersist=_maxEventsToPersist;
@property(nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(retain, nonatomic) IMNetworkTypeConfigDict *networkType; // @synthesize networkType=_networkType;
@property(nonatomic) long long processingInterval; // @synthesize processingInterval=_processingInterval;
@property(retain, nonatomic) NSString *telemetryUrl; // @synthesize telemetryUrl=_telemetryUrl;
@property(nonatomic) long long txLatency; // @synthesize txLatency=_txLatency;
- (id)toDictionary;
- (void)updateWithObject:(id)arg1;
- (_Bool)updatefromDictionary:(id)arg1;
- (_Bool)validate:(id *)arg1;

@end

