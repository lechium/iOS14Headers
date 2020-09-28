//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSUserDefaults;

@interface _DASFairScheduleManager : NSObject
{
    NSMutableDictionary *_activityToDuration;	// 8 = 0x8
    NSUserDefaults *_fairSchedulingPreferences;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010007cea0
@property(retain, nonatomic) NSUserDefaults *fairSchedulingPreferences; // @synthesize fairSchedulingPreferences=_fairSchedulingPreferences;
@property(retain, nonatomic) NSMutableDictionary *activityToDuration; // @synthesize activityToDuration=_activityToDuration;
- (void)activityStarted:(id)arg1;	// IMP=0x000000010007cc54
- (void)activityCompleted:(id)arg1;	// IMP=0x000000010007ca44
- (double)valueForCompletedActivity;	// IMP=0x000000010007c9e8
- (void)activityCanceled:(id)arg1;	// IMP=0x000000010007c778
- (long long)compareActivity:(id)arg1 withActivity:(id)arg2;	// IMP=0x000000010007c53c
- (id)loadPriorityQueue;	// IMP=0x000000010007c524
- (void)savePriorityQueue;	// IMP=0x000000010007c50c
- (id)init;	// IMP=0x000000010007c2c4

@end
