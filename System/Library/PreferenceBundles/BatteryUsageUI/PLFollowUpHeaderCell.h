//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSArray, UILabel;

@interface PLFollowUpHeaderCell : PSTableCell
{
    UILabel *_followTitle;	// 120 = 0x78
    UILabel *_followSubtitle;	// 128 = 0x80
    NSArray *_constraints;	// 136 = 0x88
}

+ (long long)cellStyle;	// IMP=0x0000000000021ccc
- (void).cxx_destruct;	// IMP=0x0000000000022424
- (void)updateConstraints;	// IMP=0x0000000000022260
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x000000000002213c
- (void)layoutSubviews;	// IMP=0x00000000000220ec
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x0000000000021fb8

@end

