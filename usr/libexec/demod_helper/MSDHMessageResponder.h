//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSDHMessageResponder : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x000000010001dcd8
- (_Bool)quitHelper:(id)arg1;	// IMP=0x000000010001facc
- (_Bool)reboot:(id)arg1;	// IMP=0x000000010001f9c8
- (_Bool)disableLaunchdServicesForWatch:(id)arg1;	// IMP=0x000000010001f8c4
- (_Bool)moveStagingToFinal:(id)arg1;	// IMP=0x000000010001f758
- (_Bool)manageVolume:(id)arg1;	// IMP=0x000000010001f538
- (_Bool)writeNvram:(id)arg1;	// IMP=0x000000010001f3cc
- (_Bool)deleteNvram:(id)arg1;	// IMP=0x000000010001f2c4
- (_Bool)restoreAppDataAttributes:(id)arg1;	// IMP=0x000000010001f12c
- (_Bool)restoreBackupAttributes:(id)arg1;	// IMP=0x000000010001ef64
- (_Bool)cloneFile:(id)arg1;	// IMP=0x000000010001ee04
- (_Bool)createDeviceManifest:(id)arg1;	// IMP=0x000000010001ebf0
- (_Bool)removeWorkDirectory:(id)arg1;	// IMP=0x000000010001eae8
- (_Bool)prepareWorkDirectory:(id)arg1;	// IMP=0x000000010001e978
- (_Bool)clearStagedDeviceAfterUpdateProcess;	// IMP=0x000000010001e790
- (_Bool)stageDeviceForUpdateProcess;	// IMP=0x000000010001e47c
- (_Bool)migratePreferencesFile:(id)arg1;	// IMP=0x000000010001e378
- (void)sendResponse:(_Bool)arg1 for:(id)arg2 from:(id)arg3;	// IMP=0x000000010001e2e0
- (void)handleXPCMessage:(id)arg1 fromConnection:(id)arg2;	// IMP=0x000000010001dfa0
- (_Bool)hasEntitlementMobileStoreDemod:(id)arg1;	// IMP=0x000000010001dda8
- (id)init;	// IMP=0x000000010001dd44

@end
