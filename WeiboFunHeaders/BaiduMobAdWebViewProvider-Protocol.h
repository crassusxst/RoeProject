//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, NSURLRequest;

@protocol BaiduMobAdWebViewProvider <NSObject>
- (NSURL *)URL;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
- (void)evaluateJavaScript:(NSString *)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (void)goBack;
- (void)goForward;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)loadRequest:(NSURLRequest *)arg1;
- (void)reload;
@property(retain, nonatomic) NSURLRequest *request;
@property(nonatomic) _Bool scalesPageToFit;
- (void)setDelegate:(id)arg1;
- (void)stopLoading;
@end
