//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSString;

@interface IMSDKGeoLocationManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _locationServicesEnabled;
    CLLocationManager *_locationMgr;
    NSString *_telemetryComponent;
}

+ (id)locationAuthorizationString;
- (void).cxx_destruct;
- (void)clearLocation;
- (void)dealloc;
- (id)getCollectedLocation;
- (id)initWithComponentType:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
@property(retain, nonatomic) CLLocationManager *locationMgr; // @synthesize locationMgr=_locationMgr;
@property(nonatomic) _Bool locationServicesEnabled; // @synthesize locationServicesEnabled=_locationServicesEnabled;
- (void)setCollectedLocation:(id)arg1;
@property(retain, nonatomic) NSString *telemetryComponent; // @synthesize telemetryComponent=_telemetryComponent;
- (void)startLocationTracking;
- (void)stopLocationTracking;
- (void)updateLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

