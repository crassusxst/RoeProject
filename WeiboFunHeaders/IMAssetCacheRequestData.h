//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMNetworkServiceProvider, NSArray, NSString;

@interface IMAssetCacheRequestData : NSObject
{
    IMNetworkServiceProvider *_nsp;
    NSString *_fileType;
    NSString *_hashString;
    NSArray *_allowedContentType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *allowedContentType; // @synthesize allowedContentType=_allowedContentType;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain) NSString *hashString; // @synthesize hashString=_hashString;
@property(retain, nonatomic) IMNetworkServiceProvider *nsp; // @synthesize nsp=_nsp;

@end

