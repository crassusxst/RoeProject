//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TencentRequestDelegate.h"

@class NSString, TCAPIRequest, TencentRequest;

@interface APIBase : NSObject <TencentRequestDelegate>
{
    TencentRequest *_request;
    _Bool _allowProgress;
    int _seq;
    int _needTriedCounts;
    int _hasTriedCounts;
    NSString *_httpMethod;
    id _target;
    SEL _selector;
    id <APIBaseDelegate> _delegate;
    id _userData;
    TCAPIRequest *_cgiRequest;
}

+ (int)getApiBaseSeq;
@property(nonatomic) _Bool allowProgress; // @synthesize allowProgress=_allowProgress;
- (void)cancel;
@property(retain, nonatomic) TCAPIRequest *cgiRequest; // @synthesize cgiRequest=_cgiRequest;
- (void)dealloc;
@property(nonatomic) id <APIBaseDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int hasTriedCounts; // @synthesize hasTriedCounts=_hasTriedCounts;
@property(retain, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
- (id)initWithTarget:(id)arg1 andSelector:(SEL)arg2 andHttpMethod:(id)arg3 andAPIBaseDelegate:(id)arg4 andUserData:(id)arg5;
- (id)initWithTarget:(id)arg1 andSelector:(SEL)arg2 andHttpMethod:(id)arg3 andUserData:(id)arg4;
@property(nonatomic) int needTriedCounts; // @synthesize needTriedCounts=_needTriedCounts;
- (id)openUrl:(id)arg1 token:(id)arg2 openid:(id)arg3 appid:(id)arg4 params:(id)arg5;
- (id)openUrlBySkey:(id)arg1 skey:(id)arg2 uin:(id)arg3 appid:(id)arg4 params:(id)arg5;
- (id)parsePermissionFromURL:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didLoad:(id)arg2 dat:(id)arg3;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)request:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 expectedTotalBytes:(long long)arg4;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

