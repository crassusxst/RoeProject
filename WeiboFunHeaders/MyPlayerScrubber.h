//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class MyPlayerProgressView, MyPlayerSlider;

__attribute__((visibility("hidden")))
@interface MyPlayerScrubber : UIControl
{
    MyPlayerSlider *slider;
    MyPlayerProgressView *progressView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) float loadedProgress;
@property(nonatomic) float maximumValue;
@property(nonatomic) float minimumValue;
@property(nonatomic) float value;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)sliderTouchedDown:(id)arg1;
- (void)sliderTouchedUpInside:(id)arg1;
- (void)sliderTouchedUpOutside:(id)arg1;
- (void)sliderValueChanged:(id)arg1;

@end

