//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFUITableController.h"

#import "MBProgressHUDDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WFSwitchCellDelegate.h"

@class MBProgressHUD, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface WFNotificationSettingController : WFUITableController <WFSwitchCellDelegate, UIAlertViewDelegate, MBProgressHUDDelegate>
{
    NSArray *_sectionTitles;
    NSArray *_titles;
    _Bool _commentReplyPushEnabled;
    _Bool _commentReplyBubbleEnabled;
    _Bool _isConfiguringPushSettings;
    long long _pushAuthStatus;
    MBProgressHUD *_hud;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkPushAuthStatus;
- (void)dealloc;
- (void)hudWasHidden:(id)arg1;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshCmtReplyBubbleCell:(id)arg1;
- (void)refreshCmtReplyPushCell:(id)arg1;
- (void)refreshDailyHotCell:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableViewCell:(id)arg1 switchValueChanged:(id)arg2;
- (void)viewDidLoad;
- (void)willEnterForeground:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
