//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKStoreProductViewController.h"

@class NSNumber, UIScrollView, UIView;

@interface IMNativeSKStoreController : SKStoreProductViewController
{
    NSNumber *_origin;
    UIView *_additionalView;
    UIScrollView *_fullScrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *additionalView; // @synthesize additionalView=_additionalView;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) UIScrollView *fullScrollView; // @synthesize fullScrollView=_fullScrollView;
@property(retain, nonatomic) NSNumber *origin; // @synthesize origin=_origin;
- (void)viewDidLoad;

@end

