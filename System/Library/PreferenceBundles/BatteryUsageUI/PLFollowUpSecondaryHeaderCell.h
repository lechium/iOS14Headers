//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSArray, UILabel;

@interface PLFollowUpSecondaryHeaderCell : PSTableCell
{
    UILabel *_subHeader;	// 120 = 0x78
    NSArray *_constraints;	// 128 = 0x80
}

+ (long long)cellStyle;	// IMP=0x0000000000022478
- (void).cxx_destruct;	// IMP=0x0000000000022980
- (void)updateConstraints;	// IMP=0x0000000000022830
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x0000000000022774
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000002261c
- (id)subHeaderLabel;	// IMP=0x0000000000022480

@end
