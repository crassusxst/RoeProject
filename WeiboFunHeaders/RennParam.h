//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RennParam : NSObject
{
    NSString *_type;
    NSString *_path;
    NSString *_method;
}

+ (_Bool)accessInstanceVariablesDirectly;
+ (id)getPropertiesAndTypesForClassName:(const char *)arg1;
- (void)dealloc;
- (id)initWithType:(id)arg1 path:(id)arg2 method:(id)arg3;
- (id)method;
- (id)path;
- (id)toDictionary;
- (id)type;

@end

