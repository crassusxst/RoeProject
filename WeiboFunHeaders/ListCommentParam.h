//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RennParam.h"

@class NSString;

@interface ListCommentParam : RennParam
{
    NSString *_entryOwnerId;
    NSString *_entryId;
    NSString *_commentType;
    long long _pageSize;
    long long _pageNumber;
}

@property(retain, nonatomic) NSString *commentType; // @synthesize commentType=_commentType;
- (void)dealloc;
@property(retain, nonatomic) NSString *entryId; // @synthesize entryId=_entryId;
@property(retain, nonatomic) NSString *entryOwnerId; // @synthesize entryOwnerId=_entryOwnerId;
- (id)init;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;

@end

