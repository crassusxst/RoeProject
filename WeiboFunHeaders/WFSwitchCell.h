//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UISwitch;

__attribute__((visibility("hidden")))
@interface WFSwitchCell : UITableViewCell
{
    UISwitch *_switchControl;
    id <WFSwitchCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <WFSwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) UISwitch *switchControl; // @synthesize switchControl=_switchControl;
- (void)valueChanged:(id)arg1;

@end

