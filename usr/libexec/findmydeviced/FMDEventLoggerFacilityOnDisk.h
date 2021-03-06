//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDEventLoggerFacility-Protocol.h"

@class FMDataArchiver, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface FMDEventLoggerFacilityOnDisk : NSObject <FMDEventLoggerFacility>
{
    NSURL *_cachedLogFileURL;	// 8 = 0x8
    NSMutableArray *_logs;	// 16 = 0x10
    FMDataArchiver *_archiver;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
}

+ (id)facilityName;	// IMP=0x0000000100086008
- (void).cxx_destruct;	// IMP=0x0000000100086bd8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) FMDataArchiver *archiver; // @synthesize archiver=_archiver;
@property(retain, nonatomic) NSMutableArray *logs; // @synthesize logs=_logs;
@property(retain, nonatomic) NSURL *cachedLogFileURL; // @synthesize cachedLogFileURL=_cachedLogFileURL;
- (void)loadLogs;	// IMP=0x0000000100086788
- (_Bool)shouldLog;	// IMP=0x0000000100086780
- (id)loggedEvents;	// IMP=0x0000000100086614
- (void)reset;	// IMP=0x00000001000864f0
- (void)_logEvent:(id)arg1;	// IMP=0x0000000100086388
- (void)logEvent:(id)arg1;	// IMP=0x0000000100086254
- (id)init;	// IMP=0x0000000100086014

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

