//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMPersistentDataCleaner : NSObject
{
}

+ (void)deleteFolders:(id)arg1 fromPath:(id)arg2;
+ (void)deleteFoldersFromDocument:(id)arg1;
+ (void)deleteNSUserDefaults:(id)arg1;
+ (void)deleteOldSDKLibraryCacheFolders;
+ (id)oldSDKLibraryCacheFolders;
+ (void)processTelemetryEvents;
+ (void)start;
+ (id)telemetryEvents;

@end

