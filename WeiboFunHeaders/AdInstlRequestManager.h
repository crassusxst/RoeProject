//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class AdViewReqItem, NSMutableArray, NSMutableDictionary, NSString;

@interface AdInstlRequestManager : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    NSMutableArray *recData;
    int nItemId;
    NSObject *lockObj;
    AdViewReqItem *curReqItem;
    int lastReqStoreTime;
    NSMutableArray *pendingReqItems;
    NSMutableDictionary *connectionDic;
}

+ (id)shareRequestManager;
- (void).cxx_destruct;
- (void)actCheckSend;
- (void)addCurrentToPending;
- (void)addData:(int)arg1 ReqType:(id)arg2 AppId:(id)arg3 ConfigVer:(int)arg4;
- (void)checkRemoveOldReqItem;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)createCurReqItem:(id)arg1 ConfigVer:(int)arg2;
- (void)dealloc;
- (void)donePostByConnection:(id)arg1 Status:(_Bool)arg2;
- (id)getAdInstlItemByID:(int)arg1;
- (id)init;
- (void)resignActive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

