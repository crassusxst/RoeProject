//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYCommonUploadLogic.h"

@class BLYJceObjectV2, BLYSummaryInfo;

@interface BLYAnalyticsLogic : BLYCommonUploadLogic
{
    BLYJceObjectV2 *_jceModel;
    BLYSummaryInfo *_summaryInfo;
}

- (void).cxx_destruct;
- (_Bool)asynchronous;
- (id)initWithSummaryInfo:(id)arg1;
- (_Bool)isConcurrent;
- (id)jceCMDString;
- (id)jceModel;
- (id)persistFileKey;
- (long long)persistType;
- (void)persistentSuccessed:(_Bool)arg1;
- (void)reportSuccessed:(_Bool)arg1;
- (void)setJceModel:(id)arg1;
@property(retain, nonatomic) BLYSummaryInfo *summaryInfo; // @synthesize summaryInfo=_summaryInfo;
- (_Bool)shouldPersist;
- (_Bool)shouldUpload;
- (id)userInfoPackage;

@end

