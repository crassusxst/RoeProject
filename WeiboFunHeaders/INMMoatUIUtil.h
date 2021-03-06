//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface INMMoatUIUtil : NSObject
{
}

+ (_Bool)containsWebView:(id)arg1;
+ (id)digForUIWebView:(id)arg1 allowMultiple:(_Bool)arg2;
+ (id)digForWKWebView:(id)arg1 allowMultiple:(_Bool)arg2;
+ (id)digForWebView:(id)arg1 webViewType:(Class)arg2 allowMultiple:(_Bool)arg3;
+ (float)getCoveredArea:(struct CGRect)arg1 withRectsToCheck:(id)arg2;
+ (id)getGroupViewState:(id)arg1;
+ (id)getLayerChain:(id)arg1;
+ (id)getLayerVisibility:(id)arg1 atPoint:(struct CGPoint)arg2 ofSuperLayer:(id)arg3;
+ (struct CGRect)getRectInWindow:(id)arg1;
+ (struct CGRect)getRectInWindow:(id)arg1 clipToWindow:(_Bool)arg2;
+ (struct CGRect)getRectOnScreen:(struct CGRect)arg1 withLayerChain:(id)arg2;
+ (id)getSublayers:(id)arg1;
+ (id)getUiHierarchy:(id)arg1;
+ (id)getViewableState:(id)arg1;
+ (float)getVisibleArea:(id)arg1 withLayerChain:(id)arg2 withHitLayers:(id)arg3;
+ (void)insertIntoArray:(id)arg1 fromArray:(id)arg2 withStartIndex:(int)arg3 withMaxMergedSize:(int)arg4;
+ (_Bool)isInvalidRect:(struct CGRect)arg1;
+ (_Bool)isLayerDescendant:(id)arg1 ofLayer:(id)arg2;
+ (void)respondToAppFocus:(id)arg1;
+ (void)setFocusListener;

@end

