//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMRequest, NSArray, NSString;

@protocol IMHealthReportingDelegate <NSObject>
- (IMRequest *)provideNetworkRequestObject:(NSArray *)arg1 forAdType:(NSString *)arg2;

@optional
- (void)flushRequestObject:(NSArray *)arg1;
@end
