//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIDatePicker, UITableView;

@interface MTAAlarmEditView : UIView
{
    UITableView *_settingsTable;	// 8 = 0x8
    UIDatePicker *_timePicker;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004d1f8
@property(readonly, nonatomic) UIDatePicker *timePicker; // @synthesize timePicker=_timePicker;
@property(readonly, nonatomic) UITableView *settingsTable; // @synthesize settingsTable=_settingsTable;
- (void)layoutSubviews;	// IMP=0x000000010004d0ac
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010004cef4

@end
