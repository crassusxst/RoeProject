//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AdViewDeviceCollector : NSObject
{
    id <AdViewDeviceCollectorDelegate> delegate;
    NSString *uuid;
    NSString *idfa;
    NSString *idfv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)decodeString:(id)arg1;
+ (id)encodeString:(id)arg1;
+ (id)myIdentifier;
+ (id)myIdfa;
+ (id)myIdfv;
+ (id)sharedDeviceCollector;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <AdViewDeviceCollectorDelegate> delegate; // @synthesize delegate;
- (id)deviceId;
- (id)deviceModel;
- (long long)findSDKTypeByNSURL:(id)arg1;
- (id)getIdfa;
- (id)getIdfv;
@property(retain, nonatomic) NSString *idfa; // @synthesize idfa;
@property(retain, nonatomic) NSString *idfv; // @synthesize idfv;
- (id)init;
- (id)networkType;
- (void)postDeviceInformation:(int)arg1;
- (id)screenResolution;
- (id)serviceProviderCode;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
- (id)systemName;
- (id)systemVersion;
- (id)time;
- (id)urlEncode:(id)arg1;

@end

