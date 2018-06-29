//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIWebViewDelegate.h"

@class NSDictionary, NSString, UIActivityIndicatorView, UIButton, UIWebView;

@interface RennAuthorizeView : UIView <UIWebViewDelegate>
{
    UIWebView *_webView;
    UIButton *_closeButton;
    UIView *_modalBackgroundView;
    UIActivityIndicatorView *_indicatorView;
    long long _previousOrientation;
    id <RennLoginDelegate> _delegate;
    NSString *_appRedirectURI;
    NSDictionary *_authParams;
    NSString *_rennWebAuthURL;
}

@property(nonatomic) id <RennLoginDelegate> _delegate; // @synthesize _delegate;
- (void)_hide;
- (void)addObservers;
- (void)addRoundedRectToPath:(struct CGContext *)arg1 rect:(struct CGRect)arg2 radius:(float)arg3;
- (void)bounce1AnimationStopped;
- (void)bounce2AnimationStopped;
- (void)cancel;
- (void)dealloc;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1 fill:(const double *)arg2 radius:(double)arg3;
- (void)hide;
- (void)hideIndicator;
- (id)init;
- (id)initWithAuthParams:(id)arg1 delegate:(id)arg2 webAuthUrl:(id)arg3;
- (void)load;
- (void)removeObservers;
- (_Bool)shouldRotateToOrientation:(long long)arg1;
- (void)show;
- (void)showIndicator;
- (void)showWebView;
- (void)sizeToFitOrientation:(_Bool)arg1;
- (void)strokeLines:(struct CGRect)arg1 stroke:(const double *)arg2;
- (struct CGAffineTransform)transformForOrientation;
- (void)updateWebOrientation;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

