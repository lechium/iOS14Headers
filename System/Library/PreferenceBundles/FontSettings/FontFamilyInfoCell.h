//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface FontFamilyInfoCell : PSTableCell
{
    NSString *_localizedFamilyName;	// 120 = 0x78
    NSString *_providerName;	// 128 = 0x80
    UIImage *_providerIcon;	// 136 = 0x88
    NSString *_copyright;	// 144 = 0x90
    UILabel *_familyNameLabel;	// 152 = 0x98
    UILabel *_providerNameLabel;	// 160 = 0xa0
    UIImageView *_providerIconImageView;	// 168 = 0xa8
    UILabel *_copyrightLabel;	// 176 = 0xb0
    UILabel *_fileSizeLabel;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000005ed4
@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(retain, nonatomic) UILabel *copyrightLabel; // @synthesize copyrightLabel=_copyrightLabel;
@property(retain, nonatomic) UIImageView *providerIconImageView; // @synthesize providerIconImageView=_providerIconImageView;
@property(retain, nonatomic) UILabel *providerNameLabel; // @synthesize providerNameLabel=_providerNameLabel;
@property(retain, nonatomic) UILabel *familyNameLabel; // @synthesize familyNameLabel=_familyNameLabel;
- (void)setFileSize:(unsigned long long)arg1;	// IMP=0x0000000000005600
- (void)setCopyright:(id)arg1;	// IMP=0x0000000000005284
- (void)setProviderIcon:(id)arg1;	// IMP=0x000000000000520c
- (void)setProviderName:(id)arg1;	// IMP=0x000000000000515c
- (void)setLocalizedFamilyName:(id)arg1;	// IMP=0x00000000000050ac
- (void)layoutSubviews;	// IMP=0x0000000000004c78
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x0000000000004c00

@end
