//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UILabel;
@protocol PLBatteryUITapDelegate;

@interface PLBatteryUIGraphLastChargeCell : PSTableCell
{
    _Bool _constraintsAdded;	// 120 = 0x78
    id <PLBatteryUITapDelegate> _delegate;	// 128 = 0x80
    UILabel *_lastChargeTitleLabel;	// 136 = 0x88
    UILabel *_percentLabel;	// 144 = 0x90
    UILabel *_timeStrLabel;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000000f518
@property _Bool constraintsAdded; // @synthesize constraintsAdded=_constraintsAdded;
@property(retain) UILabel *timeStrLabel; // @synthesize timeStrLabel=_timeStrLabel;
@property(retain) UILabel *percentLabel; // @synthesize percentLabel=_percentLabel;
@property(retain) UILabel *lastChargeTitleLabel; // @synthesize lastChargeTitleLabel=_lastChargeTitleLabel;
@property(nonatomic) __weak id <PLBatteryUITapDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleTapGesture:(id)arg1;	// IMP=0x000000000000f3b8
- (id)getLocalizedTimeStringFromDate:(id)arg1;	// IMP=0x000000000000f100
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x000000000000edb8
- (void)updateConstraints;	// IMP=0x000000000000e940
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000000e500
- (id)getLabelWithTitle:(id)arg1 withRGB:(id)arg2 withFont:(id)arg3 andTextAlignment:(long long)arg4;	// IMP=0x000000000000e384

@end
