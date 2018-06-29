//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMConfigDelegate.h"
#import "IMNetworkDelegate.h"

@class IMAdsConfig, IMPingsDAO, IMSDKCommonsNetworkReachability, NSMutableArray, NSString;

@interface IMPingStore : NSObject <IMNetworkDelegate, IMConfigDelegate>
{
    IMPingsDAO *_dao;
    IMAdsConfig *_config;
    IMSDKCommonsNetworkReachability *_reachability;
    NSMutableArray *_pingNetworkinterfaceArray;
    NSMutableArray *_processingPingIdList;
    long long _maxNetworkInterfacesAllowed;
    unsigned long long _identifier;
}

+ (id)sharedStore;
- (void).cxx_destruct;
- (unsigned long long)activePingCount;
- (void)addActivePing:(id)arg1;
- (void)addNetworkInterface:(id)arg1;
@property(retain, nonatomic) IMAdsConfig *config; // @synthesize config=_config;
- (void)configUpdated:(id)arg1;
@property(retain, nonatomic) IMPingsDAO *dao; // @synthesize dao=_dao;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)init;
- (_Bool)isHttpOrHttps:(id)arg1;
- (_Bool)isNetworkReachable;
- (id)makeNetworkConnection:(id)arg1;
@property(nonatomic) long long maxNetworkInterfacesAllowed; // @synthesize maxNetworkInterfacesAllowed=_maxNetworkInterfacesAllowed;
- (unsigned long long)networkInterfaceCount;
- (_Bool)networkServiceProvider:(id)arg1 forWebViewController:(id)arg2 shouldStartLoadWithRequest:(id)arg3 navigationType:(long long)arg4 withIMRequest:(id)arg5;
- (void)networkServiceProvider:(id)arg1 request:(id)arg2 didGetResponse:(id)arg3;
@property(retain, nonatomic) NSMutableArray *pingNetworkinterfaceArray; // @synthesize pingNetworkinterfaceArray=_pingNetworkinterfaceArray;
- (void)processFailedPing:(id)arg1 error:(id)arg2;
- (void)processPendingPings;
- (void)processPing:(id)arg1;
- (void)processSuccessfulPing:(id)arg1;
@property(retain, nonatomic) NSMutableArray *processingPingIdList; // @synthesize processingPingIdList=_processingPingIdList;
@property(retain, nonatomic) IMSDKCommonsNetworkReachability *reachability; // @synthesize reachability=_reachability;
- (void)reachabilityChanged:(id)arg1;
- (void)removeActivePing:(id)arg1;
- (void)removeNetworkInterface:(id)arg1;
- (void)start;
- (void)stop;
- (id)webViewBgColor;
- (long long)webViewPreference;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

