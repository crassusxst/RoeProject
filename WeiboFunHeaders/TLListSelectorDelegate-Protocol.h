//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, TLListSelectorController;

@protocol TLListSelectorDelegate <NSObject>
- (long long)numberOfSectionsInSelector:(TLListSelectorController *)arg1;
- (void)selector:(TLListSelectorController *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)selector:(TLListSelectorController *)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)selector:(TLListSelectorController *)arg1 shouldSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)selector:(TLListSelectorController *)arg1 titleForRowAtIndexPath:(NSIndexPath *)arg2;

@optional
- (void)selector:(TLListSelectorController *)arg1 didUnselectRowAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)selector:(TLListSelectorController *)arg1 titleForFooterInSection:(long long)arg2;
- (NSString *)selector:(TLListSelectorController *)arg1 titleForHeaderInSection:(long long)arg2;
@end

