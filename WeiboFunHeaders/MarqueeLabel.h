//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "CAAnimationDelegate.h"

@class NSArray, NSString, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface MarqueeLabel : UILabel <CAAnimationDelegate>
{
    _Bool _labelize;
    _Bool _holdScrolling;
    _Bool _tapToScroll;
    _Bool _isPaused;
    unsigned long long _animationCurve;
    unsigned long long _marqueeType;
    double _scrollDuration;
    double _rate;
    double _leadingBuffer;
    double _trailingBuffer;
    double _fadeLength;
    double _animationDelay;
    double _animationDuration;
    UILabel *_subLabel;
    UITapGestureRecognizer *_tapRecognizer;
    double _awayOffset;
    CDUnknownBlockType _scrollCompletionBlock;
    NSArray *_gradientColors;
    struct CGRect _homeLabelFrame;
}

+ (void)controllerLabelsShouldAnimate:(id)arg1;
+ (void)controllerLabelsShouldLabelize:(id)arg1;
+ (void)controllerViewAppearing:(id)arg1;
+ (void)controllerViewDidAppear:(id)arg1;
+ (void)controllerViewWillAppear:(id)arg1;
+ (Class)layerClass;
+ (void)notifyController:(id)arg1 withMessage:(id)arg2;
+ (void)restartLabelsOfController:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long animationCurve; // @synthesize animationCurve=_animationCurve;
@property(nonatomic) double animationDelay; // @synthesize animationDelay=_animationDelay;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
- (void)applyGradientMaskForFadeLength:(double)arg1 animated:(_Bool)arg2;
- (id)attributedText;
- (void)awakeFromNib;
@property(readonly, nonatomic) _Bool awayFromHome;
@property(nonatomic) double awayOffset; // @synthesize awayOffset=_awayOffset;
- (id)backgroundColor;
- (long long)baselineAdjustment;
- (void)beginScroll;
- (void)beginScrollWithDelay:(_Bool)arg1;
@property(nonatomic) double continuousMarqueeExtraBuffer;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
@property(nonatomic) double fadeLength; // @synthesize fadeLength=_fadeLength;
- (id)font;
- (void)forwardPropertiesToSubLabel;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
- (id)highlightedTextColor;
@property(nonatomic) _Bool holdScrolling; // @synthesize holdScrolling=_holdScrolling;
@property(nonatomic) struct CGRect homeLabelFrame; // @synthesize homeLabelFrame=_homeLabelFrame;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 duration:(double)arg2 andFadeLength:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 rate:(double)arg2 andFadeLength:(double)arg3;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isEnabled;
- (_Bool)isHighlighted;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
- (id)keyFrameAnimationForGradientFadeLength:(double)arg1 interval:(double)arg2 delay:(double)arg3;
- (id)keyFrameAnimationForProperty:(id)arg1 values:(id)arg2 interval:(double)arg3 delay:(double)arg4;
- (_Bool)labelReadyForScroll;
- (void)labelReturnedToHome:(_Bool)arg1;
@property(readonly, nonatomic) _Bool labelShouldScroll;
- (void)labelWasTapped:(id)arg1;
- (void)labelWillBeginScroll;
@property(nonatomic) _Bool labelize; // @synthesize labelize=_labelize;
- (void)labelsShouldAnimate:(id)arg1;
- (void)labelsShouldLabelize:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) double leadingBuffer; // @synthesize leadingBuffer=_leadingBuffer;
@property(nonatomic) unsigned long long marqueeType; // @synthesize marqueeType=_marqueeType;
- (id)maskLayer;
- (void)minimizeLabelFrameWithMaximumSize:(struct CGSize)arg1 adjustHeight:(_Bool)arg2;
- (void)pauseLabel;
- (void)prepareForInterfaceBuilder;
@property(nonatomic) double rate; // @synthesize rate=_rate;
- (void)removeGradientMask;
- (id)repliLayer;
- (void)resetLabel;
- (void)restartLabel;
- (void)returnLabelToOriginImmediately;
- (void)scrollAwayWithInterval:(double)arg1;
- (void)scrollAwayWithInterval:(double)arg1 delay:(_Bool)arg2;
- (void)scrollAwayWithInterval:(double)arg1 delayAmount:(double)arg2;
@property(copy, nonatomic) CDUnknownBlockType scrollCompletionBlock; // @synthesize scrollCompletionBlock=_scrollCompletionBlock;
- (void)scrollContinuousWithInterval:(double)arg1 after:(double)arg2;
- (void)scrollContinuousWithInterval:(double)arg1 after:(double)arg2 labelAnimation:(id)arg3 gradientAnimation:(id)arg4;
@property(nonatomic) double scrollDuration; // @synthesize scrollDuration=_scrollDuration;
- (void)setAdjustsFontSizeToFitWidth:(_Bool)arg1;
- (void)setAdjustsLetterSpacingToFitWidth:(_Bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaselineAdjustment:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setMinimumFontSize:(double)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize)arg1;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(nonatomic) __weak UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(nonatomic) _Bool tapToScroll; // @synthesize tapToScroll=_tapToScroll;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTintColor:(id)arg1;
@property(nonatomic) double trailingBuffer; // @synthesize trailingBuffer=_trailingBuffer;
- (void)setupLabel;
- (id)shadowColor;
- (struct CGSize)shadowOffset;
- (void)shutdownLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)subLabelSize;
- (id)text;
- (id)textColor;
- (id)timingFunctionForAnimationOptions:(unsigned long long)arg1;
- (id)tintColor;
- (void)tintColorDidChange;
- (void)triggerScrollStart;
- (void)unpauseLabel;
- (void)updateSublabel;
- (void)updateSublabelAndBeginScroll:(_Bool)arg1;
- (void)viewControllerShouldRestart:(id)arg1;
- (id)viewForBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)willMoveToWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
