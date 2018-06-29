//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WXOMTAConfig : NSObject
{
    _Bool _debugEnable;
    _Bool _smartReporting;
    _Bool _autoExceptionCaught;
    _Bool _statEnable;
    BOOL _accountType;
    unsigned int _sessionTimeoutSecs;
    int _reportStrategy;
    unsigned int _maxStoreEventCount;
    unsigned int _maxLoadEventCount;
    unsigned int _minBatchReportCount;
    unsigned int _maxSendRetryCount;
    unsigned int _sendPeriodMinutes;
    unsigned int _maxParallelTimingEvents;
    unsigned int _maxReportEventLength;
    int _maxSessionStatReportCount;
    NSString *_appkey;
    NSString *_channel;
    NSString *_qq;
    NSString *_ifa;
    NSString *_customerAppVersion;
    CDUnknownBlockType _crashCallback;
    NSString *_statReportURL;
    NSString *_customerUserID;
    NSString *_account;
    NSString *_accountExt;
    NSString *_pushDeviceToken;
    NSString *_op;
    NSString *_cn;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *accountExt; // @synthesize accountExt=_accountExt;
@property BOOL accountType; // @synthesize accountType=_accountType;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property _Bool autoExceptionCaught; // @synthesize autoExceptionCaught=_autoExceptionCaught;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *cn; // @synthesize cn=_cn;
@property(copy, nonatomic) CDUnknownBlockType crashCallback; // @synthesize crashCallback=_crashCallback;
@property(copy, nonatomic) NSString *customerAppVersion; // @synthesize customerAppVersion=_customerAppVersion;
@property(copy, nonatomic) NSString *customerUserID; // @synthesize customerUserID=_customerUserID;
@property _Bool debugEnable; // @synthesize debugEnable=_debugEnable;
- (id)getCustomProperty:(id)arg1 default:(id)arg2;
@property(copy, nonatomic) NSString *ifa; // @synthesize ifa=_ifa;
- (id)init;
@property unsigned int maxLoadEventCount; // @synthesize maxLoadEventCount=_maxLoadEventCount;
@property unsigned int maxParallelTimingEvents; // @synthesize maxParallelTimingEvents=_maxParallelTimingEvents;
@property unsigned int maxReportEventLength; // @synthesize maxReportEventLength=_maxReportEventLength;
@property unsigned int maxSendRetryCount; // @synthesize maxSendRetryCount=_maxSendRetryCount;
@property int maxSessionStatReportCount; // @synthesize maxSessionStatReportCount=_maxSessionStatReportCount;
@property unsigned int maxStoreEventCount; // @synthesize maxStoreEventCount=_maxStoreEventCount;
@property unsigned int minBatchReportCount; // @synthesize minBatchReportCount=_minBatchReportCount;
@property(copy, nonatomic) NSString *op; // @synthesize op=_op;
@property(copy, nonatomic) NSString *pushDeviceToken; // @synthesize pushDeviceToken=_pushDeviceToken;
@property(copy, nonatomic) NSString *qq; // @synthesize qq=_qq;
@property(nonatomic) int reportStrategy; // @synthesize reportStrategy=_reportStrategy;
@property unsigned int sendPeriodMinutes; // @synthesize sendPeriodMinutes=_sendPeriodMinutes;
@property unsigned int sessionTimeoutSecs; // @synthesize sessionTimeoutSecs=_sessionTimeoutSecs;
@property _Bool smartReporting; // @synthesize smartReporting=_smartReporting;
@property _Bool statEnable; // @synthesize statEnable=_statEnable;
@property(copy, nonatomic) NSString *statReportURL; // @synthesize statReportURL=_statReportURL;

@end

