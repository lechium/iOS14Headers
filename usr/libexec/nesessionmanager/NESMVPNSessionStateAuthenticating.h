//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateAuthenticating : NESMVPNSessionState
{
}

- (void)handleTimeout;	// IMP=0x0000000100063d2c
- (void)handlePlugin:(id)arg1 authenticationCompleteWithResults:(id)arg2 status:(int)arg3 andError:(id)arg4;	// IMP=0x00000001000639d4
- (void)handlePlugin:(id)arg1 didStartWithPID:(int)arg2 error:(id)arg3;	// IMP=0x0000000100063784
- (void)enterWithSession:(id)arg1;	// IMP=0x00000001000635ec
- (id)init;	// IMP=0x00000001000635b0

@end
