//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class JYSlideView, NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface JYSlideSegmentController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate>
{
    NSArray *_viewControllers;
    double _itemWidth;
    UIColor *_separatorColor;
    long long _startIndex;
    long long _selectedIndex;
    double _segmentBarHeight;
    UIColor *_indicatorColor;
    double _indicatorHeight;
    UIColor *_segmentBarColor;
    double _separatorHeight;
    UIColor *_segmentColor;
    UIColor *_selectedSegmentColor;
    id <JYSlideSegmentDelegate> _delegate;
    id <JYSlideSegmentDataSource> _dataSource;
    UICollectionView *_segmentBar;
    JYSlideView *_slideView;
    long long _previousIndex;
    double _lastDestination;
    UIView *_indicator;
    UIView *_indicatorBgView;
    UIView *_separator;
    UICollectionViewFlowLayout *_segmentBarLayout;
    struct UIEdgeInsets _indicatorInsets;
    struct UIEdgeInsets _segmentBarInsets;
    struct CGRect _currentIndicatorFrame;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)configureViewControllerFrame:(id)arg1;
@property(nonatomic) struct CGRect currentIndicatorFrame; // @synthesize currentIndicatorFrame=_currentIndicatorFrame;
@property(nonatomic) id <JYSlideSegmentDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
@property(nonatomic) id <JYSlideSegmentDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)frameForSegmentItemAtIndex:(long long)arg1;
@property(retain, nonatomic) UIView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIView *indicatorBgView; // @synthesize indicatorBgView=_indicatorBgView;
@property(retain, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(nonatomic) double indicatorHeight; // @synthesize indicatorHeight=_indicatorHeight;
@property(nonatomic) struct UIEdgeInsets indicatorInsets; // @synthesize indicatorInsets=_indicatorInsets;
- (id)init;
- (id)initWithViewControllers:(id)arg1;
- (id)initWithViewControllers:(id)arg1 startIndex:(long long)arg2;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) double lastDestination; // @synthesize lastDestination=_lastDestination;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(nonatomic) long long previousIndex; // @synthesize previousIndex=_previousIndex;
- (void)removePreviousViewController;
- (void)scrollToItemWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToViewWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) UICollectionView *segmentBar; // @synthesize segmentBar=_segmentBar;
@property(retain, nonatomic) UIColor *segmentBarColor; // @synthesize segmentBarColor=_segmentBarColor;
@property(nonatomic) double segmentBarHeight; // @synthesize segmentBarHeight=_segmentBarHeight;
@property(nonatomic) struct UIEdgeInsets segmentBarInsets; // @synthesize segmentBarInsets=_segmentBarInsets;
@property(retain, nonatomic) UICollectionViewFlowLayout *segmentBarLayout; // @synthesize segmentBarLayout=_segmentBarLayout;
- (void)segmentBarScrollToIndex:(long long)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIColor *segmentColor; // @synthesize segmentColor=_segmentColor;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIColor *selectedSegmentColor; // @synthesize selectedSegmentColor=_selectedSegmentColor;
@property(readonly, nonatomic) __weak UIViewController *selectedViewController;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) double separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(retain, nonatomic) JYSlideView *slideView; // @synthesize slideView=_slideView;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void)setupSubviews;
- (void)showNewDotInSegmentBar:(_Bool)arg1 withIndex:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (double)viewWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

