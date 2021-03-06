//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIActivityIndicatorView, UIImage, UIImageView, UILabel, UIVisualEffectView, UIWindow;

__attribute__((visibility("hidden")))
@interface SMSSDKUIProcessHUD : NSObject
{
    UIWindow *_window;
    UIVisualEffectView *_backgroundView;
    UILabel *_alertLabel;
    UIImageView *_processView;
    UIImage *_failedImage;
    UIImage *_successImage;
    UIActivityIndicatorView *_inditorView;
}

+ (void)dismiss;
+ (void)dismissWithDelay:(double)arg1 result:(CDUnknownBlockType)arg2;
+ (void)dismissWithResult:(CDUnknownBlockType)arg1;
+ (void)resetViewFrame:(id)arg1 style:(unsigned long long)arg2;
+ (id)shareInstance;
+ (void)showFailInfo:(id)arg1;
+ (void)showMsgHUDWithInfo:(id)arg1;
+ (void)showProcessHUDWithInfo:(id)arg1;
+ (void)showSuccessInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *alertLabel; // @synthesize alertLabel=_alertLabel;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImage *failedImage; // @synthesize failedImage=_failedImage;
@property(retain, nonatomic) UIActivityIndicatorView *inditorView; // @synthesize inditorView=_inditorView;
@property(retain, nonatomic) UIImageView *processView; // @synthesize processView=_processView;
@property(retain, nonatomic) UIImage *successImage; // @synthesize successImage=_successImage;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)setup;

@end

