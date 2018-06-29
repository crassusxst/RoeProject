//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SMSSDKUIBaseViewController.h"

#import "UIAlertViewDelegate.h"

@class NSString, UIButton, UILabel, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface SMSSDKUIGetCodeViewController : SMSSDKUIBaseViewController <UIAlertViewDelegate>
{
    unsigned long long _methodType;
    UIView *_bgView;
    UILabel *_topAlertLabel;
    UIView *_zoneSelectBar;
    UILabel *_countryLabel;
    UIView *_phoneEditView;
    UILabel *_zone;
    UITextField *_phoneTextField;
    UIButton *_nextStep;
    UILabel *_unitedStateLabel;
    unsigned long long _codeBusiness;
    NSString *_tempCode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) unsigned long long codeBusiness; // @synthesize codeBusiness=_codeBusiness;
- (void)configUI;
@property(retain, nonatomic) UILabel *countryLabel; // @synthesize countryLabel=_countryLabel;
- (void)dismiss:(id)arg1;
- (id)initWithMethod:(unsigned long long)arg1;
- (id)initWithMethod:(unsigned long long)arg1 codeBusiness:(unsigned long long)arg2;
- (id)initWithMethod:(unsigned long long)arg1 template:(id)arg2;
@property(nonatomic) unsigned long long methodType; // @synthesize methodType=_methodType;
@property(retain, nonatomic) UIButton *nextStep; // @synthesize nextStep=_nextStep;
- (void)nextStep:(id)arg1;
@property(retain, nonatomic) UIView *phoneEditView; // @synthesize phoneEditView=_phoneEditView;
@property(retain, nonatomic) UITextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
- (void)selectZone:(id)arg1;
@property(retain, nonatomic) NSString *tempCode; // @synthesize tempCode=_tempCode;
@property(retain, nonatomic) UILabel *topAlertLabel; // @synthesize topAlertLabel=_topAlertLabel;
@property(retain, nonatomic) UILabel *unitedStateLabel; // @synthesize unitedStateLabel=_unitedStateLabel;
@property(retain, nonatomic) UILabel *zone; // @synthesize zone=_zone;
@property(retain, nonatomic) UIView *zoneSelectBar; // @synthesize zoneSelectBar=_zoneSelectBar;
- (void)viewDidLoad;
- (double)viewWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
