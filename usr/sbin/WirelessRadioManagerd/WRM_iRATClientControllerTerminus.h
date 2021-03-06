//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WRM_iRATClientController.h"

@class NSObject, WRM_TerminusContext;
@protocol OS_dispatch_queue;

@interface WRM_iRATClientControllerTerminus : WRM_iRATClientController
{
    int _rxClientType;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    WRM_TerminusContext *_mTerminusContext;	// 80 = 0x50
}

@property(nonatomic) int rxClientType; // @synthesize rxClientType=_rxClientType;
@property(retain, nonatomic) WRM_TerminusContext *mTerminusContext; // @synthesize mTerminusContext=_mTerminusContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)handleLinkPreferenceNotificationTerminus;	// IMP=0x00000001000b5594
- (void)handleSubscribeStatusUpdateTerminus:(id)arg1;	// IMP=0x00000001000b5450
- (void)handleLinkPrefSubscribeTerminus:(id)arg1;	// IMP=0x00000001000b5384
- (void)handleMessage:(id)arg1;	// IMP=0x00000001000b52c8
- (void)dealloc;	// IMP=0x00000001000b519c
- (id)init;	// IMP=0x00000001000b50bc

@end

