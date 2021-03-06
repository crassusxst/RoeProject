//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UITextField;

__attribute__((visibility("hidden")))
@interface WFFloatingSearchBar : UIView <UITextFieldDelegate>
{
    UITextField *_tfKeyword;
    UIButton *_doneButton;
    UIView *_parentView;
    UIView *_topBackView;
    UIButton *_backgroundButton;
    NSString *_keyword;
    _Bool _isTyping;
    _Bool _hasSearched;
    id <WFFloatingSearchBarDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)backgroundButton;
- (void)cancelTyping:(id)arg1;
- (void)close:(_Bool)arg1;
- (void)dealloc;
@property(nonatomic) id <WFFloatingSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)done:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (id)keyword;
- (void)removeBackgroundButton;
- (void)show;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

