//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIStackView;

@interface UsageDetailHeader : UIView
{
    UILabel *_nameLabel;	// 8 = 0x8
    UILabel *_versionLabel;	// 16 = 0x10
    UILabel *_sizeLabel;	// 24 = 0x18
    UIImageView *_appIcon;	// 32 = 0x20
    UIStackView *_horizontalStack;	// 40 = 0x28
    UIStackView *_verticalStack;	// 48 = 0x30
    NSLayoutConstraint *_leadingMargin;	// 56 = 0x38
}

+ (double)usageDetailHeaderHeight;	// IMP=0x00000000000356c4
- (void).cxx_destruct;	// IMP=0x0000000000036358
- (void)layoutSubviews;	// IMP=0x0000000000036270
- (void)setLabelTextAndIconWithSpecifier:(id)arg1;	// IMP=0x0000000000035e50
- (void)setName:(id)arg1;	// IMP=0x0000000000035e38
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000356f0

@end

