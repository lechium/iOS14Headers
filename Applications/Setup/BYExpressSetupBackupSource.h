//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BYExpressSetupDataSource-Protocol.h"

@class BYBackupMetadata, NSString, RestorableBackupItem;

@interface BYExpressSetupBackupSource : NSObject <BYExpressSetupDataSource>
{
    RestorableBackupItem *_backupItem;	// 8 = 0x8
    BYBackupMetadata *_backupMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000a237c
@property(retain, nonatomic) BYBackupMetadata *backupMetadata; // @synthesize backupMetadata=_backupMetadata;
- (id)siriVoiceProfileAvailabilityMetadata;	// IMP=0x00000001000a2360
- (id)locationServicesSettings;	// IMP=0x00000001000a2358
- (id)siriOptIn;	// IMP=0x00000001000a22ec
- (id)deviceAnalyticsOptIn;	// IMP=0x00000001000a22ac
- (id)appAnalyticsOptIn;	// IMP=0x00000001000a226c
- (_Bool)locationServicesOptIn;	// IMP=0x00000001000a225c
- (id)findMyPhoneOptIn;	// IMP=0x00000001000a21f0
- (id)appleID;	// IMP=0x00000001000a217c
- (id)firstName;	// IMP=0x00000001000a2108
- (id)sourceDeviceClass;	// IMP=0x00000001000a20b0
- (id)sourceDeviceName;	// IMP=0x00000001000a2058
- (_Bool)dataAvailable;	// IMP=0x00000001000a2050
- (id)initWithBackupItem:(id)arg1;	// IMP=0x00000001000a1fd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

