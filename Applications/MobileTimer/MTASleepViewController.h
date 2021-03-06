//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "MTASleepOptionsDelegate-Protocol.h"
#import "MTAlarmDataSourceObserver-Protocol.h"
#import "MTSleepDataObserver-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITableViewDelegatePrivate-Protocol.h"

@class MTASleepObserverProxy, MTAlarmDataSource, MTAlarmManager, NSMutableArray, NSMutableDictionary, NSString, NSUserActivity;

@interface MTASleepViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate, MTAlarmDataSourceObserver, MTSleepDataObserver, MTASleepOptionsDelegate>
{
    NSMutableArray *_sections;	// 8 = 0x8
    NSMutableArray *_scheduleRows;	// 16 = 0x10
    NSMutableArray *_sleepAnalysisRows;	// 24 = 0x18
    NSMutableDictionary *_specifiers;	// 32 = 0x20
    MTAlarmManager *_alarmManager;	// 40 = 0x28
    MTAlarmDataSource *_dataSource;	// 48 = 0x30
    NSUserActivity *_userActivity;	// 56 = 0x38
    MTASleepObserverProxy *_sleepObserverProxy;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010001a474
@property(retain, nonatomic) MTASleepObserverProxy *sleepObserverProxy; // @synthesize sleepObserverProxy=_sleepObserverProxy;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(retain, nonatomic) MTAlarmDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
@property(retain, nonatomic) NSMutableDictionary *specifiers; // @synthesize specifiers=_specifiers;
@property(retain, nonatomic) NSMutableArray *sleepAnalysisRows; // @synthesize sleepAnalysisRows=_sleepAnalysisRows;
@property(retain, nonatomic) NSMutableArray *scheduleRows; // @synthesize scheduleRows=_scheduleRows;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
- (void)handleContentSizeCategoryChange:(id)arg1;	// IMP=0x000000010001a314
- (void)updateSleepAnalysisCellForSleepAlarm:(id)arg1;	// IMP=0x000000010001a210
- (id)footerScheduleStringForAlarm:(id)arg1;	// IMP=0x000000010001a108
- (void)updateFooterWithSchedule:(unsigned long long)arg1;	// IMP=0x0000000100019f58
- (void)updateBedtimeWaketimeCellForSleepAlarm:(id)arg1;	// IMP=0x0000000100019dd0
- (void)updateScheduleSectionWithAlarm:(id)arg1;	// IMP=0x0000000100019d5c
- (void)_updateSleepAlarmViewsForSleepAlarm:(id)arg1;	// IMP=0x0000000100019cfc
- (void)_updateSleepAlarmViews;	// IMP=0x0000000100019bf0
- (void)bedtimeWaketimeAction;	// IMP=0x0000000100019ad0
- (void)showOptions:(id)arg1;	// IMP=0x00000001000198b8
- (void)optionsDidHitDone;	// IMP=0x00000001000197f4
- (void)showOptionsAction;	// IMP=0x00000001000196d4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000194e8
- (_Bool)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;	// IMP=0x00000001000194e0
- (_Bool)tableView:(id)arg1 shouldHaveFullLengthTopSeparatorForSection:(long long)arg2;	// IMP=0x00000001000194d8
- (id)getSleepAnalysisCell;	// IMP=0x0000000100019440
- (id)sleepOptionsCell;	// IMP=0x000000010001924c
- (id)analysisSectionCellForRow:(long long)arg1;	// IMP=0x0000000100018fac
- (id)scheduleSectionCellForRow:(long long)arg1;	// IMP=0x0000000100018eac
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100018d24
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000100018c34
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100018b5c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100018aa4
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010001897c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100018930
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100018824
- (void)willEnterForeground:(id)arg1;	// IMP=0x00000001000187b4
- (void)didEnterBackground:(id)arg1;	// IMP=0x0000000100018754
- (void)dataSource:(id)arg1 didRemoveAlarms:(id)arg2;	// IMP=0x0000000100018648
- (void)dataSourceDidReload:(id)arg1;	// IMP=0x000000010001858c
- (void)sleepDataDidChange;	// IMP=0x0000000100018580
- (void)stopListeningForHealthKitChanges;	// IMP=0x0000000100018494
- (void)startListeningForHealthKitChanges;	// IMP=0x00000001000183a8
- (void)loadSleepData;	// IMP=0x000000010001814c
- (void)dealloc;	// IMP=0x0000000100018080
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100018010
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100017f80
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100017f00
- (void)setupOptionsButton;	// IMP=0x0000000100017df8
- (void)viewDidLoad;	// IMP=0x0000000100017ad4
- (void)loadView;	// IMP=0x0000000100017a84
- (void)setupSleepObserverProxy;	// IMP=0x0000000100017a0c
- (void)setupSections;	// IMP=0x0000000100017900
- (id)initWithAlarmManager:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000010001746c
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100017464

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

