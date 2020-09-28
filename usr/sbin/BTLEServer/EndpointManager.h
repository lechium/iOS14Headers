//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBScalablePipeManagerDelegate-Protocol.h"

@class CBScalablePipeManager, DeviceManagementEndpoint, NSString;
@protocol OS_os_transaction;

@interface EndpointManager : NSObject <CBScalablePipeManagerDelegate>
{
    _Bool _shouldPersist;	// 8 = 0x8
    CBScalablePipeManager *_pipeManager;	// 16 = 0x10
    DeviceManagementEndpoint *_deviceManagementEndpoint;	// 24 = 0x18
    NSObject<OS_os_transaction> *_persistanceAssertion;	// 32 = 0x20
}

+ (id)instance;	// IMP=0x00000001000041c0
- (void).cxx_destruct;	// IMP=0x00000001000055b4
@property(retain, nonatomic) NSObject<OS_os_transaction> *persistanceAssertion; // @synthesize persistanceAssertion=_persistanceAssertion;
@property(nonatomic) _Bool shouldPersist; // @synthesize shouldPersist=_shouldPersist;
@property(retain, nonatomic) DeviceManagementEndpoint *deviceManagementEndpoint; // @synthesize deviceManagementEndpoint=_deviceManagementEndpoint;
@property(retain, nonatomic) CBScalablePipeManager *pipeManager; // @synthesize pipeManager=_pipeManager;
- (id)scalablePipeManagerStateString;	// IMP=0x00000001000054b8
- (id)endpointForPipe:(id)arg1;	// IMP=0x00000001000053d4
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;	// IMP=0x000000010000532c
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;	// IMP=0x0000000100005284
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;	// IMP=0x00000001000051d4
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;	// IMP=0x00000001000050d4
- (void)scalablePipeManagerDidUpdateState:(id)arg1;	// IMP=0x0000000100004e48
- (void)refreshPersistanceAssertion;	// IMP=0x0000000100004cf8
- (id)init;	// IMP=0x0000000100004c7c
- (void)respondToLeaStoreBondingInfo:(id)arg1 device:(id)arg2;	// IMP=0x0000000100004bf4
- (void)requestLeaStoreBondingInfo:(id)arg1 rand:(id)arg2 ltk:(id)arg3 irk:(id)arg4 name:(id)arg5 device:(id)arg6;	// IMP=0x0000000100004aec
- (void)respondToLeaEasyPair:(id)arg1 device:(id)arg2;	// IMP=0x0000000100004a64
- (void)requestLeaEasyPair:(id)arg1 deviceIdentifier:(id)arg2 deviceTags:(id)arg3;	// IMP=0x00000001000049b8
- (void)notifyPrimaryBudSide:(id)arg1 device:(id)arg2;	// IMP=0x0000000100004930
- (void)storeDeviceSettings:(id)arg1 inEarEnable:(id)arg2 doubleTapMode:(id)arg3 deviceSettings:(id)arg4 deviceName:(id)arg5 device:(id)arg6;	// IMP=0x0000000100004828
- (void)respondToStoreLinkKey:(id)arg1 device:(id)arg2;	// IMP=0x00000001000047a0
- (void)requestStoreLinkKeyExtended:(id)arg1 name:(id)arg2 device:(id)arg3 deviceServiceMask:(id)arg4 classOfDevice:(id)arg5;	// IMP=0x00000001000046b4
- (void)requestStoreLinkKey:(id)arg1 name:(id)arg2 device:(id)arg3;	// IMP=0x0000000100004608
- (void)respondToPairState:(id)arg1 device:(id)arg2;	// IMP=0x0000000100004580
- (void)requestPairStateForDevice:(id)arg1;	// IMP=0x0000000100004514
- (void)respondVersionInfo:(id)arg1 cloudAccount:(id)arg2 easyPairingStatus:(id)arg3;	// IMP=0x0000000100004468
- (void)requestVersionInfo:(id)arg1 cloudAccount:(id)arg2;	// IMP=0x00000001000043e0
- (void)unexpectedDisconnection:(id)arg1;	// IMP=0x0000000100004374
- (void)disconnectDevice:(id)arg1;	// IMP=0x0000000100004308
- (void)connectDevice:(id)arg1 quickDisconnectEnabled:(id)arg2;	// IMP=0x0000000100004280
- (void)setPersist:(_Bool)arg1;	// IMP=0x000000010000424c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
