//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface JDStatusBarView : UIView
{
    double _textVerticalPositionAdjustment;
    UILabel *_textLabel;
    UIActivityIndicatorView *_activityIndicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (struct CGSize)currentTextSize;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) double textVerticalPositionAdjustment; // @synthesize textVerticalPositionAdjustment=_textVerticalPositionAdjustment;

@end

