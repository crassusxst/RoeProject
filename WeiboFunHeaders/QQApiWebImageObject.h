//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface QQApiWebImageObject : QQApiObject
{
    NSURL *_previewImageURL;
}

+ (id)objectWithPreviewImageURL:(id)arg1 title:(id)arg2 description:(id)arg3;
- (void)dealloc;
- (id)initWithPreviewImageURL:(id)arg1 title:(id)arg2 description:(id)arg3;
@property(retain, nonatomic) NSURL *previewImageURL; // @synthesize previewImageURL=_previewImageURL;

@end

