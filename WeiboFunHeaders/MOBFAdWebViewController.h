//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSURL;

@interface MOBFAdWebViewController : UIViewController
{
    NSURL *_url;
    CDUnknownBlockType _closeHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType closeHandler; // @synthesize closeHandler=_closeHandler;
- (void)closeHandler:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)onClose:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)viewDidLoad;

@end
