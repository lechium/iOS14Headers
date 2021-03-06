//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#import "NDSessionManagerDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NDUserSyncStakeholder, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface Daemon : NSObject <LSApplicationWorkspaceObserverProtocol, NSXPCListenerDelegate, NDSessionManagerDelegate>
{
    NSMutableDictionary *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 16 = 0x10
    _Bool _createdDataVault;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_archiveTimer;	// 32 = 0x20
    _Bool _privileged;	// 40 = 0x28
    _Bool _inSyncBubble;	// 41 = 0x29
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NDUserSyncStakeholder *_stakeholder;	// 56 = 0x38
}

+ (id)sharedDaemon;	// IMP=0x000000010005a884
- (void).cxx_destruct;	// IMP=0x0000000100059ba4
@property(retain) NDUserSyncStakeholder *stakeholder; // @synthesize stakeholder=_stakeholder;
@property(getter=isInSyncBubble) _Bool inSyncBubble; // @synthesize inSyncBubble=_inSyncBubble;
@property(getter=isPrivileged) _Bool privileged; // @synthesize privileged=_privileged;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)start;	// IMP=0x0000000100059894
- (void)waitUntilDeviceIsUnlocked;	// IMP=0x0000000100059628
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00000001000595a4
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000100059520
- (id)bundleIDsForAppProxies:(id)arg1;	// IMP=0x0000000100059350
- (void)releaseTransaction;	// IMP=0x0000000100059340
- (void)addTransaction;	// IMP=0x0000000100059330
- (void)managerBecameEmpty:(id)arg1 bundleID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010005926c
- (id)getSessionWithIdentifier:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0000000100059158
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100058854
- (void)setupArchiveTimer;	// IMP=0x0000000100058784
- (void)archiveState;	// IMP=0x000000010005860c
- (void)restoreState;	// IMP=0x0000000100057c34
- (void)setupNewClassMappingsForUnarchiver;	// IMP=0x0000000100057bf0
- (_Bool)applicationIsInstalled:(id)arg1;	// IMP=0x0000000100057a5c
- (id)archivePath;	// IMP=0x00000001000579e0
- (id)archivePathOldNonDataVault;	// IMP=0x0000000100057964
- (id)init;	// IMP=0x000000010005778c
- (void)createDaemonDirectory;	// IMP=0x0000000100057324

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

