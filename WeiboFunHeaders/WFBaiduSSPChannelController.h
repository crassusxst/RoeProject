//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTCollectionViewController.h"

__attribute__((visibility("hidden")))
@interface WFBaiduSSPChannelController : TTCollectionViewController
{
    _Bool _shouldReloadData;
}

- (void)adjustViewColors;
- (id)channelModel;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)createModel;
- (void)dealloc;
- (id)imageForEmpty;
- (id)init;
- (void)refreshLatest;
- (_Bool)reloadButtonForEmpty;
- (void)reloadViews;
- (void)reloadViews:(id)arg1;
- (_Bool)shouldReload;
- (id)subtitleForEmpty;
- (id)titleForEmpty;
- (id)titleForLoading:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

@end

