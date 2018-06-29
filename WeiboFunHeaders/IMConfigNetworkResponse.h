//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IMConfigNetworkResponse : NSObject
{
    _Bool _error;
    _Bool _shouldReportEvent;
    NSMutableDictionary *_configResponseDictionary;
    NSMutableDictionary *_requestedConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *configResponseDictionary; // @synthesize configResponseDictionary=_configResponseDictionary;
@property(nonatomic) _Bool error; // @synthesize error=_error;
- (id)initWithRequestedConfigDictionary:(id)arg1 response:(id)arg2 reportEvent:(_Bool)arg3;
- (void)parseResponse:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *requestedConfig; // @synthesize requestedConfig=_requestedConfig;
@property(nonatomic) _Bool shouldReportEvent; // @synthesize shouldReportEvent=_shouldReportEvent;
- (void)submitTelemetryEvent:(id)arg1 forNetworkError:(id)arg2 forConfigs:(id)arg3;

@end
