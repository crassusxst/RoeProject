//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIActionSheetDelegate.h"

@class NSString, UIActionSheet, UIBarButtonItem, UIToolbar, UIWebView;

@interface IMEmbeddedBrowser : UIViewController <UIActionSheetDelegate>
{
    UIBarButtonItem *safari;
    UIBarButtonItem *back;
    UIBarButtonItem *forward;
    UIBarButtonItem *reload;
    UIBarButtonItem *close;
    UIBarButtonItem *bar;
    UIToolbar *_bar;
    UIActionSheet *_actionSheet;
    UIWebView *_webView;
    id <IMEmbeddedBrowserDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) UIBarButtonItem *back; // @synthesize back;
- (id)backButton;
@property(retain, nonatomic) UIToolbar *bar; // @synthesize bar=_bar;
- (void)checkButtonAction;
@property(retain, nonatomic) UIBarButtonItem *close; // @synthesize close;
- (id)closeButton;
- (void)closeEmbeddedBrowser;
- (void)dealloc;
@property(nonatomic) __weak id <IMEmbeddedBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (id)flexiSpaceButton;
@property(retain, nonatomic) UIBarButtonItem *forward; // @synthesize forward;
- (id)forwardButton;
- (void)goBack;
- (void)goFwd;
- (_Bool)handleLinkClicked:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)loadRequest:(id)arg1;
- (struct CGImage *)newBackButtonIcon;
- (struct CGImage *)newCloseButtonIcon;
- (struct CGContext *)newContext;
- (struct CGImage *)newForwardButtonIcon;
- (void)openSafari;
- (long long)preferredStatusBarStyle;
- (void)refresh;
@property(retain, nonatomic) UIBarButtonItem *reload; // @synthesize reload;
- (id)reloadButton;
@property(retain, nonatomic) UIBarButtonItem *safari; // @synthesize safari;
- (id)safariButton;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)webViewDidFinishLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
