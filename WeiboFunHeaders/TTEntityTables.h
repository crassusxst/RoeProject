//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface TTEntityTables : NSObject
{
    NSDictionary *_iso88591;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSDictionary *iso88591; // @synthesize iso88591=_iso88591;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (oneway void)superRelease;

@end
