//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class UIImage<YYAnimatedImage>, YYAnimatedImageView;

__attribute__((visibility("hidden")))
@interface _YYAnimatedImageViewFetchOperation : NSOperation
{
    YYAnimatedImageView *_view;
    unsigned long long _nextIndex;
    UIImage<YYAnimatedImage> *_curImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage<YYAnimatedImage> *curImage; // @synthesize curImage=_curImage;
- (void)main;
@property(nonatomic) unsigned long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(nonatomic) __weak YYAnimatedImageView *view; // @synthesize view=_view;

@end

