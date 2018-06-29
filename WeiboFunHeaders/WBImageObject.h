//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData;

@interface WBImageObject : NSObject
{
    _Bool _isShareToStory;
    NSData *imageData;
    id <WBMediaTransferProtocol> _delegate;
    NSArray *_finalAssetArray;
}

+ (id)dictionaryWithImageObject:(id)arg1;
+ (id)imageObjectWithDictionary:(id)arg1;
+ (id)object;
- (void).cxx_destruct;
- (void)addImageAssets:(id)arg1;
- (void)addImages:(id)arg1;
@property(nonatomic) __weak id <WBMediaTransferProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *finalAssetArray; // @synthesize finalAssetArray=_finalAssetArray;
- (id)image;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData;
@property(nonatomic) _Bool isShareToStory; // @synthesize isShareToStory=_isShareToStory;
- (id)validate;

@end

