//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBBaseResponse.h"

@class NSDate, NSString;

@interface WBAuthorizeResponse : WBBaseResponse
{
    NSString *userID;
    NSString *accessToken;
    NSDate *expirationDate;
    NSString *refreshToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate;
- (void)loadFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken;
@property(retain, nonatomic) NSString *userID; // @synthesize userID;
- (void)storeToDictionary:(id)arg1;
- (id)validate;

@end
