//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMConfigDelegate.h"
#import "IMHealthReportingDelegate.h"

@class IMCrashReportingConfigs, IMCrashReportingDao, IMHealthReportingManager, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface IMCrashReportComponent : NSObject <IMConfigDelegate, IMHealthReportingDelegate>
{
    IMCrashReportingConfigs *_config;
    NSArray *_activeAds;
    IMHealthReportingManager *_dispatchEventManager;
    IMCrashReportingDao *_dao;
    NSObject<OS_dispatch_queue> *_dBQueue;
}

+ (id)sharedComponent;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *activeAds; // @synthesize activeAds=_activeAds;
- (void)addEventToDb:(id)arg1;
- (void)attachCrashReporterAndSendPendingReports;
@property(retain, nonatomic) IMCrashReportingConfigs *config; // @synthesize config=_config;
- (void)configUpdated:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dBQueue; // @synthesize dBQueue=_dBQueue;
@property(retain, nonatomic) IMCrashReportingDao *dao; // @synthesize dao=_dao;
@property(retain, nonatomic) IMHealthReportingManager *dispatchEventManager; // @synthesize dispatchEventManager=_dispatchEventManager;
- (id)getNetworkTypeConfig:(id)arg1;
- (id)getPollingManager:(id)arg1;
- (id)init;
- (id)provideNetworkRequestObject:(id)arg1 forAdType:(id)arg2;
- (void)start;
- (void)startDispatchManager;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
