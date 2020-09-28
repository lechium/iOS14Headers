//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTASleepSetupBaseViewController.h"

@class NSCalendar, NSDateComponentsFormatter, UIDatePicker, UILabel;

@interface MTASleepSetupSleepTimeViewController : MTASleepSetupBaseViewController
{
    UIDatePicker *_timePicker;	// 8 = 0x8
    UILabel *_infoLabel;	// 16 = 0x10
    NSDateComponentsFormatter *_durationFormatter;	// 24 = 0x18
    NSCalendar *_calendar;	// 32 = 0x20
}

+ (id)setupController;	// IMP=0x000000010003fa14
- (void).cxx_destruct;	// IMP=0x00000001000414a4
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSDateComponentsFormatter *durationFormatter; // @synthesize durationFormatter=_durationFormatter;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIDatePicker *timePicker; // @synthesize timePicker=_timePicker;
- (id)bedtimeDurationString:(id)arg1;	// IMP=0x0000000100041334
- (void)nextButtonAction:(id)arg1;	// IMP=0x0000000100041064
- (void)updateInfoLabelText;	// IMP=0x0000000100040cf4
- (void)timeChanged:(id)arg1;	// IMP=0x0000000100040ce8
- (void)setupInfoLabel;	// IMP=0x0000000100040ae0
- (void)setupPickerView;	// IMP=0x00000001000408a4
- (void)setupCalendar;	// IMP=0x00000001000407e8
- (void)setupDurationFormatter;	// IMP=0x0000000100040734
- (void)viewDidLoad;	// IMP=0x0000000100040678
- (void)setupConstraints;	// IMP=0x000000010003fae0

@end
