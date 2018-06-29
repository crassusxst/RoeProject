//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WBSDKReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (_Bool)connectionRequired;
- (long long)currentReachabilityStatus;
- (void)dealloc;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (_Bool)startNotifier;
- (void)stopNotifier;

@end

