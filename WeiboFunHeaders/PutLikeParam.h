//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RennParam.h"

@class NSString;

@interface PutLikeParam : RennParam
{
    NSString *_ugcOwnerId;
    NSString *_likeUGCType;
    NSString *_ugcId;
}

- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSString *likeUGCType; // @synthesize likeUGCType=_likeUGCType;
@property(retain, nonatomic) NSString *ugcId; // @synthesize ugcId=_ugcId;
@property(retain, nonatomic) NSString *ugcOwnerId; // @synthesize ugcOwnerId=_ugcOwnerId;

@end

