//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "RPSubDaemonable-Protocol.h"

@class CUBonjourAdvertiser, CUBonjourBrowser, CUSystemMonitor, CUTCPServer, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, RPCompanionLinkDevice, RPRemoteDisplayXPCConnection, RPXPCMatchingEntry, SFDeviceDiscovery, SFService;
@protocol OS_dispatch_queue;

@interface RPRemoteDisplayDaemon : NSObject <NSXPCListenerDelegate, RPSubDaemonable>
{
    NSMutableSet *_activatedDiscoverySet;	// 8 = 0x8
    RPRemoteDisplayXPCConnection *_activatedServerXPCCnx;	// 16 = 0x10
    NSMutableSet *_activatedSessionSet;	// 24 = 0x18
    SFDeviceDiscovery *_bleDiscovery;	// 32 = 0x20
    unsigned int _bleDiscoveryID;	// 40 = 0x28
    SFService *_bleNeedsAWDLAdvertiser;	// 48 = 0x30
    SFDeviceDiscovery *_bleNeedsAWDLScanner;	// 56 = 0x38
    unsigned int _bleNeedsAWDLScannerID;	// 64 = 0x40
    CUBonjourAdvertiser *_bonjourAdvertiser;	// 72 = 0x48
    CUBonjourAdvertiser *_bonjourAWDLAdvertiser;	// 80 = 0x50
    _Bool _bonjourAWDLAdvertiserForce;	// 88 = 0x58
    NSMutableDictionary *_bonjourAWDLDevices;	// 96 = 0x60
    CUBonjourBrowser *_bonjourBrowser;	// 104 = 0x68
    CUBonjourBrowser *_bonjourBrowserAWDL;	// 112 = 0x70
    _Bool _bonjourBrowserAWDLForce;	// 120 = 0x78
    CUSystemMonitor *_btAdvAddrMonitor;	// 128 = 0x80
    NSData *_btAdvAddrData;	// 136 = 0x88
    NSString *_btAdvAddrStr;	// 144 = 0x90
    unsigned int _cnxIDLast;	// 152 = 0x98
    NSString *_deviceAuthTagStr;	// 160 = 0xa0
    NSMutableDictionary *_discoveredDevices;	// 168 = 0xa8
    _Bool _invalidateCalled;	// 176 = 0xb0
    _Bool _invalidateDone;	// 177 = 0xb1
    RPCompanionLinkDevice *_localDeviceInfo;	// 184 = 0xb8
    NSMutableDictionary *_needsAWDLDevices;	// 192 = 0xc0
    unsigned int _sessionIDLast;	// 200 = 0xc8
    CUSystemMonitor *_systemMonitor;	// 208 = 0xd0
    NSMutableArray *_tcpBufferedConnections;	// 216 = 0xd8
    NSMutableDictionary *_tcpServerConnections;	// 224 = 0xe0
    CUTCPServer *_tcpServer;	// 232 = 0xe8
    NSMutableDictionary *_unresolvedDevices;	// 240 = 0xf0
    NSMutableSet *_xpcConnections;	// 248 = 0xf8
    unsigned int _xpcLastID;	// 256 = 0x100
    NSXPCListener *_xpcListener;	// 264 = 0x108
    NSMutableDictionary *_xpcMatchingDiscoveryMap;	// 272 = 0x110
    RPXPCMatchingEntry *_xpcMatchingServer;	// 280 = 0x118
    _Bool _prefBLEClient;	// 288 = 0x120
    _Bool _prefBLEServer;	// 289 = 0x121
    _Bool _prefClientEnabled;	// 290 = 0x122
    _Bool _prefNoInfra;	// 291 = 0x123
    _Bool _prefServerBonjourInfra;	// 292 = 0x124
    _Bool _prefServerEnabled;	// 293 = 0x125
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x0000000100057644
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x00000001000575b0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010005733c
- (void)_localDeviceUpdate;	// IMP=0x0000000100057064
- (void)_btAddressChanged;	// IMP=0x0000000100056f28
- (void)_btAddressMonitorEnsureStopped;	// IMP=0x0000000100056e90
- (void)_btAddressMonitorEnsureStarted;	// IMP=0x0000000100056d44
- (void)_serverTCPHandleConnectionStarted:(id)arg1;	// IMP=0x00000001000565d4
- (void)_serverTCPEnsureStopped;	// IMP=0x0000000100056400
- (void)_serverTCPEnsureStarted;	// IMP=0x00000001000560c8
- (_Bool)_serverBonjourAWDLNeeded;	// IMP=0x0000000100055f88
- (void)_serverBonjourAWDLAdvertiserUpdateTXT;	// IMP=0x0000000100055d9c
- (void)_serverBonjourAWDLAdvertiserEnsureStopped;	// IMP=0x0000000100055cd4
- (void)_serverBonjourAWDLAdvertiserEnsureStarted;	// IMP=0x0000000100055a30
- (void)_serverBonjourUpdateTXT;	// IMP=0x000000010005594c
- (id)_serverBonjourAuthTagStringWithData:(id)arg1;	// IMP=0x00000001000557dc
- (id)_serverBonjourAuthTagString;	// IMP=0x0000000100055728
- (void)_serverBonjourEnsureStopped;	// IMP=0x0000000100055690
- (void)_serverBonjourEnsureStarted;	// IMP=0x00000001000554a0
- (void)_serverBLENeedsAWDLScannerDeviceLost:(id)arg1;	// IMP=0x0000000100055340
- (void)_serverBLENeedsAWDLScannerDeviceFound:(id)arg1;	// IMP=0x0000000100055100
- (_Bool)_serverBLENeedsAWDLScannerScreenOff;	// IMP=0x00000001000550ac
- (void)_serverBLENeedsAWDLScannerEnsureStopped;	// IMP=0x0000000100054fd8
- (void)_serverBLENeedsAWDLScannerEnsureStarted;	// IMP=0x0000000100054bd0
- (void)_serverEnsureStopped;	// IMP=0x0000000100054b7c
- (void)_serverEnsureStarted;	// IMP=0x00000001000549f4
- (void)_clientLostAllDevices;	// IMP=0x0000000100054754
- (void)_clientBonjourAWDLBrowserLostDevice:(id)arg1;	// IMP=0x000000010005452c
- (void)_clientBonjourAWDLBrowserFoundDevice:(id)arg1;	// IMP=0x0000000100053e6c
- (_Bool)_clientBonjourAWDLBrowserShouldRun;	// IMP=0x0000000100053d38
- (void)_clientBonjourAWDLBrowserEnsureStopped;	// IMP=0x0000000100053c84
- (void)_clientBonjourAWDLBrowserEnsureStarted;	// IMP=0x0000000100053a40
- (void)_clientBonjourReevaluateDevices;	// IMP=0x000000010005374c
- (void)_clientBonjourReconfirmDevice:(id)arg1 reason:(const char *)arg2;	// IMP=0x000000010005368c
- (void)_clientBonjourLostUnresolvedDevice:(id)arg1;	// IMP=0x000000010005360c
- (void)_clientBonjourFoundUnresolvedDevice:(id)arg1;	// IMP=0x0000000100053558
- (void)_clientBonjourLostDevice:(id)arg1;	// IMP=0x0000000100052fec
- (_Bool)_clientBonjourFoundDevice:(id)arg1 reevaluate:(_Bool)arg2;	// IMP=0x00000001000524cc
- (void)_clientBonjourEnsureStopped;	// IMP=0x0000000100052424
- (void)_clientBonjourEnsureStarted;	// IMP=0x00000001000520f8
- (_Bool)_clientBLENeedsAWDLAdvertiserShouldRun;	// IMP=0x0000000100051f54
- (void)_clientBLENeedsAWDLAdvertiserEnsureStopped;	// IMP=0x0000000100051ebc
- (void)_clientBLENeedsAWDLAdvertiserEnsureStarted;	// IMP=0x0000000100051c30
- (void)_clientBLEDiscoveryDeviceLost:(id)arg1;	// IMP=0x00000001000516f0
- (void)_clientBLEDiscoveryDeviceFound:(id)arg1;	// IMP=0x0000000100050e74
- (void)_clientBLEDiscoveryEnsureStopped;	// IMP=0x0000000100050dc8
- (void)_clientBLEDiscoveryEnsureStarted;	// IMP=0x0000000100050978
- (void)_clientEnsureStopped;	// IMP=0x0000000100050914
- (void)_clientEnsureStarted;	// IMP=0x00000001000507ec
- (void)_updateXPCMatchingDiscovery;	// IMP=0x0000000100050634
- (void)_update;	// IMP=0x0000000100050468
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x00000001000502e8
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004ffd8
- (void)prefsChanged;	// IMP=0x000000010004fb78
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x000000010004f948
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x000000010004f6ac
- (void)_invalidated;	// IMP=0x000000010004f5e4
- (void)_invalidate;	// IMP=0x000000010004f3b8
- (void)invalidate;	// IMP=0x000000010004f350
- (void)_activate;	// IMP=0x000000010004f13c
- (void)activate;	// IMP=0x000000010004f0d4
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010004e2c4
- (id)init;	// IMP=0x000000010004e25c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

