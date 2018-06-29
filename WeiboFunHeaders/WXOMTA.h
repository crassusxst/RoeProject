//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXOMTAMainServiceDelegate.h"

@class NSString;

@interface WXOMTA : NSObject <WXOMTAMainServiceDelegate>
{
    struct dispatch_queue_s *task_queue;
    NSString *_keyForKeyChain;
    NSString *_mtaCurrentPage;
    NSString *_lastPage;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)autoTrackActiveBegin;
+ (void)autoTrackActiveEnd;
+ (void)commitCachedStats:(int)arg1;
+ (id)filterBodyData:(id)arg1 configData:(id)arg2;
+ (id)getBundleID;
+ (id)getIDFV;
+ (id)getInstance;
+ (id)getMTAConfigIDFA;
+ (id)getMtaUDID;
+ (id)getOpenUDID;
+ (id)getSendData:(id)arg1;
+ (_Bool)isEqualToMagic:(id)arg1;
+ (void)load;
+ (void)reportAccount:(id)arg1 type:(unsigned int)arg2 ext:(id)arg3;
+ (void)reportAccount:(id)arg1 type:(unsigned int)arg2 ext:(id)arg3 appkey:(id)arg4 isRealTime:(_Bool)arg5;
+ (void)reportAppMonitorStat:(id)arg1;
+ (void)reportAppMonitorStat:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)reportQQ:(id)arg1;
+ (void)reportQQ:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)reportSessionEvent:(id)arg1 isRealTime:(_Bool)arg2;
+ (void)resetTrackActiveStartTime;
+ (void)sendEvent:(id)arg1 withCachedEvent:(int)arg2;
+ (void)startNewSession;
+ (void)startNewSession:(_Bool)arg1;
+ (void)startWithAppkey:(id)arg1;
+ (_Bool)startWithAppkey:(id)arg1 checkedSdkVersion:(id)arg2;
+ (void)stopSession;
+ (void)trackActiveBegin;
+ (void)trackActiveEnd;
+ (void)trackCustomEvent:(id)arg1 args:(id)arg2;
+ (void)trackCustomEvent:(id)arg1 args:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;
+ (void)trackCustomEventBegin:(id)arg1 args:(id)arg2;
+ (void)trackCustomEventBegin:(id)arg1 args:(id)arg2 appkey:(id)arg3;
+ (void)trackCustomEventEnd:(id)arg1 args:(id)arg2;
+ (void)trackCustomEventEnd:(id)arg1 args:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;
+ (void)trackCustomKeyValueEvent:(id)arg1 props:(id)arg2;
+ (void)trackCustomKeyValueEvent:(id)arg1 props:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;
+ (void)trackCustomKeyValueEventBegin:(id)arg1 props:(id)arg2;
+ (void)trackCustomKeyValueEventBegin:(id)arg1 props:(id)arg2 appkey:(id)arg3;
+ (void)trackCustomKeyValueEventDuration:(unsigned int)arg1 withEventid:(id)arg2 props:(id)arg3;
+ (void)trackCustomKeyValueEventDuration:(unsigned int)arg1 withEventid:(id)arg2 props:(id)arg3 appKey:(id)arg4 isRealTime:(_Bool)arg5;
+ (void)trackCustomKeyValueEventEnd:(id)arg1 props:(id)arg2;
+ (void)trackCustomKeyValueEventEnd:(id)arg1 props:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;
+ (void)trackDirectPageViewBegin:(id)arg1 appkey:(id)arg2;
+ (void)trackDirectPageViewEnd:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)trackError:(id)arg1;
+ (void)trackError:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)trackException:(id)arg1;
+ (void)trackException:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)trackGameUser:(id)arg1 world:(id)arg2 level:(id)arg3;
+ (void)trackGameUser:(id)arg1 world:(id)arg2 level:(id)arg3 appkey:(id)arg4 isRealTime:(_Bool)arg5;
+ (void)trackPageViewBegin:(id)arg1;
+ (void)trackPageViewBegin:(id)arg1 appkey:(id)arg2;
+ (void)trackPageViewEnd:(id)arg1;
+ (void)trackPageViewEnd:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (struct dispatch_queue_s *)getTaskQueue;
- (void)handleCrashReport;
- (id)init;
@property(retain, nonatomic) NSString *keyForKeyChain; // @synthesize keyForKeyChain=_keyForKeyChain;
@property(retain, nonatomic) NSString *lastPage; // @synthesize lastPage=_lastPage;
@property(retain, nonatomic) NSString *mtaCurrentPage; // @synthesize mtaCurrentPage=_mtaCurrentPage;
- (void)onDidApplicationBecomeActive;
- (void)onWillApplicationEnterBackground;
- (void)onWillApplicationEnterForeground;
- (void)onWillApplicationResignActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
