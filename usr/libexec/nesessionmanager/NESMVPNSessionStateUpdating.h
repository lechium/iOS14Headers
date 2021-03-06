//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateUpdating : NESMVPNSessionState
{
}

- (_Bool)handleClearConfiguration;	// IMP=0x0000000100067128
- (_Bool)handleSetConfiguration;	// IMP=0x0000000100067024
- (void)handlePlugin:(id)arg1 statusDidChangeToDisconnectingWithReason:(int)arg2;	// IMP=0x0000000100066ee8
- (void)handlePlugin:(id)arg1 statusDidChangeToDisconnectedWithReason:(int)arg2;	// IMP=0x0000000100066d70
- (void)handleRestart;	// IMP=0x0000000100066c70
- (void)handleUpdateConfiguration;	// IMP=0x0000000100066b70
- (_Bool)handleSleep;	// IMP=0x0000000100066a6c
- (void)handleStop;	// IMP=0x000000010006696c
- (void)handleTimeout;	// IMP=0x00000001000668f8
- (void)handleEstablishIPC;	// IMP=0x00000001000667c0
- (void)leave;	// IMP=0x00000001000666d4
- (void)enterWithSession:(id)arg1;	// IMP=0x0000000100066628
- (id)init;	// IMP=0x00000001000665ec

@end

