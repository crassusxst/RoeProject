//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLThumbView.h"

#import "TLImageViewDelegate.h"

@class NSString, WFPhoto;

__attribute__((visibility("hidden")))
@interface TLPhotoView : TLThumbView <TLImageViewDelegate>
{
    int _photoVersion;
    WFPhoto *_photo;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)imageView:(id)arg1 willSendARequest:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadImage;
- (_Bool)loadPreview:(_Bool)arg1;
- (_Bool)loadVersion:(int)arg1 fromNetwork:(_Bool)arg2;
@property(retain, nonatomic) WFPhoto *photo; // @synthesize photo=_photo;
- (void)showEmpty:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
