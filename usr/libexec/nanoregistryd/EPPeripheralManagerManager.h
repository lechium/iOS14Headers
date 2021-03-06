//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EPResourceManager.h"

#import "CBPeripheralManagerDelegate-Protocol.h"

@class CBPeripheralManager, NSString;

@interface EPPeripheralManagerManager : EPResourceManager <CBPeripheralManagerDelegate>
{
    CBPeripheralManager *_manager;	// 8 = 0x8
}

+ (Class)resourceClass;	// IMP=0x000000010008f964
- (void).cxx_destruct;	// IMP=0x000000010009031c
@property(readonly, nonatomic) CBPeripheralManager *manager; // @synthesize manager=_manager;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;	// IMP=0x00000001000901ec
- (void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;	// IMP=0x00000001000900cc
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;	// IMP=0x0000000100090020
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;	// IMP=0x000000010008ff3c
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;	// IMP=0x000000010008fe58
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;	// IMP=0x000000010008fd74
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;	// IMP=0x000000010008fc54
- (void)peripheralManagerDidUpdateState:(id)arg1;	// IMP=0x000000010008f97c
- (id)newManagerWithDelegate:(id)arg1;	// IMP=0x000000010008f970
- (void)destroyResource;	// IMP=0x000000010008f910
- (void)createResource;	// IMP=0x000000010008f864
- (id)init;	// IMP=0x000000010008f7f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

