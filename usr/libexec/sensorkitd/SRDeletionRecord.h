//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "SRSampleExporting-Protocol.h"
#import "SRSampling-Protocol.h"

@class NSString;

@interface SRDeletionRecord : NSObject <SRSampleExporting, SRSampling, NSSecureCoding>
{
    _Atomic long long _reason;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    double _endTime;	// 24 = 0x18
    long long _extendedReason;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100017558
+ (id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 extendedReason:(long long)arg3;	// IMP=0x0000000100017400
+ (id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 reason:(long long)arg3;	// IMP=0x0000000100017388
+ (void)initialize;	// IMP=0x000000010001733c
@property long long extendedReason; // @synthesize extendedReason=_extendedReason;
@property double endTime; // @synthesize endTime=_endTime;
@property double startTime; // @synthesize startTime=_startTime;
@property long long reason;
@property(readonly, copy) NSString *description;
- (id)sr_dictionaryRepresentation;	// IMP=0x0000000100017840
- (id)binarySampleRepresentation;	// IMP=0x0000000100017820
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;	// IMP=0x00000001000176f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100017644
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100017560
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001744c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
