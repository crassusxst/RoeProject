//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UIActionSheetDelegate.h"

@class NSDateFormatter, NSString, TLThumbView, TTImageView, UIButton, UIImageView, UILabel, UIView, WFComment, WFCommentDigButton;

__attribute__((visibility("hidden")))
@interface WFMyCommentCell : UITableViewCell <UIActionSheetDelegate>
{
    UIButton *_actionButton;
    UIImageView *_contentBackView;
    UIView *_quotedBackView;
    NSDateFormatter *_dateFormatter;
    TLThumbView *_imageView2;
    UILabel *_updateTimeLabel;
    UILabel *_createTimeLabel;
    UILabel *_contentLabel;
    UILabel *_bodyLabel;
    WFCommentDigButton *_digUpButton;
    UILabel *_authorNameLabel;
    TTImageView *_avatarView;
    UIImageView *_hotTagView;
    WFComment *_comment;
}

+ (id)attributedStringForContent:(id)arg1;
+ (double)heightForComment:(id)arg1;
+ (struct CGSize)sizeForContent:(id)arg1 inWidth:(double)arg2;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(readonly, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(readonly, nonatomic) TTImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) WFComment *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(readonly, nonatomic) UILabel *createTimeLabel; // @synthesize createTimeLabel=_createTimeLabel;
- (void)dealloc;
@property(readonly, nonatomic) WFCommentDigButton *digUpButton; // @synthesize digUpButton=_digUpButton;
@property(readonly, nonatomic) UIImageView *hotTagView; // @synthesize hotTagView=_hotTagView;
@property(readonly, nonatomic) TLThumbView *imageView2; // @synthesize imageView2=_imageView2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setContent:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showActions:(id)arg1;
@property(readonly, nonatomic) UILabel *updateTimeLabel; // @synthesize updateTimeLabel=_updateTimeLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
