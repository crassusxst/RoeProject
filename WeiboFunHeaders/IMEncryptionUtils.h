//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMEncryptionUtils : NSObject
{
}

+ (id)EncodeRSA:(id)arg1 publicKey:(struct __SecKey *)arg2;
+ (id)dataByAES128:(id)arg1 withKey:(id)arg2 withIV:(id)arg3;
+ (id)decodeAES128:(id)arg1 withKey:(id)arg2 withIV:(id)arg3;
+ (id)encodeRSADataFromConfig:(id)arg1;
+ (id)getFinalEncryptedStringWithAesKey:(id)arg1 iv:(id)arg2 hmacKey:(id)arg3 postBody:(id)arg4;
+ (id)getHMACKey;
+ (struct __SecKey *)getIMPublicKeyWithCert:(id)arg1;
+ (id)getNewAESKeySet;
+ (id)getRandom128BitKey;
+ (id)getRandom64BitKey;
+ (id)getRandomAES128Key;
+ (id)getRandomIV;
+ (id)getRandomKey:(int)arg1;
+ (id)hmacSHA1FromData:(id)arg1 withKey:(id)arg2;
+ (id)md5Hash:(id)arg1;
+ (void)setAesKeyExpiryTimestamp:(double)arg1;
+ (id)sha1Hash:(id)arg1;

@end

