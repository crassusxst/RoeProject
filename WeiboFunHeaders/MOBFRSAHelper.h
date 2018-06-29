//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MOBFRSAKey;

@interface MOBFRSAHelper : NSObject
{
    MOBFRSAKey *_key;
}

- (void).cxx_destruct;
- (_Bool)decodeBlockWithBytes:(const char *)arg1 size:(int)arg2 destBytes:(char **)arg3 outSize:(int *)arg4;
- (id)decryptWithData:(id)arg1;
- (_Bool)encodeBlockWithBytes:(const char *)arg1 offset:(int)arg2 size:(int)arg3 blockSize:(int)arg4 destBytes:(char **)arg5 outSize:(int *)arg6;
- (id)encryptWithData:(id)arg1;
- (_Bool)genKey;
- (id)init;
- (id)initWithKeySize:(int)arg1;
- (id)initWithKeySize:(int)arg1 publicKey:(id)arg2 privateKey:(id)arg3 modulus:(id)arg4;
@property(retain, nonatomic) MOBFRSAKey *key; // @synthesize key=_key;
- (_Bool)paddingBlockWithBytes:(const char *)arg1 size:(int)arg2 blockSize:(int)arg3 destBytes:(char **)arg4;
- (_Bool)recoveryPaddingBlock:(const char *)arg1 size:(int)arg2 destBytes:(char **)arg3 outSize:(int *)arg4;

@end

