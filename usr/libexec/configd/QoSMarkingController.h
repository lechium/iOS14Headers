//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface QoSMarkingController : NSObject
{
    NSArray *_interfaces;	// 8 = 0x8
    NSMutableDictionary *_policySessions;	// 16 = 0x10
    NSMutableDictionary *_requested;	// 24 = 0x18
    NSMutableDictionary *_enabled;	// 32 = 0x20
    NSMutableDictionary *_enabledAV;	// 40 = 0x28
}

+ (id)sharedController;	// IMP=0x00000001000588ac
- (void).cxx_destruct;	// IMP=0x00000001000591cc
@property(retain, nonatomic) NSMutableDictionary *enabledAV; // @synthesize enabledAV=_enabledAV;
@property(retain, nonatomic) NSMutableDictionary *enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSMutableDictionary *requested; // @synthesize requested=_requested;
@property(retain, nonatomic) NSMutableDictionary *policySessions; // @synthesize policySessions=_policySessions;
@property(retain, nonatomic) NSArray *interfaces; // @synthesize interfaces=_interfaces;
- (void)setPolicy:(id)arg1 forInterface:(id)arg2;	// IMP=0x0000000100058e38
- (void)updatePolicy:(id)arg1 forInterface:(id)arg2;	// IMP=0x0000000100057974
- (id)init;	// IMP=0x0000000100057850
- (void)addWhitelistedAppIdentifierPolicy:(id)arg1 forApp:(id)arg2 order:(unsigned int)arg3;	// IMP=0x0000000100057044
- (id)copyUUIDsForBundleID:(id)arg1;	// IMP=0x0000000100056f90
- (id)copyUUIDsForUUIDMapping:(id)arg1;	// IMP=0x0000000100056d18
- (void)addWhitelistedPathPolicy:(id)arg1 forPath:(id)arg2 order:(unsigned int)arg3;	// IMP=0x00000001000565b4
- (id)copyUUIDsForExecutable:(const char *)arg1;	// IMP=0x0000000100056220
- (id)copyUUIDsForFatBinary:(int)arg1;	// IMP=0x0000000100055ba4
- (id)copyUUIDForSingleArch:(int)arg1;	// IMP=0x000000010005577c
- (id)qosMarkingWhitelistedAppIdentifiers:(id)arg1;	// IMP=0x0000000100055498
- (_Bool)qosMarkingIsAppleAudioVideoCallsEnabled:(id)arg1;	// IMP=0x0000000100055440
- (_Bool)qosMarkingIsEnabled:(id)arg1;	// IMP=0x00000001000553e8
- (_Bool)qosMarkingPolicyEnabled:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100055240
- (id)createPolicySession;	// IMP=0x00000001000551f0

@end

