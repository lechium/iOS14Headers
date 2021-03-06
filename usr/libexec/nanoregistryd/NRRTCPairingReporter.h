//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface NRRTCPairingReporter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned int _reportSubreason;	// 16 = 0x10
    NSString *_gizmoBuild;	// 24 = 0x18
    NSString *_gizmoHW;	// 32 = 0x20
}

+ (void)submitRTCPairingMetricWithMetricID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bd10c
+ (id)sharedInstance;	// IMP=0x00000001000bd070
- (void).cxx_destruct;	// IMP=0x00000001000bebcc
@property(retain, nonatomic) NSString *gizmoHW; // @synthesize gizmoHW=_gizmoHW;
@property(retain, nonatomic) NSString *gizmoBuild; // @synthesize gizmoBuild=_gizmoBuild;
@property(nonatomic) unsigned int reportSubreason; // @synthesize reportSubreason=_reportSubreason;
- (id)lastControllerPushed:(id)arg1;	// IMP=0x00000001000be54c
- (void)assembleAndSubmitPairingMetricWithMetricID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bd9b0
- (void)addToOrCapOffRTCPairingMetric:(unsigned int)arg1;	// IMP=0x00000001000bd198
- (id)init;	// IMP=0x00000001000bd000

@end

