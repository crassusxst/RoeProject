//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTScrollView, UITouch;

@protocol TTScrollViewDelegate <NSObject>
- (void)scrollView:(TTScrollView *)arg1 didMoveToPageAtIndex:(long long)arg2;

@optional
- (_Bool)scrollView:(TTScrollView *)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (void)scrollView:(TTScrollView *)arg1 tapped:(UITouch *)arg2;
- (void)scrollView:(TTScrollView *)arg1 touchedDown:(UITouch *)arg2;
- (void)scrollView:(TTScrollView *)arg1 touchedUpInside:(UITouch *)arg2;
- (void)scrollViewDidBeginHolding:(TTScrollView *)arg1;
- (void)scrollViewDidBeginZooming:(TTScrollView *)arg1;
- (void)scrollViewDidEndDecelerating:(TTScrollView *)arg1;
- (void)scrollViewDidEndDragging:(TTScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndHolding:(TTScrollView *)arg1;
- (void)scrollViewDidEndZooming:(TTScrollView *)arg1;
- (void)scrollViewDidRotate:(TTScrollView *)arg1;
- (_Bool)scrollViewShouldZoom:(TTScrollView *)arg1;
- (void)scrollViewWillBeginDecelerating:(TTScrollView *)arg1;
- (void)scrollViewWillBeginDragging:(TTScrollView *)arg1;
- (void)scrollViewWillRotate:(TTScrollView *)arg1 toOrientation:(long long)arg2;
@end

