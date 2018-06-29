//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMConfig.h"

#import "IMConfig.h"

@class IMAdsConfigModel, NSString;

@interface IMAdsConfig : IMConfig <IMConfig>
{
    IMAdsConfigModel *_model;
}

- (void).cxx_destruct;
- (id)cacheConfigForType:(id)arg1;
- (id)getPlacementCacheConfig:(id)arg1;
- (id)getType;
- (id)getWebviewConfigForType:(id)arg1;
- (id)init;
- (_Bool)isTrcEnableForType:(id)arg1;
- (_Bool)isValid;
@property(retain, nonatomic) IMAdsConfigModel *model; // @synthesize model=_model;
- (id)toDictionary;
- (id)trcConfigForType:(id)arg1;
- (_Bool)updatefromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

