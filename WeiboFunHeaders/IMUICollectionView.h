//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "IMUIInflator.h"

@class IMUIProperties, NSString, UITapGestureRecognizer;

@interface IMUICollectionView : UICollectionView <IMUIInflator>
{
    IMUIProperties *_properties;
    UITapGestureRecognizer *_gestureRecognizer;
}

- (void).cxx_destruct;
- (void)clearProperties;
@property(retain, nonatomic) UITapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 withProperties:(id)arg3;
- (id)initWithProperties:(id)arg1;
@property(retain, nonatomic) IMUIProperties *properties; // @synthesize properties=_properties;
- (void)setProperties:(id)arg1 frame:(struct CGRect)arg2 collectionViewLayout:(id)arg3;
- (void)tapGesture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

