//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ATConnectionDelegate-Protocol.h"

@class ATConnection, ATHostBrowser, NSDictionary, NSMutableSet, NSString, NSTimer;
@protocol AirTrafficSettingsDataSourceDelegate;

@interface AirTrafficSettingsDataSource : NSObject <ATConnectionDelegate>
{
    ATConnection *_connection;	// 8 = 0x8
    NSString *_libraryIdentifier;	// 16 = 0x10
    NSMutableSet *_connectedLibraries;	// 24 = 0x18
    NSMutableSet *_wakeableLibraries;	// 32 = 0x20
    NSMutableSet *_wakingLibraries;	// 40 = 0x28
    NSMutableSet *_librariesWaitingToSync;	// 48 = 0x30
    NSMutableSet *_syncingLibraries;	// 56 = 0x38
    NSTimer *_waitingForSyncTimer;	// 64 = 0x40
    unsigned long long _backgroundTaskIdentifier;	// 72 = 0x48
    _Bool _registered;	// 80 = 0x50
    NSDictionary *_lastProgressDict;	// 88 = 0x58
    ATHostBrowser *_hostBrowser;	// 96 = 0x60
    id <AirTrafficSettingsDataSourceDelegate> _delegate;	// 104 = 0x68
}

+ (id)sharedDataSource;	// IMP=0x0000000000009c90
- (void).cxx_destruct;	// IMP=0x000000000000bf98
@property(nonatomic) __weak id <AirTrafficSettingsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)connectionWasInterrupted:(id)arg1;	// IMP=0x000000000000bf40
- (void)connection:(id)arg1 updatedProgress:(id)arg2;	// IMP=0x000000000000b804
@property(readonly, nonatomic, getter=isWifiEnabled) _Bool wifiEnabled;
@property(readonly, nonatomic) _Bool waitingToWake;
@property(readonly, nonatomic) _Bool waitingToSync;
@property(readonly, nonatomic) _Bool syncing;
@property(readonly, nonatomic) _Bool connected;
- (void)stopScanningWakeableLibraries;	// IMP=0x000000000000b41c
- (void)scanWakeableLibraries;	// IMP=0x000000000000afe8
- (id)hostsWaitingToWake;	// IMP=0x000000000000ae74
- (id)hostForIdentifier:(id)arg1;	// IMP=0x000000000000ad8c
- (id)hostIdentifiers;	// IMP=0x000000000000ad00
- (void)cancelSync;	// IMP=0x000000000000ab5c
- (void)requestSync;	// IMP=0x000000000000a460
- (void)unregisterForProgress;	// IMP=0x000000000000a428
- (void)registerForProgressWithLibraryIdentifier:(id)arg1;	// IMP=0x000000000000a24c
- (void)syncTimeoutExpired;	// IMP=0x000000000000a0b8
- (void)unregisterConnectionIfUnused;	// IMP=0x0000000000009fd4
- (id)connection;	// IMP=0x0000000000009ec0
- (void)dealloc;	// IMP=0x0000000000009e50
- (id)initWithLibraryIdentifier:(id)arg1;	// IMP=0x0000000000009dec
- (id)init;	// IMP=0x0000000000009cfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

