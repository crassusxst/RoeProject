//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RennParam.h"

@class NSString;

@interface ShareStatusParam : RennParam
{
    NSString *_content;
    NSString *_statusId;
    NSString *_ownerId;
}

@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(retain, nonatomic) NSString *statusId; // @synthesize statusId=_statusId;

@end

