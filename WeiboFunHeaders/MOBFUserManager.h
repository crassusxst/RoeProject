//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MOBFUser;

@interface MOBFUserManager : NSObject
{
    MOBFUser *_curUser;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)_checkUserStatus:(CDUnknownBlockType)arg1;
- (id)_getRequestURL:(id)arg1;
- (void)_loginWithUser:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_logoutWithUser:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_saveUser;
- (void)_updateWithUser:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) MOBFUser *curUser; // @synthesize curUser=_curUser;
- (void)getCurrentUser:(CDUnknownBlockType)arg1;
- (id)init;
- (void)setCurrentUser:(id)arg1;

@end

