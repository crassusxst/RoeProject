//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYJceObjectV2.h"

@class NSData, NSString;

@interface BLYAttachment : BLYJceObjectV2
{
    BOOL jcev2_p_0_r_type;
    NSString *jcev2_p_1_r_fileName;
    NSData *jcev2_p_2_o_data;
}

+ (void)initialize;
+ (id)jceType;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic, getter=jce_data, setter=setJce_data:) NSData *jcev2_p_2_o_data; // @synthesize jcev2_p_2_o_data;
@property(retain, nonatomic, getter=jce_fileName, setter=setJce_fileName:) NSString *jcev2_p_1_r_fileName; // @synthesize jcev2_p_1_r_fileName;
@property(nonatomic, getter=jce_type, setter=setJce_type:) BOOL jcev2_p_0_r_type; // @synthesize jcev2_p_0_r_type;

@end
