//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MOBFComponentManager : NSObject
{
    NSMutableArray *_regComponents;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (id)getComponentName:(id)arg1;
- (id)getComponentVersion:(id)arg1;
- (id)getComponents:(id)arg1;
- (id)init;
- (void)regComponent:(Class)arg1;
@property(retain, nonatomic) NSMutableArray *regComponents; // @synthesize regComponents=_regComponents;
- (void)unregComponent:(Class)arg1;

@end

