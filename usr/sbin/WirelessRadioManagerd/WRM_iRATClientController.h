//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WCM_Controller.h"

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WRM_iRATClientController : WCM_Controller
{
    int mAlgorithmType;	// 8 = 0x8
    int mRxClientType;	// 12 = 0xc
    _Bool mBufferStatusUpdateMsg;	// 16 = 0x10
    int mBufferedLinkType;	// 20 = 0x14
    unsigned long long mApplicationType;	// 24 = 0x18
    _Bool mActive;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *mQueue;	// 40 = 0x28
    NSMutableArray *mHandoverContexts;	// 48 = 0x30
    long long mActiveSlot;	// 56 = 0x38
}

- (void)postPreferredLinkToPowerLog:(unsigned long long)arg1:(int)arg2:(int)arg3;	// IMP=0x00000001000681bc
- (void)postiRATNotificationToEnableDisableCellData:(unsigned long long)arg1:(_Bool)arg2;	// IMP=0x000000010006800c
- (void)alertWRMClient:(_Bool)arg1:(id)arg2:(id)arg3:(_Bool)arg4;	// IMP=0x0000000100067d10
- (void)handleLinkPreferenceNotificationFaceTimeCalling:(_Bool)arg1:(id)arg2:(id)arg3;	// IMP=0x00000001000674fc
- (void)handleLinkPreferenceNotificationInternetDataVoiceVideo:(_Bool)arg1:(id)arg2:(id)arg3;	// IMP=0x0000000100067404
- (void)handleLinkPreferenceNotificationCM:(_Bool)arg1;	// IMP=0x0000000100066e04
- (void)handleLinkPreferenceNotificationIDS:(_Bool)arg1;	// IMP=0x00000001000668d4
- (void)handleLinkPreferenceNotification:(_Bool)arg1;	// IMP=0x00000001000662bc
- (void)existingContexts;	// IMP=0x0000000100065f54
- (void)deactivateMobilityContexts;	// IMP=0x0000000100065dc0
- (void)purgeStaleMobilityContexts;	// IMP=0x0000000100065d54
- (id)getStaleContextFromList;	// IMP=0x0000000100065ba0
- (id)getMobilityContextFromList:(unsigned long long)arg1;	// IMP=0x00000001000659e4
- (void)deleteMobilityContext:(unsigned long long)arg1;	// IMP=0x000000010006597c
- (void)removeAllMobilityContextsFromList;	// IMP=0x000000010006590c
- (void)removeMobilityContextFromList:(id)arg1;	// IMP=0x00000001000658a8
- (void)addMobilityContextToList:(id)arg1;	// IMP=0x0000000100065844
- (int)getMyClientType;	// IMP=0x0000000100065614
- (id)getHandoverContexts;	// IMP=0x00000001000655e8
- (void)setHandoverAlgorithmType:(int)arg1;	// IMP=0x00000001000655b8
- (int)getHandoverAlgorithmType:(unsigned long long)arg1;	// IMP=0x000000010006558c
- (void)setActiveSlot:(long long)arg1;	// IMP=0x000000010006555c
- (long long)getActiveSlot;	// IMP=0x0000000100065534
- (void)setBufferedAppType:(unsigned long long)arg1;	// IMP=0x0000000100065504
- (unsigned long long)getBufferedAppType;	// IMP=0x00000001000654dc
- (void)setStatusUpdateMsgBuffered:(_Bool)arg1;	// IMP=0x000000010006549c
- (_Bool)isStatusUpdateMsgBuffered;	// IMP=0x0000000100065468
- (void)setBufferedLinkType:(int)arg1;	// IMP=0x0000000100065438
- (int)getBufferedLinkType;	// IMP=0x0000000100065410
- (void)setCallState:(_Bool)arg1;	// IMP=0x00000001000653d0
- (_Bool)isCallActive;	// IMP=0x000000010006539c
- (void)handleBBAssertBGAppActive:(id)arg1;	// IMP=0x00000001000652d4
- (void)handleCommCenterBasebandOperatingChange:(id)arg1;	// IMP=0x00000001000651ec
- (void)handleIWLANMetrics:(id)arg1;	// IMP=0x0000000100065104
- (void)handleSubscribeStatusUpdate:(id)arg1;	// IMP=0x0000000100064f4c
- (void)handleSubscribeStatusUpdateFaceTimeCalling:(id)arg1;	// IMP=0x0000000100064d94
- (void)handleSubscribeStatusUpdateCM:(id)arg1;	// IMP=0x0000000100064bdc
- (void)handleStallCM:(id)arg1;	// IMP=0x0000000100064b10
- (void)handleSubscribeStatusUpdateIDS:(id)arg1;	// IMP=0x0000000100064900
- (void)handleSubscribeStatusUpdateTerminus:(id)arg1;	// IMP=0x00000001000647bc
- (void)handleLinkPrefSubscribeCM:(id)arg1;	// IMP=0x00000001000642e8
- (void)handleMetricsReportFaceTimeCalling:(id)arg1;	// IMP=0x0000000100064264
- (void)handleMetricsReportIDS:(id)arg1;	// IMP=0x0000000100064188
- (void)handleLinkPrefSubscribeFaceTimeCalling:(id)arg1;	// IMP=0x0000000100063cb4
- (void)handleLinkPrefGetMetrics:(id)arg1;	// IMP=0x0000000100063be8
- (void)handleLinkPrefSubscribeIDS:(id)arg1;	// IMP=0x0000000100063690
- (void)handleLinkPrefSubscribe:(id)arg1;	// IMP=0x00000001000631f0
- (void)handleDisconnection:(id)arg1;	// IMP=0x000000010006310c
- (void)handleMessage:(id)arg1;	// IMP=0x0000000100062dd4
- (void)dealloc;	// IMP=0x0000000100062ca0
- (id)init;	// IMP=0x0000000100062b3c

@end
