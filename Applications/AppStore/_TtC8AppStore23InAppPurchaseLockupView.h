//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, _TtC8AppStore11OfferButton, _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore23InAppPurchaseLockupView : UIView
{
    MISSING_TYPE *iconView;	// 8 = 0x8
    MISSING_TYPE *theme;	// 16 = 0x10
    MISSING_TYPE *isHeightConstrained;	// 17 = 0x11
    MISSING_TYPE *titleLabel;	// 24 = 0x18
    MISSING_TYPE *subtitleLabel;	// 32 = 0x20
    MISSING_TYPE *descriptionLabel;	// 40 = 0x28
    MISSING_TYPE *offerButton;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001001ef078
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001ef01c
@property(nonatomic, readonly) _TtC8AppStore11OfferButton *accessibilityOfferButton;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityDescriptionLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityTitleLabel;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001001eedf4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001001eed58
- (void)layoutSubviews;	// IMP=0x00000001001eed2c
- (void)tintColorDidChange;	// IMP=0x00000001001ee9ac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001ee7b4

@end

