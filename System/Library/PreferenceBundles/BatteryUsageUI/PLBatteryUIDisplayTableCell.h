//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSString, UILabel;
@protocol PLBatteryUIDisplayTableCellDelegate;

@interface PLBatteryUIDisplayTableCell : PSTableCell
{
    int _type;	// 120 = 0x78
    UILabel *_prevLabel;	// 128 = 0x80
    _Bool _interactiveButton;	// 136 = 0x88
    _Bool _ttrButton;	// 137 = 0x89
    NSString *_IssueDomain;	// 144 = 0x90
    NSString *_IssueType;	// 152 = 0x98
    NSString *_IssueProcess;	// 160 = 0xa0
    NSString *_IssueAttachments;	// 168 = 0xa8
    id <PLBatteryUIDisplayTableCellDelegate> _delegate;	// 176 = 0xb0
}

+ (id)reuseIdentifierForClassAndType:(long long)arg1;	// IMP=0x0000000000005e18
+ (long long)cellStyle;	// IMP=0x0000000000005e10
- (void).cxx_destruct;	// IMP=0x00000000000072ec
@property(nonatomic) __weak id <PLBatteryUIDisplayTableCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ttrPressed;	// IMP=0x0000000000006f78
- (id)urlEncodedString:(id)arg1;	// IMP=0x0000000000006cbc
- (void)refresh:(id)arg1;	// IMP=0x0000000000006bf8
- (void)layoutSubviews;	// IMP=0x00000000000069c0
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x0000000000005e2c
- (_Bool)canReload;	// IMP=0x0000000000005e24

@end

