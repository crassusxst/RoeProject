//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RennParam.h"

@class NSString;

@interface ListBlogParam : RennParam
{
    NSString *_ownerId;
    long long _pageSize;
    long long _pageNumber;
}

- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;

@end
