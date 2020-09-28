//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDEventLoggerFacility-Protocol.h"

@class NSString;

@interface FMDEventLoggerFacilityDataPeek : NSObject <FMDEventLoggerFacility>
{
    NSString *_baseIdentifierKey;	// 8 = 0x8
}

+ (id)facilityName;	// IMP=0x0000000100044378
- (void).cxx_destruct;	// IMP=0x0000000100044730
@property(retain, nonatomic) NSString *baseIdentifierKey; // @synthesize baseIdentifierKey=_baseIdentifierKey;
- (_Bool)shouldLog;	// IMP=0x0000000100044714
- (void)reset;	// IMP=0x0000000100044710
- (void)logEvent:(id)arg1;	// IMP=0x0000000100044468
- (id)loggedEvents;	// IMP=0x000000010004445c
- (id)init;	// IMP=0x0000000100044384

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
