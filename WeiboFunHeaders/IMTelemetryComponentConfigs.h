//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMJSONModel.h"

@class NSMutableDictionary<IMOptional>, NSString<IMOptional>;

@interface IMTelemetryComponentConfigs : IMJSONModel
{
    _Bool _enabled;
    NSString<IMOptional> *_type;
    long long _samplingFactor;
    NSMutableDictionary<IMOptional> *_eventConfigs;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSMutableDictionary<IMOptional> *eventConfigs; // @synthesize eventConfigs=_eventConfigs;
- (id)getEventsConfig:(id)arg1;
- (id)init;
- (id)initWithType:(id)arg1 enabled:(_Bool)arg2 samplingFactor:(long long)arg3 eventsConfig:(id)arg4;
@property(nonatomic) long long samplingFactor; // @synthesize samplingFactor=_samplingFactor;
@property(retain, nonatomic) NSString<IMOptional> *type; // @synthesize type=_type;
- (_Bool)validate:(id *)arg1;

@end

