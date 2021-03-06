//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SMSSDKUIAvatarFLowLayout : UICollectionViewLayout
{
    id <SMSSDKUIAvatarFLowLayoutDelegate> _delegate;
    NSMutableArray *_attrsArray;
    NSMutableArray *_columnHeights;
    double _contentHeight;
}

+ (float)CellWidthWithViewWidth:(float)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *attrsArray; // @synthesize attrsArray=_attrsArray;
- (struct CGSize)collectionViewContentSize;
- (long long)columnCount;
@property(retain, nonatomic) NSMutableArray *columnHeights; // @synthesize columnHeights=_columnHeights;
- (double)columnMargin;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) __weak id <SMSSDKUIAvatarFLowLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (struct UIEdgeInsets)edgeInsets;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (double)rowMargin;

@end

