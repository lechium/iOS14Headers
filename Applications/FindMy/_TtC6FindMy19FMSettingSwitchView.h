//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSString;

@interface _TtC6FindMy19FMSettingSwitchView : UIView
{
    MISSING_TYPE *titleLabel;	// 8 = 0x8
    MISSING_TYPE *settingSwitch;	// 16 = 0x10
    MISSING_TYPE *separator;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 32 = 0x20
    MISSING_TYPE *title;	// 48 = 0x30
    MISSING_TYPE *isOn;	// 64 = 0x40
    MISSING_TYPE *separated;	// 65 = 0x41
}

- (void).cxx_destruct;	// IMP=0x000000010007f948
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010007f8ec
- (void)switchChanged;	// IMP=0x000000010007f8c0
- (_Bool)accessibilityActivate;	// IMP=0x000000010007ee88
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic, copy) NSString *accessibilityValue;
@property(nonatomic) _Bool isAccessibilityElement;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010007ec18
- (id)init;	// IMP=0x000000010007ebf8
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000010007ea1c

@end
