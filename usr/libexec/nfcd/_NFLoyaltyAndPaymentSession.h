//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_NFContactlessPaymentSession.h"

#import "NFHostCardAppletInterface-Protocol.h"

@class NFHostCardEmulationManager, NFLoyaltyAgent, NSMutableArray;

@interface _NFLoyaltyAndPaymentSession : _NFContactlessPaymentSession <NFHostCardAppletInterface>
{
    _Bool _emulationActive;	// 8 = 0x8
    NFLoyaltyAgent *_loyaltyAgent;	// 16 = 0x10
    NFHostCardEmulationManager *_hceManager;	// 24 = 0x18
    NSMutableArray *_events;	// 32 = 0x20
}

+ (id)validateEntitlements:(id)arg1;	// IMP=0x0000000100027038
- (void).cxx_destruct;	// IMP=0x0000000100027a54
- (void)handleHostCardReaderDetected:(id)arg1;	// IMP=0x00000001000279b0
- (void)handleDeselect;	// IMP=0x0000000100027928
- (id)handleAPDU:(id)arg1;	// IMP=0x0000000100027870
- (id)handleSelect:(id)arg1;	// IMP=0x00000001000277dc
- (void)supportPayment:(_Bool)arg1;	// IMP=0x00000001000277c4
- (id)hostCardEmulationLog;	// IMP=0x000000010002769c
- (void)setHostCards:(id)arg1;	// IMP=0x00000001000275c0
- (_Bool)useFilteredApplets;	// IMP=0x0000000100027448
- (void)didEndSession:(id)arg1;	// IMP=0x000000010002733c
- (id)initWithRemoteObject:(id)arg1 workQueue:(id)arg2 expressModeManager:(id)arg3 allowsBackgroundMode:(_Bool)arg4;	// IMP=0x000000010002722c

@end

