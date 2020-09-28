//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimerUI/MTUIChevronTableViewCell.h>

@class MTABedtimeTimeView;

@interface MTAAlarmIntervalCell : MTUIChevronTableViewCell
{
    MTABedtimeTimeView *_sleepTimeView;	// 8 = 0x8
    MTABedtimeTimeView *_wakeTimeView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000338f4
@property(retain, nonatomic) MTABedtimeTimeView *wakeTimeView; // @synthesize wakeTimeView=_wakeTimeView;
@property(retain, nonatomic) MTABedtimeTimeView *sleepTimeView; // @synthesize sleepTimeView=_sleepTimeView;
- (void)updateWithAlarm:(id)arg1;	// IMP=0x0000000100033538
- (double)preferredHeight;	// IMP=0x000000010003352c
- (void)layoutSubviews;	// IMP=0x00000001000333fc
- (void)setupConstraints;	// IMP=0x0000000100032874
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010003259c

@end
