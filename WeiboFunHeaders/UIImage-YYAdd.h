//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (YYAdd)
+ (id)_yy_imageWithPDF:(id)arg1 resize:(_Bool)arg2 size:(struct CGSize)arg3;
+ (id)imageWithColor:(id)arg1;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)imageWithEmoji:(id)arg1 size:(double)arg2;
+ (id)imageWithPDF:(id)arg1;
+ (id)imageWithPDF:(id)arg1 size:(struct CGSize)arg2;
+ (id)imageWithSize:(struct CGSize)arg1 drawBlock:(CDUnknownBlockType)arg2;
+ (id)imageWithSmallGIFData:(id)arg1 scale:(double)arg2;
+ (_Bool)isAnimatedGIFData:(id)arg1;
+ (_Bool)isAnimatedGIFFile:(id)arg1;
- (id)_yy_flipHorizontal:(_Bool)arg1 vertical:(_Bool)arg2;
- (id)_yy_mergeImageRef:(struct CGImage *)arg1 tintColor:(id)arg2 tintBlendMode:(int)arg3 maskImage:(id)arg4 opaque:(_Bool)arg5;
- (void)drawInRect:(struct CGRect)arg1 withContentMode:(long long)arg2 clipsToBounds:(_Bool)arg3;
- (_Bool)hasAlphaChannel;
- (id)imageByBlurDark;
- (id)imageByBlurExtraLight;
- (id)imageByBlurLight;
- (id)imageByBlurRadius:(double)arg1 tintColor:(id)arg2 tintMode:(int)arg3 saturation:(double)arg4 maskImage:(id)arg5;
- (id)imageByBlurSoft;
- (id)imageByBlurWithTint:(id)arg1;
- (id)imageByCropToRect:(struct CGRect)arg1;
- (id)imageByFlipHorizontal;
- (id)imageByFlipVertical;
- (id)imageByGrayscale;
- (id)imageByInsetEdge:(struct UIEdgeInsets)arg1 withColor:(id)arg2;
- (id)imageByResizeToSize:(struct CGSize)arg1;
- (id)imageByResizeToSize:(struct CGSize)arg1 contentMode:(long long)arg2;
- (id)imageByRotate180;
- (id)imageByRotate:(double)arg1 fitSize:(_Bool)arg2;
- (id)imageByRotateLeft90;
- (id)imageByRotateRight90;
- (id)imageByRoundCornerRadius:(double)arg1;
- (id)imageByRoundCornerRadius:(double)arg1 borderWidth:(double)arg2 borderColor:(id)arg3;
- (id)imageByRoundCornerRadius:(double)arg1 corners:(unsigned long long)arg2 borderWidth:(double)arg3 borderColor:(id)arg4 borderLineJoin:(int)arg5;
- (id)imageByTintColor:(id)arg1;
@end
