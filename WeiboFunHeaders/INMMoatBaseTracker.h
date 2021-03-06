//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSString;

@interface INMMoatBaseTracker : NSObject
{
    _Bool _isActive;
    _Bool _isNativeDisplay;
    _Bool _isNativeVideo;
    NSString *_name;
    CALayer *_trackedLayer;
}

- (void).cxx_destruct;
- (id)getViewableState;
- (id)init;
@property _Bool isActive; // @synthesize isActive=_isActive;
@property _Bool isNativeDisplay; // @synthesize isNativeDisplay=_isNativeDisplay;
@property _Bool isNativeVideo; // @synthesize isNativeVideo=_isNativeVideo;
@property(retain) NSString *name; // @synthesize name=_name;
@property __weak CALayer *trackedLayer; // @synthesize trackedLayer=_trackedLayer;
- (void)startTracking;
- (void)stopTracking;

@end

