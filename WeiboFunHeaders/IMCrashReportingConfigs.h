//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMConfig.h"

#import "IMConfig.h"

@class IMNetworkTypeConfigDict, NSString;

@interface IMCrashReportingConfigs : IMConfig <IMConfig>
{
    _Bool _crashEnabled;
    NSString *_url;
    long long _maxRetryCount;
    long long _maxEventsToPersist;
    long long _eventTTL;
    long long _processingInterval;
    long long _txLatency;
    IMNetworkTypeConfigDict *_networkType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool crashEnabled; // @synthesize crashEnabled=_crashEnabled;
@property(nonatomic) long long eventTTL; // @synthesize eventTTL=_eventTTL;
- (id)getType;
- (id)init;
- (_Bool)isValid;
@property(nonatomic) long long maxEventsToPersist; // @synthesize maxEventsToPersist=_maxEventsToPersist;
@property(nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(retain, nonatomic) IMNetworkTypeConfigDict *networkType; // @synthesize networkType=_networkType;
@property(nonatomic) long long processingInterval; // @synthesize processingInterval=_processingInterval;
@property(nonatomic) long long txLatency; // @synthesize txLatency=_txLatency;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)toDictionary;
- (void)updateWithObject:(id)arg1;
- (_Bool)updatefromDictionary:(id)arg1;
- (_Bool)validate:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
