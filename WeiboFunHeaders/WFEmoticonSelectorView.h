//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIButton, UIPageControl, UIScrollView;

__attribute__((visibility("hidden")))
@interface WFEmoticonSelectorView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_iconsView;
    UIPageControl *_pageControl;
    UIButton *_historyTabButton;
    UIButton *_allIconsTabButton;
    UIButton *_sendButton;
    id <WFEmoticonSelectorDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)addDeleteIconAtPoint:(struct CGPoint)arg1;
@property(nonatomic) id <WFEmoticonSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteIconTapped:(id)arg1;
- (void)highlightSendButton:(_Bool)arg1;
- (unsigned long long)iconColumns;
- (void)iconTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)pageControlValueChanged:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)sendButtonTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

