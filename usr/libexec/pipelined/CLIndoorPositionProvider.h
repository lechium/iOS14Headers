//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIndoorXPCProvider.h"

#import "CLIndoorXPCProviderImplementation-Protocol.h"

@class NSString, ServiceState;

@interface CLIndoorPositionProvider : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>
{
    ServiceState *_state;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010001af5c
@property(retain, nonatomic) ServiceState *state; // @synthesize state=_state;
- (void)gpsSignalQualityAvailable:(id)arg1;	// IMP=0x000000010001acd0
- (void)gpsEstimateAvailable:(id)arg1;	// IMP=0x000000010001aa68
- (void)outdoorLocationAvailable:(id)arg1;	// IMP=0x000000010001a544
- (void)stopUpdatingLocation;	// IMP=0x000000010001a24c
- (void)startUpdatingLocationAtLocation:(id)arg1;	// IMP=0x0000000100019cb8
- (void)playbackDatarun:(id)arg1;	// IMP=0x0000000100019a10
- (void)setApiKey:(id)arg1 onServer:(id)arg2;	// IMP=0x0000000100019974
- (void)setApiKey:(id)arg1;	// IMP=0x00000001000198d8
- (void)withinQueueSetDelegate:(id)arg1;	// IMP=0x0000000100019740
- (void)setDelegate:(id)arg1;	// IMP=0x000000010001964c
- (void)withinQueueReinitializeRemoteState;	// IMP=0x000000010001948c
- (void)withinQueueInvalidateState;	// IMP=0x000000010001947c
- (_Bool)withinQueueCanReinitializeRemoteState;	// IMP=0x0000000100019464
- (id)withinQueuePermanentShutdownReason;	// IMP=0x00000001000193ec
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1;	// IMP=0x00000001000193d0
- (id)endpointName;	// IMP=0x00000001000193c4
- (id)remoteObjectProtocol;	// IMP=0x00000001000193b8
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100019300
- (id)initWithApiKey:(id)arg1 onServer:(id)arg2;	// IMP=0x0000000100019254
- (id)initWithApiKey:(id)arg1;	// IMP=0x00000001000191a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
