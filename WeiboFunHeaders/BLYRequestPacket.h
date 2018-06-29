//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYJceObjectV2.h"

@class NSData, NSDictionary, NSNumber, NSString;

@interface BLYRequestPacket : BLYJceObjectV2
{
    NSNumber *_iVersion;
    NSNumber *_cPacketType;
    NSNumber *_iMessageType;
    NSNumber *_iRequestId;
    NSString *_sServantName;
    NSString *_sFuncName;
    NSData *_sBuffer;
    NSNumber *_iTimeout;
    NSDictionary *_context;
    NSDictionary *_status;
}

- (void).cxx_destruct;
- (void)__pack:(id)arg1;
- (void)__unpack:(id)arg1;
@property(retain, nonatomic) NSNumber *cPacketType; // @synthesize cPacketType=_cPacketType;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) NSNumber *iMessageType; // @synthesize iMessageType=_iMessageType;
@property(retain, nonatomic) NSNumber *iRequestId; // @synthesize iRequestId=_iRequestId;
@property(retain, nonatomic) NSNumber *iTimeout; // @synthesize iTimeout=_iTimeout;
@property(retain, nonatomic) NSNumber *iVersion; // @synthesize iVersion=_iVersion;
- (id)init;
@property(retain, nonatomic) NSData *sBuffer; // @synthesize sBuffer=_sBuffer;
@property(retain, nonatomic) NSString *sFuncName; // @synthesize sFuncName=_sFuncName;
@property(retain, nonatomic) NSString *sServantName; // @synthesize sServantName=_sServantName;
@property(retain, nonatomic) NSDictionary *status; // @synthesize status=_status;

@end

