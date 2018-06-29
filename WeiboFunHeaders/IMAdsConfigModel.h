//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMJSONModel.h"

@class IMAdsConfigAssetCacheModel, IMAdsConfigIMAI_Model, IMAdsConfigMraidModel, IMAdsConfigRenderingModel, IMAdsConfigTrcModel, IMAdsConfigVastVideoModel, IMAdsConfigViewabilityModel, IMAdsConfig_Cache, IMAdsConfig_Preload, NSNumber, NSString;

@interface IMAdsConfigModel : IMJSONModel
{
    NSString *_url;
    NSString *_trueRequestUrl;
    NSString *_moatPartnercodeNativeDisplay;
    long long _minimumRefreshInterval;
    long long _defaultRefreshInterval;
    long long _fetchTimeout;
    NSNumber *_showIntWithoutVC;
    NSNumber *_mediaVolumeCollectionEnabled;
    IMAdsConfigIMAI_Model *_imai;
    IMAdsConfig_Cache *_cache;
    IMAdsConfigRenderingModel *_rendering;
    IMAdsConfig_Preload *_preload;
    IMAdsConfigAssetCacheModel *_assetCache;
    IMAdsConfigVastVideoModel *_vastVideo;
    IMAdsConfigMraidModel *_mraid;
    IMAdsConfigViewabilityModel *_viewability;
    IMAdsConfigTrcModel *_trcFlagDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IMAdsConfigAssetCacheModel *assetCache; // @synthesize assetCache=_assetCache;
@property(retain, nonatomic) IMAdsConfig_Cache *cache; // @synthesize cache=_cache;
@property(nonatomic) long long defaultRefreshInterval; // @synthesize defaultRefreshInterval=_defaultRefreshInterval;
@property(nonatomic) long long fetchTimeout; // @synthesize fetchTimeout=_fetchTimeout;
@property(retain, nonatomic) IMAdsConfigIMAI_Model *imai; // @synthesize imai=_imai;
- (id)init;
@property(retain, nonatomic) NSNumber *mediaVolumeCollectionEnabled; // @synthesize mediaVolumeCollectionEnabled=_mediaVolumeCollectionEnabled;
@property(nonatomic) long long minimumRefreshInterval; // @synthesize minimumRefreshInterval=_minimumRefreshInterval;
@property(retain, nonatomic) NSString *moatPartnercodeNativeDisplay; // @synthesize moatPartnercodeNativeDisplay=_moatPartnercodeNativeDisplay;
@property(retain, nonatomic) IMAdsConfigMraidModel *mraid; // @synthesize mraid=_mraid;
@property(retain, nonatomic) IMAdsConfig_Preload *preload; // @synthesize preload=_preload;
@property(retain, nonatomic) IMAdsConfigRenderingModel *rendering; // @synthesize rendering=_rendering;
@property(retain, nonatomic) NSNumber *showIntWithoutVC; // @synthesize showIntWithoutVC=_showIntWithoutVC;
@property(retain, nonatomic) IMAdsConfigTrcModel *trcFlagDict; // @synthesize trcFlagDict=_trcFlagDict;
@property(retain, nonatomic) NSString *trueRequestUrl; // @synthesize trueRequestUrl=_trueRequestUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) IMAdsConfigVastVideoModel *vastVideo; // @synthesize vastVideo=_vastVideo;
@property(retain, nonatomic) IMAdsConfigViewabilityModel *viewability; // @synthesize viewability=_viewability;
- (_Bool)validate:(id *)arg1;

@end

