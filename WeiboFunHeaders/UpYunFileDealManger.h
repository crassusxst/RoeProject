//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UpSimpleHttpClient;

__attribute__((visibility("hidden")))
@interface UpYunFileDealManger : NSObject
{
    UpSimpleHttpClient *_httpClient;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)dealTaskWithBucketName:(id)arg1 operator:(id)arg2 password:(id)arg3 notify_url:(id)arg4 source:(id)arg5 tasks:(id)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end

