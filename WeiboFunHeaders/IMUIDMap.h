//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface IMUIDMap : NSObject
{
    NSDictionary *_configIncludeIdMap;
}

- (void).cxx_destruct;
- (id)XORAndEncodeInput:(id)arg1 WithRandKey:(id)arg2;
@property(retain, nonatomic) NSDictionary *configIncludeIdMap; // @synthesize configIncludeIdMap=_configIncludeIdMap;
- (id)getPlainMap;
- (id)getUIDMap:(id)arg1 xor:(_Bool)arg2;
- (id)initWithIncludeIdDictionary:(id)arg1;

@end

