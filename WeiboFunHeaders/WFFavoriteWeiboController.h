//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFWeiboController.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface WFFavoriteWeiboController : WFWeiboController
{
    NSDate *_minDate;
    NSDate *_maxDate;
    NSString *_searchKeyword;
}

- (void).cxx_destruct;
- (void)createModel;
- (id)initWithType:(int)arg1;
- (void)setKeyword:(id)arg1;
- (void)setMinDate:(id)arg1 maxDate:(id)arg2;

@end

