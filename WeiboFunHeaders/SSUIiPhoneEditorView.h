//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, SSDKImage, SSUIiPhoneEditorToolBar, UIImageView, UITextView;

@interface SSUIiPhoneEditorView : UIView
{
    NSString *_content;
    SSDKImage *_image;
    NSArray *_platformTypes;
    SSUIiPhoneEditorToolBar *_toolbar;
    unsigned long long _platType;
    _Bool _needLayout;
    _Bool _firstTimeSet;
    long long _interfaceOrientation;
    UITextView *_contentView;
    NSMutableArray *_selectedPlatformArray;
    UIImageView *_picView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) UITextView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutLandscape;
- (void)layoutPortrait;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImageView *picView; // @synthesize picView=_picView;
@property(readonly, nonatomic) NSArray *platformTypes; // @synthesize platformTypes=_platformTypes;
- (void)rotationToInterfaceOrientation:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *selectedPlatformArray; // @synthesize selectedPlatformArray=_selectedPlatformArray;
- (void)setNeedsLayout;
@property(readonly, nonatomic) SSUIiPhoneEditorToolBar *toolbar; // @synthesize toolbar=_toolbar;
- (void)updateLayout;
- (void)updateWithContent:(id)arg1 image:(id)arg2 platformTypes:(id)arg3 interfaceOrientation:(long long)arg4;

@end

