//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMNetworkServiceProvider, IMRequest, IMResponse, IMWebViewController, NSDictionary, NSURLRequest;

@protocol IMNetworkDelegate <NSObject>
- (void)networkServiceProvider:(IMNetworkServiceProvider *)arg1 request:(IMRequest *)arg2 didGetResponse:(IMResponse *)arg3;

@optional
- (_Bool)networkServiceProvider:(IMNetworkServiceProvider *)arg1 forWebViewController:(IMWebViewController *)arg2 shouldStartLoadWithRequest:(NSURLRequest *)arg3 navigationType:(long long)arg4 withIMRequest:(IMRequest *)arg5;
- (void)networkServiceProvider:(IMNetworkServiceProvider *)arg1 request:(IMRequest *)arg2 didGetHeaders:(NSDictionary *)arg3;
@end

