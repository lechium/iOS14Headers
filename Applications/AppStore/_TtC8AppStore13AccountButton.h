//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore12HeaderButton.h"

@class MISSING_TYPE, NSString;

@interface _TtC8AppStore13AccountButton : _TtC8AppStore12HeaderButton
{
    MISSING_TYPE *shouldShowBorder;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 2839826420 = 0xa9444ff4
    MISSING_TYPE *configureInitialDefaultProfilePictureWorkItem;	// 0 = 0x0
    MISSING_TYPE *firstLoadDate;	// 0 = 0x0
    MISSING_TYPE *cachedIntrinsicContentSize;	// 0 = 0x0
    MISSING_TYPE *badge;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000010022b168
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010022c9b0
@property(nonatomic, readonly) NSString *accessibilityBadgeCount;
- (void)automaticUpdatesEnabledDidChange:(id)arg1;	// IMP=0x000000010022c7f4
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x000000010022c784
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010022c564
- (void)updateStoreDidChange;	// IMP=0x000000010022b95c
- (void)profilePictureStoreDidChange;	// IMP=0x000000010022b92c
- (void)goToAccount;	// IMP=0x000000010022b900
@property(nonatomic, readonly) double lastBaselineFromBottom;
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x000000010022b624
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010022b60c
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;	// IMP=0x000000010022b4a0
- (void)layoutSubviews;	// IMP=0x000000010022b474
@property(nonatomic, readonly) long long buttonType;
- (void)dealloc;	// IMP=0x000000010022b0cc

@end

