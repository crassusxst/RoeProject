//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFTTTableController.h"

__attribute__((visibility("hidden")))
@interface WFPrivateMsgController : WFTTTableController
{
}

- (void)adjustHeaderFooter;
- (void)createModel;
- (void)dealloc;
- (id)dialogModel;
- (void)didLoadModel:(_Bool)arg1;
- (void)didShowModel:(_Bool)arg1;
- (id)imageForEmpty;
- (id)init;
- (void)model:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)modelDidCancelLoad:(id)arg1;
- (void)modelDidFinishLoad:(id)arg1;
- (void)modelDidStartLoad:(id)arg1;
- (void)refreshLatest;
- (_Bool)reloadButtonForEmpty;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldReload;
- (id)subtitleForEmpty;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (struct UIEdgeInsets)tableViewInsets;
- (id)titleForEmpty;
- (id)titleForLoading:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end
