//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (YYAdd)
+ (id)dataNamed:(id)arg1;
+ (id)dataWithBase64EncodedString:(id)arg1;
+ (id)dataWithHexString:(id)arg1;
- (id)aes256DecryptWithkey:(id)arg1 iv:(id)arg2;
- (id)aes256EncryptWithKey:(id)arg1 iv:(id)arg2;
- (id)base64EncodedString;
- (unsigned int)crc32;
- (id)crc32String;
- (id)gzipDeflate;
- (id)gzipInflate;
- (id)hexString;
- (id)hmacDataUsingAlg:(unsigned int)arg1 withKey:(id)arg2;
- (id)hmacMD5DataWithKey:(id)arg1;
- (id)hmacMD5StringWithKey:(id)arg1;
- (id)hmacSHA1DataWithKey:(id)arg1;
- (id)hmacSHA1StringWithKey:(id)arg1;
- (id)hmacSHA224DataWithKey:(id)arg1;
- (id)hmacSHA224StringWithKey:(id)arg1;
- (id)hmacSHA256DataWithKey:(id)arg1;
- (id)hmacSHA256StringWithKey:(id)arg1;
- (id)hmacSHA384DataWithKey:(id)arg1;
- (id)hmacSHA384StringWithKey:(id)arg1;
- (id)hmacSHA512DataWithKey:(id)arg1;
- (id)hmacSHA512StringWithKey:(id)arg1;
- (id)hmacStringUsingAlg:(unsigned int)arg1 withKey:(id)arg2;
- (id)jsonValueDecoded;
- (id)md2Data;
- (id)md2String;
- (id)md4Data;
- (id)md4String;
- (id)md5Data;
- (id)md5String;
- (id)sha1Data;
- (id)sha1String;
- (id)sha224Data;
- (id)sha224String;
- (id)sha256Data;
- (id)sha256String;
- (id)sha384Data;
- (id)sha384String;
- (id)sha512Data;
- (id)sha512String;
- (id)utf8String;
- (id)zlibDeflate;
- (id)zlibInflate;
@end

