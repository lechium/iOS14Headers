//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface PLBatteryUIGraphTextCell : PSTableCell
{
    _Bool _constraintsAdded;	// 120 = 0x78
    UILabel *_batteryUITextLabel;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000017d98
@property _Bool constraintsAdded; // @synthesize constraintsAdded=_constraintsAdded;
@property(retain) UILabel *batteryUITextLabel; // @synthesize batteryUITextLabel=_batteryUITextLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x0000000000017c70
- (void)updateConstraints;	// IMP=0x0000000000017acc
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x00000000000176a4

@end

