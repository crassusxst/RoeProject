//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IJKNotificationManager : NSObject
{
    NSMutableDictionary *_registeredNotifications;
}

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)init;
- (void)removeAllObservers:(id)arg1;

@end

