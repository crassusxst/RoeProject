//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SMSSDKUIBaseViewController.h"

#import "UITextViewDelegate.h"

@class NSString, NSTimer, UIButton, UILabel, UITextField, UITextView, UIView;

__attribute__((visibility("hidden")))
@interface SMSSDKUICommitCodeViewController : SMSSDKUIBaseViewController <UITextViewDelegate>
{
    NSTimer *_timer;
    long long _i;
    _Bool _hasResend;
    unsigned long long _methodType;
    NSString *_phone;
    NSString *_zone;
    UILabel *_phoneNumber;
    UIView *_codeView;
    UIView *_phoneNumberView;
    UITextField *_codeTextField;
    UILabel *_timeAlert;
    UIButton *_resentCode;
    UIButton *_commitBtn;
    UIView *_retryView;
    UILabel *_retryLabel;
    UIButton *_retryBtn;
    UITextView *_otherChoiceLabel;
    UIButton *_otherChoiceButton;
    unsigned long long _codeBusiness;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long codeBusiness; // @synthesize codeBusiness=_codeBusiness;
@property(retain, nonatomic) UITextField *codeTextField; // @synthesize codeTextField=_codeTextField;
@property(retain, nonatomic) UIView *codeView; // @synthesize codeView=_codeView;
@property(retain, nonatomic) UIButton *commitBtn; // @synthesize commitBtn=_commitBtn;
- (void)configUI;
- (void)dismisss:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1 zone:(id)arg2 methodType:(unsigned long long)arg3;
- (id)initWithPhoneNumber:(id)arg1 zone:(id)arg2 methodType:(unsigned long long)arg3 codeBusiness:(unsigned long long)arg4;
@property(nonatomic) unsigned long long methodType; // @synthesize methodType=_methodType;
@property(retain, nonatomic) UIButton *otherChoiceButton; // @synthesize otherChoiceButton=_otherChoiceButton;
@property(retain, nonatomic) UITextView *otherChoiceLabel; // @synthesize otherChoiceLabel=_otherChoiceLabel;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) UILabel *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) UIView *phoneNumberView; // @synthesize phoneNumberView=_phoneNumberView;
@property(retain, nonatomic) UIButton *resentCode; // @synthesize resentCode=_resentCode;
@property(retain, nonatomic) UIButton *retryBtn; // @synthesize retryBtn=_retryBtn;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
- (void)retrySend:(id)arg1;
@property(retain, nonatomic) UIView *retryView; // @synthesize retryView=_retryView;
- (void)sendTextCode:(id)arg1;
- (void)sendVoiceCode:(id)arg1;
@property(retain, nonatomic) UILabel *timeAlert; // @synthesize timeAlert=_timeAlert;
@property(copy, nonatomic) NSString *zone; // @synthesize zone=_zone;
- (void)showCheckSucess;
- (void)startCount;
- (void)submit:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)tryOtherChoice:(id)arg1;
- (void)viewDidLoad;
- (double)viewWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

