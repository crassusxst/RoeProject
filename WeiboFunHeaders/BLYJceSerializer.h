//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BLYJceSerializer : NSObject
{
}

+ (id)dataWithJCEObject:(id)arg1;
+ (id)dataWithJCEObject:(id)arg1 requestReserveInfo:(id)arg2;
+ (id)decode:(id)arg1 error:(id *)arg2;
+ (id)defaultSerializer;
+ (id)encode:(id)arg1 error:(id *)arg2;
+ (id)requestPackageWithReserveInfo:(id)arg1;
+ (id)responsePkgWithData:(id)arg1;
+ (id)strategyWithData:(id)arg1 decode:(_Bool)arg2;
+ (id)uniPacket;

@end
