//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SMSSDKHelper : NSObject
{
}

+ (id)_idfa;
+ (_Bool)_isIpAdressWithString:(id)arg1;
+ (_Bool)_isVerificationCode:(id)arg1;
+ (id)_matchRegexWithPhone:(id)arg1 zone:(id)arg2;
+ (id)aeskeyWithEncryptedString:(id)arg1;
+ (id)checkAuthorityWithInfo:(id)arg1 andParamsFormat:(id)arg2;
+ (_Bool)checkServerConfig:(id)arg1;
+ (_Bool)contactPriviteKeyNotExist;
+ (id)decryptPhoneWithAeskey:(id)arg1 contacts:(id)arg2;
+ (_Bool)didRetry:(_Bool)arg1 numberOfRetries:(long long *)arg2 retryOperation:(CDUnknownBlockType)arg3;
+ (_Bool)didThrowError:(id)arg1 callbackOperation:(CDUnknownBlockType)arg2;
+ (id)encryptPhoneNumberForContacts:(id)arg1 aeskey:(id)arg2;
+ (id)encryptStringWithContacts:(id)arg1 aeskey:(id)arg2;
+ (id)encryptedStringWithAeskey:(id)arg1;
+ (id)handleParams:(id)arg1;
+ (id)infoDicForMethod:(id)arg1;
+ (id)ret16bitString;
+ (id)urlWithInfoDic:(id)arg1;
+ (long long)versionNumber;

@end

