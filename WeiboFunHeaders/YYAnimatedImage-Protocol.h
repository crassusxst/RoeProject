//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@protocol YYAnimatedImage <NSObject>
- (unsigned long long)animatedImageBytesPerFrame;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;
- (UIImage *)animatedImageFrameAtIndex:(unsigned long long)arg1;
- (unsigned long long)animatedImageFrameCount;
- (unsigned long long)animatedImageLoopCount;

@optional
- (struct CGRect)animatedImageContentsRectAtIndex:(unsigned long long)arg1;
@end

