//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMLocatorPublishing-Protocol.h"

@class NSArray, NSNumber, NSString;
@protocol FMLocatorPublishing;

@interface FMCompareLocatorPublisher : NSObject <FMLocatorPublishing>
{
    NSNumber *_startThreshold;	// 8 = 0x8
    NSNumber *_endThreshold;	// 16 = 0x10
    NSNumber *_decayFactor;	// 24 = 0x18
    NSNumber *_minimumDistance;	// 32 = 0x20
    NSNumber *_publishTimeInterval;	// 40 = 0x28
    NSNumber *_cachedLocationValidityTimeInterval;	// 48 = 0x30
    NSObject<FMLocatorPublishing> *_primaryPublisher;	// 56 = 0x38
    NSArray *_comparisonPublishers;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100062a74
@property(retain, nonatomic) NSArray *comparisonPublishers; // @synthesize comparisonPublishers=_comparisonPublishers;
@property(retain, nonatomic) NSObject<FMLocatorPublishing> *primaryPublisher; // @synthesize primaryPublisher=_primaryPublisher;
@property(retain, nonatomic) NSNumber *cachedLocationValidityTimeInterval; // @synthesize cachedLocationValidityTimeInterval=_cachedLocationValidityTimeInterval;
@property(retain, nonatomic) NSNumber *publishTimeInterval; // @synthesize publishTimeInterval=_publishTimeInterval;
@property(retain, nonatomic) NSNumber *minimumDistance; // @synthesize minimumDistance=_minimumDistance;
@property(retain, nonatomic) NSNumber *decayFactor; // @synthesize decayFactor=_decayFactor;
@property(retain, nonatomic) NSNumber *endThreshold; // @synthesize endThreshold=_endThreshold;
@property(retain, nonatomic) NSNumber *startThreshold; // @synthesize startThreshold=_startThreshold;
- (void)flushLocations;	// IMP=0x0000000100062988
- (void)publishers:(id)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000628ac
- (void)logPublishedLocation:(id)arg1 reason:(long long)arg2 publisher:(id)arg3;	// IMP=0x00000001000624e0
- (void)startPublishingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010006191c
- (void)updatedLocations:(id)arg1 reason:(long long)arg2;	// IMP=0x00000001000617fc
- (void)updatedLocations:(id)arg1;	// IMP=0x00000001000617ec
- (id)initWithPrimaryPublisher:(id)arg1 compareToPublishers:(id)arg2;	// IMP=0x0000000100061744

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
