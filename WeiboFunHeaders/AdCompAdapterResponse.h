//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary;

@interface AdCompAdapterResponse : NSObject
{
    NSDictionary *headers;
    NSData *body;
    int status;
    int type;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *body; // @synthesize body;
- (void)dealloc;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers;
@property(nonatomic) int status; // @synthesize status;
@property(nonatomic) int type; // @synthesize type;

@end

