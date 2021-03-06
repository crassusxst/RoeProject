//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (YYAdd)
+ (id)stringNamed:(id)arg1;
+ (id)stringWithBase64EncodedString:(id)arg1;
+ (id)stringWithUTF32Char:(unsigned int)arg1;
+ (id)stringWithUTF32Chars:(const unsigned int *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithUUID;
- (id)base64EncodedString;
@property(readonly) BOOL charValue;
- (_Bool)containsCharacterSet:(id)arg1;
- (_Bool)containsString:(id)arg1;
- (id)crc32String;
- (id)dataValue;
- (void)enumerateRegexMatches:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateUTF32CharInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (double)heightForFont:(id)arg1 width:(double)arg2;
- (id)hmacMD5StringWithKey:(id)arg1;
- (id)hmacSHA1StringWithKey:(id)arg1;
- (id)hmacSHA224StringWithKey:(id)arg1;
- (id)hmacSHA256StringWithKey:(id)arg1;
- (id)hmacSHA384StringWithKey:(id)arg1;
- (id)hmacSHA512StringWithKey:(id)arg1;
- (_Bool)isNotBlank;
- (id)jsonValueDecoded;
@property(readonly) long long longValue;
- (_Bool)matchesRegex:(id)arg1 options:(unsigned long long)arg2;
- (id)md2String;
- (id)md4String;
- (id)md5String;
- (id)numberValue;
- (double)pathScale;
- (struct _NSRange)rangeOfAll;
- (id)sha1String;
- (id)sha224String;
- (id)sha256String;
- (id)sha384String;
- (id)sha512String;
@property(readonly) short shortValue;
- (struct CGSize)sizeForFont:(id)arg1 size:(struct CGSize)arg2 mode:(long long)arg3;
- (id)stringByAppendingNameScale:(double)arg1;
- (id)stringByAppendingPathScale:(double)arg1;
- (id)stringByEscapingHTML;
- (id)stringByReplacingRegex:(id)arg1 options:(unsigned long long)arg2 withString:(id)arg3;
- (id)stringByTrim;
- (id)stringByURLDecode;
- (id)stringByURLEncode;
@property(readonly) unsigned char unsignedCharValue;
@property(readonly) unsigned int unsignedIntValue;
@property(readonly) unsigned long long unsignedIntegerValue;
@property(readonly) unsigned long long unsignedLongLongValue;
@property(readonly) unsigned long long unsignedLongValue;
@property(readonly) unsigned short unsignedShortValue;
- (double)widthForFont:(id)arg1;
@end

