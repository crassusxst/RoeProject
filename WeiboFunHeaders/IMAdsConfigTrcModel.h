//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMJSONModel.h"

@class IMAdsConfigTrcAdTypeModel;

@interface IMAdsConfigTrcModel : IMJSONModel
{
    IMAdsConfigTrcAdTypeModel *_baseDict;
    IMAdsConfigTrcAdTypeModel *_bannerDict;
    IMAdsConfigTrcAdTypeModel *_intDict;
    IMAdsConfigTrcAdTypeModel *_nativeDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IMAdsConfigTrcAdTypeModel *bannerDict; // @synthesize bannerDict=_bannerDict;
@property(retain, nonatomic) IMAdsConfigTrcAdTypeModel *baseDict; // @synthesize baseDict=_baseDict;
- (id)init;
@property(retain, nonatomic) IMAdsConfigTrcAdTypeModel *intDict; // @synthesize intDict=_intDict;
@property(retain, nonatomic) IMAdsConfigTrcAdTypeModel *nativeDict; // @synthesize nativeDict=_nativeDict;
- (_Bool)validate:(id *)arg1;

@end
