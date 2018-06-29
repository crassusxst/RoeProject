//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFUITableController.h"

#import "MBProgressHUDDelegate.h"
#import "UITextViewDelegate.h"

@class MBProgressHUD, NSArray, NSString, QLTextField, UILabel, UIView, WFWeibo;

__attribute__((visibility("hidden")))
@interface WFPostReportController : WFUITableController <UITextViewDelegate, MBProgressHUDDelegate>
{
    WFWeibo *_post;
    NSArray *_reportTypeNames;
    NSArray *_reportTypes;
    UIView *_editorView;
    QLTextField *_tfContent;
    UILabel *_lblLength;
    MBProgressHUD *_hud;
    long long _selectedTypeIndex;
    _Bool _postSucceeded;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)hudWasHidden:(id)arg1;
- (id)initWithPost:(id)arg1;
- (void)notifyWithResult:(_Bool)arg1 msg:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)postReport:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

