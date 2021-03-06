//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBFDataModel.h"

#import "IMOBFSocialUser.h"
#import "NSCoding.h"

@class NSArray, NSDate, NSDictionary, NSString, SSDKCredential;

@interface SSDKUser : MOBFDataModel <NSCoding, IMOBFSocialUser>
{
    long long _platformType;
    SSDKCredential *_credential;
    NSString *_uid;
    NSString *_nickname;
    NSString *_icon;
    long long _gender;
    NSString *_url;
    NSString *_aboutMe;
    long long _verifyType;
    NSString *_verifyReason;
    NSDate *_birthday;
    long long _followerCount;
    long long _friendCount;
    long long _shareCount;
    double _regAt;
    long long _level;
    NSArray *_educations;
    NSArray *_works;
    NSDictionary *_rawData;
}

+ (id)jsonObjectWithUser:(id)arg1;
+ (id)userWithJsonObject:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *aboutMe; // @synthesize aboutMe=_aboutMe;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) SSDKCredential *credential; // @synthesize credential=_credential;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSArray *educations; // @synthesize educations=_educations;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) long long followerCount; // @synthesize followerCount=_followerCount;
@property(nonatomic) long long friendCount; // @synthesize friendCount=_friendCount;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithJsonObject:(id)arg1;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) long long platformType; // @synthesize platformType=_platformType;
@property(retain, nonatomic) NSDictionary *rawData; // @synthesize rawData=_rawData;
@property(nonatomic) double regAt; // @synthesize regAt=_regAt;
@property(nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *verifyReason; // @synthesize verifyReason=_verifyReason;
@property(nonatomic) long long verifyType; // @synthesize verifyType=_verifyType;
@property(retain, nonatomic) NSArray *works; // @synthesize works=_works;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

