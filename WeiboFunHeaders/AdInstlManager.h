//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AdInstlManager : NSObject
{
    id <AdInstlManagerDelegate> delegate;
    NSString *adInstlKey;
    NSString *appChannel;
    _Bool autoRoll;
}

+ (id)managerWithAdInstlKey:(id)arg1 WithDelegate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adInstlKey; // @synthesize adInstlKey;
- (void)adapter:(id)arg1 didGetEvent:(int)arg2 error:(id)arg3;
- (void)adapter:(id)arg1 requestString:(id)arg2;
@property(retain, nonatomic) NSString *appChannel; // @synthesize appChannel;
@property(nonatomic) _Bool autoRoll; // @synthesize autoRoll;
- (id)currentNetworkName;
- (void)dealloc;
@property(nonatomic) __weak id <AdInstlManagerDelegate> delegate; // @synthesize delegate;
- (_Bool)isReady;
- (_Bool)loadAdInstlView:(id)arg1;
- (_Bool)loadSingleAdInstlView:(id)arg1 withIndex:(int)arg2;
- (int)loadType;
- (id)marketChannel;
- (_Bool)showAdInstlView:(id)arg1;
- (void)startGetConfig;

@end

