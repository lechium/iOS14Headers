//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UIColor;

@interface ASSettingsCurrentTimeCell : PSTableCell
{
    _Bool _cellFocusColor;	// 120 = 0x78
    UIColor *_oldTextColor;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000000a934
@property(nonatomic) _Bool cellFocusColor; // @synthesize cellFocusColor=_cellFocusColor;
@property(retain, nonatomic) UIColor *oldTextColor; // @synthesize oldTextColor=_oldTextColor;
- (void)layoutSubviews;	// IMP=0x000000000000a634
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000000a55c

@end
