//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NSTimer, UIActivityIndicatorView, UIFont, UILabel, UIProgressView;

__attribute__((visibility("hidden")))
@interface TTActivityLabel : UIView
{
    int _style;
    UIView *_bezelView;
    UIProgressView *_progressView;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_label;
    float _progress;
    _Bool _smoothesProgress;
    NSTimer *_smoothTimer;
}

- (void)dealloc;
@property(retain, nonatomic) UIFont *font;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2 text:(id)arg3;
- (id)initWithStyle:(int)arg1;
@property(nonatomic) _Bool isAnimating;
- (void)layoutSubviews;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool smoothesProgress; // @synthesize smoothesProgress=_smoothesProgress;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)smoothTimer;
@property(readonly, nonatomic) int style; // @synthesize style=_style;

@end

