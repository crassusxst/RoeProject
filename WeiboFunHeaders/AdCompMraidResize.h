//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AdCompMraidResize : NSObject
{
    _Bool _allowOffScreen;
    int _width;
    int _height;
    int _offSetX;
    int _offSetY;
    int _customClosePosition;
}

+ (int)mraidCustomClosePositionFromString:(id)arg1;
@property(nonatomic) _Bool allowOffScreen; // @synthesize allowOffScreen=_allowOffScreen;
@property(nonatomic) int customClosePosition; // @synthesize customClosePosition=_customClosePosition;
@property(nonatomic) int height; // @synthesize height=_height;
- (id)init;
@property(nonatomic) int offSetX; // @synthesize offSetX=_offSetX;
@property(nonatomic) int offSetY; // @synthesize offSetY=_offSetY;
@property(nonatomic) int width; // @synthesize width=_width;

@end
