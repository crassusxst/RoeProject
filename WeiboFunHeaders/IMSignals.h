//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMConfigDelegate.h"

@class IMSignalsConfig, NSString;

@interface IMSignals : NSObject <IMConfigDelegate>
{
    IMSignalsConfig *_config;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) IMSignalsConfig *config; // @synthesize config=_config;
- (void)configUpdated:(id)arg1;
- (id)init;
- (void)start;
- (void)startNice;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

