//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMNetworkDelegate.h"

@class IMAdsConfig, IMMraidFetcherDAO, IMNetworkServiceProvider, IMRequest, NSDictionary, NSString;

@interface IMMraidFetcher : NSObject <IMNetworkDelegate>
{
    _Bool _isFetching;
    int _retryCount;
    IMNetworkServiceProvider *_nsp;
    IMAdsConfig *_config;
    IMRequest *_mraidRequest;
    NSDictionary *_mraidDict;
    IMMraidFetcherDAO *_dao;
    unsigned long long _startTime;
}

+ (id)sharedFetcher;
- (void).cxx_destruct;
@property(retain, nonatomic) IMAdsConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) IMMraidFetcherDAO *dao; // @synthesize dao=_dao;
- (void)fetchJSFromDB:(CDUnknownBlockType)arg1;
- (void)fetchJSFromDBOrSendRequest;
- (void)fetchMRAID:(id)arg1;
- (id)getMRAIDFromConfig:(id)arg1;
- (id)init;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) NSDictionary *mraidDict; // @synthesize mraidDict=_mraidDict;
@property(retain, nonatomic) IMRequest *mraidRequest; // @synthesize mraidRequest=_mraidRequest;
- (void)networkServiceProvider:(id)arg1 request:(id)arg2 didGetResponse:(id)arg3;
@property(retain, nonatomic) IMNetworkServiceProvider *nsp; // @synthesize nsp=_nsp;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
- (void)start;
- (void)stop;
- (void)tryToFetchMraid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

