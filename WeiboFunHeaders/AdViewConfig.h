//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AdViewAdNetworkRegistry, NSArray, NSDate, NSMutableArray, NSString, NSURL, UIColor;

@interface AdViewConfig : NSObject
{
    NSString *appKey;
    NSURL *configURL;
    _Bool legacy;
    _Bool adsAreOff;
    NSMutableArray *adNetworkConfigs;
    NSString *reportHost;
    UIColor *backgroundColor;
    UIColor *textColor;
    double refreshInterval;
    _Bool locationOn;
    int bannerAnimationType;
    long long fullscreenWaitInterval;
    long long fullscreenMaxAds;
    NSMutableArray *delegates;
    _Bool hasConfig;
    NSDate *getDataDate;
    AdViewAdNetworkRegistry *adNetworkRegistry;
    long long langSet;
    int fetchType;
    int configVer;
    int sdkType;
    _Bool adFill;
    NSString *adFilllPercent;
    int dispatchMethod;
    NSString *adFillPercent;
}

+ (_Bool)isDeviceForeign;
- (void).cxx_destruct;
@property(nonatomic) _Bool adFill; // @synthesize adFill;
@property(retain, nonatomic) NSString *adFillPercent; // @synthesize adFillPercent;
@property(readonly, nonatomic) NSArray *adNetworkConfigs; // @synthesize adNetworkConfigs;
@property(nonatomic) __weak AdViewAdNetworkRegistry *adNetworkRegistry; // @synthesize adNetworkRegistry;
@property(readonly, nonatomic) _Bool adsAreOff; // @synthesize adsAreOff;
@property(readonly, nonatomic) NSString *appKey; // @synthesize appKey;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(readonly, nonatomic) int bannerAnimationType; // @synthesize bannerAnimationType;
@property(readonly, nonatomic) NSURL *configURL; // @synthesize configURL;
@property(nonatomic) int configVer; // @synthesize configVer;
- (void)dealloc;
- (id)description;
@property(nonatomic) int dispatchMethod; // @synthesize dispatchMethod;
@property(nonatomic) int fetchType; // @synthesize fetchType;
@property(readonly, nonatomic) long long fullscreenMaxAds; // @synthesize fullscreenMaxAds;
@property(readonly, nonatomic) long long fullscreenWaitInterval; // @synthesize fullscreenWaitInterval;
@property(readonly, nonatomic) NSDate *getDataDate; // @synthesize getDataDate;
@property(readonly, nonatomic) _Bool hasConfig; // @synthesize hasConfig;
- (id)initWithAppKey:(id)arg1 sdkType:(int)arg2;
- (_Bool)isMatchLangSet:(id)arg1;
@property(nonatomic) long long langSet; // @synthesize langSet;
@property(readonly, nonatomic) _Bool locationOn; // @synthesize locationOn;
- (void)notifyDelegatesOfFailure:(id)arg1;
- (_Bool)parseConfig:(id)arg1 error:(id *)arg2;
- (_Bool)parseExtraConfig:(id)arg1 error:(id *)arg2;
- (_Bool)parseLegacyConfig:(id)arg1 error:(id *)arg2;
- (_Bool)parseNewConfig:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) double refreshInterval; // @synthesize refreshInterval;
@property(readonly, nonatomic) NSString *reportHost; // @synthesize reportHost;
@property(readonly, nonatomic) int sdkType; // @synthesize sdkType;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor;

@end

