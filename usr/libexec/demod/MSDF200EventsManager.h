//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDKF200EventStoreHelper;

@interface MSDF200EventsManager : NSObject
{
    MSDKF200EventStoreHelper *_storeHelper;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010006b488
+ (_Bool)validateAndPatchEventIfNeeded:(id)arg1;	// IMP=0x000000010006b17c
- (void).cxx_destruct;	// IMP=0x000000010006bb48
@property(retain) MSDKF200EventStoreHelper *storeHelper; // @synthesize storeHelper=_storeHelper;
- (void)scheduleEventCleanupTask;	// IMP=0x000000010006b770
- (void)markLastF200EventPingAsCommitted:(_Bool)arg1;	// IMP=0x000000010006b728
- (id)fetchUncommitedEventsForPing;	// IMP=0x000000010006b6d4
- (void)fetchEventsWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 fetchOffset:(unsigned long long)arg3 completionHanlder:(CDUnknownBlockType)arg4;	// IMP=0x000000010006b634
- (void)saveEvent:(id)arg1;	// IMP=0x000000010006b5c8
- (id)init;	// IMP=0x000000010006b4f4

@end

