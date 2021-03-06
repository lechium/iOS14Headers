//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP10cloudpaird14DeviceManaging_-Protocol.h"

@class BTXPCConnection, NSHashTable, NSMutableDictionary, NSString, NSUserDefaults, _TtC10cloudpaird13DeviceManager, _TtC10cloudpaird16DefaultsObserver;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CloudXPCService : NSObject <_TtP10cloudpaird14DeviceManaging_>
{
    _Bool _accountAvailable;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_xpcServer;	// 24 = 0x18
    BTXPCConnection *_serverConnection;	// 32 = 0x20
    NSObject<OS_xpc_object> *_cloudKitConnection;	// 40 = 0x28
    _TtC10cloudpaird13DeviceManager *_deviceManager;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 56 = 0x38
    NSMutableDictionary *_activeTransactions;	// 64 = 0x40
    NSUserDefaults *_bluetoothDefaults;	// 72 = 0x48
    _TtC10cloudpaird16DefaultsObserver *_bluetoothDefaultsObserver;	// 80 = 0x50
    NSHashTable *_clients;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x000000010003ca50
- (void).cxx_destruct;	// IMP=0x0000000100042ad0
@property(nonatomic) _Bool accountAvailable; // @synthesize accountAvailable=_accountAvailable;
@property(retain, nonatomic) NSHashTable *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) _TtC10cloudpaird16DefaultsObserver *bluetoothDefaultsObserver; // @synthesize bluetoothDefaultsObserver=_bluetoothDefaultsObserver;
@property(retain, nonatomic) NSUserDefaults *bluetoothDefaults; // @synthesize bluetoothDefaults=_bluetoothDefaults;
@property(retain, nonatomic) NSMutableDictionary *activeTransactions; // @synthesize activeTransactions=_activeTransactions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(retain) _TtC10cloudpaird13DeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain) NSObject<OS_xpc_object> *cloudKitConnection; // @synthesize cloudKitConnection=_cloudKitConnection;
@property(retain) BTXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain) NSObject<OS_xpc_object> *xpcServer; // @synthesize xpcServer=_xpcServer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
- (void)endTransaction:(id)arg1;	// IMP=0x0000000100042764
- (void)beginTransaction:(id)arg1;	// IMP=0x0000000100042464
- (id)transactionIdentifierForActionIdentifier:(id)arg1;	// IMP=0x0000000100042424
- (void)handleConnection:(id)arg1 XPCMessage:(id)arg2 userID:(unsigned int)arg3 processID:(int)arg4;	// IMP=0x000000010003fd78
- (id)readUserPreference:(id)arg1;	// IMP=0x000000010003fd3c
- (_Bool)manateeZoneUpgraded;	// IMP=0x000000010003fc90
- (void)removeConnection:(id)arg1;	// IMP=0x000000010003fb90
- (void)accountStatusAvailable:(_Bool)arg1 force:(_Bool)arg2;	// IMP=0x000000010003f870
- (void)magicPairingRecordsUpdatedWithRecords:(id)arg1;	// IMP=0x000000010003f6f8
- (void)magicPairingRecordsRemovedWithRecords:(id)arg1;	// IMP=0x000000010003f580
- (void)deviceSupportInformationRecordsUpdatedWithRecords:(id)arg1;	// IMP=0x000000010003f408
- (void)deviceSupportInformationRecordsRemovedWithRecords:(id)arg1;	// IMP=0x000000010003f290
- (void)allMagicPairingRecordsRemovedWithRecords:(id)arg1;	// IMP=0x000000010003f118
- (void)allDeviceSupportInformationRecordsRemovedWithRecords:(id)arg1;	// IMP=0x000000010003efa0
- (void)accountStatusUpdateWithAvailable:(_Bool)arg1 forced:(_Bool)arg2;	// IMP=0x000000010003eec0
- (id)_legacyNicknameMessage:(id)arg1 withNewFormatDevices:(id)arg2;	// IMP=0x000000010003ebb8
- (void)allDevicesRemovedWithRecords:(id)arg1;	// IMP=0x000000010003e9f4
- (void)devicesUpdatedWithRecords:(id)arg1;	// IMP=0x000000010003e830
- (void)devicesRemovedWithRecords:(id)arg1;	// IMP=0x000000010003e66c
- (void)handleConnection:(id)arg1;	// IMP=0x000000010003e35c
- (void)handleEvent:(id)arg1;	// IMP=0x000000010003e294
- (void)sendCloudKitMsg:(id)arg1 args:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003dab0
- (void)sendCloudKitMsg:(id)arg1 args:(id)arg2;	// IMP=0x000000010003d7dc
- (void)establishBluetoothdXPCWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010003d490
- (void)sendMsg:(id)arg1 args:(id)arg2;	// IMP=0x000000010003d340
- (void)dealloc;	// IMP=0x000000010003d264
- (id)bundleIdentifierForConnection:(id)arg1;	// IMP=0x000000010003d120
- (void)activate;	// IMP=0x000000010003cd14
- (id)init;	// IMP=0x000000010003cabc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

