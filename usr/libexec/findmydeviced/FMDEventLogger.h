//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDEventLoggerFacility-Protocol.h"

@class NSDictionary, NSString;

@interface FMDEventLogger : NSObject <FMDEventLoggerFacility>
{
    NSDictionary *_facilitiesDictionary;	// 8 = 0x8
}

+ (id)sharedLogger;	// IMP=0x0000000100043b70
+ (id)facilityName;	// IMP=0x0000000100043b64
- (void).cxx_destruct;	// IMP=0x0000000100044120
@property(retain, nonatomic) NSDictionary *facilitiesDictionary; // @synthesize facilitiesDictionary=_facilitiesDictionary;
- (_Bool)shouldLog;	// IMP=0x00000001000440b8
- (id)loggedEvents;	// IMP=0x00000001000440ac
- (void)logEvent:(id)arg1;	// IMP=0x0000000100044018
- (void)logEvent:(id)arg1 toFacilitiesNamed:(id)arg2;	// IMP=0x0000000100043e38
- (void)reset;	// IMP=0x0000000100043dc0
- (id)init;	// IMP=0x0000000100043bdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

