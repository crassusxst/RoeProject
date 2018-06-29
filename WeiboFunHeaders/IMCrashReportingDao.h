//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMHealthReportingDao.h"

@interface IMCrashReportingDao : IMHealthReportingDao
{
}

+ (id)sharedInstance;
- (void)cleanUpExpiredEventsWithTTLMillis:(long long)arg1 forAdType:(id)arg2;
- (_Bool)deleteEvents:(id)arg1;
- (_Bool)deleteOldestEvent:(id)arg1;
- (_Bool)flushDB:(id)arg1;
- (id)getEvents:(int)arg1 forAdType:(id)arg2;
- (id)getQuerryCreateTable;
- (id)getQuerrySaveCrashReportingEvents:(id)arg1;
- (id)init;
- (unsigned int)numOfEventsInDB:(id)arg1;
- (void)saveEvent:(id)arg1;

@end

