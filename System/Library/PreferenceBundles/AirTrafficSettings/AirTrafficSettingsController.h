//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AirTrafficSettingsBaseController.h"

#import "AirTrafficSettingsDataSourceDelegate-Protocol.h"

@class NSString;

@interface AirTrafficSettingsController : AirTrafficSettingsBaseController <AirTrafficSettingsDataSourceDelegate>
{
    NSString *_hostIdentifier;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000007494
- (id)_headerText;	// IMP=0x00000000000070a4
- (void)_resumed:(id)arg1;	// IMP=0x0000000000007038
- (void)_suspended:(id)arg1;	// IMP=0x0000000000006fdc
- (void)_updateSyncButton:(id)arg1;	// IMP=0x0000000000006ecc
- (void)toggleSync:(id)arg1;	// IMP=0x0000000000006e5c
- (void)dataSource:(id)arg1 updatedProgress:(id)arg2;	// IMP=0x0000000000006d00
- (void)dataSource:(id)arg1 updatedSyncingState:(_Bool)arg2;	// IMP=0x0000000000006c44
- (void)dataSource:(id)arg1 updatedConnectedState:(_Bool)arg2;	// IMP=0x0000000000006b88
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000006ae0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000069d8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000676c
- (_Bool)shouldReloadSpecifiersOnResume;	// IMP=0x0000000000006764
- (id)specifiers;	// IMP=0x0000000000006594
- (void)dealloc;	// IMP=0x0000000000006418
- (id)init;	// IMP=0x00000000000062f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

