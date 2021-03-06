//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSViewController.h>

#import "CRHomeScreenDelegate-Protocol.h"

@class CRHomeScreenManager, CRHomeScreenPersistenceManager, CRPairedVehicleManager, CRVehicle, NSString, UITableViewController;

@interface CRHomeScreenLayoutController : PSViewController <CRHomeScreenDelegate>
{
    CRVehicle *_vehicle;	// 32 = 0x20
    CRHomeScreenManager *_homeScreenManager;	// 40 = 0x28
    CRHomeScreenPersistenceManager *_persistenceManager;	// 48 = 0x30
    UITableViewController *_tableViewController;	// 56 = 0x38
    CRPairedVehicleManager *_vehicleManager;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000b87c
@property(retain, nonatomic) CRPairedVehicleManager *vehicleManager; // @synthesize vehicleManager=_vehicleManager;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(retain, nonatomic) CRHomeScreenPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
@property(retain, nonatomic) CRHomeScreenManager *homeScreenManager; // @synthesize homeScreenManager=_homeScreenManager;
@property(retain, nonatomic) CRVehicle *vehicle; // @synthesize vehicle=_vehicle;
- (void)_updateSectionContentInset;	// IMP=0x000000000000b584
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x000000000000b57c
- (_Bool)shouldReloadSpecifiersOnResume;	// IMP=0x000000000000b574
- (void)homeScreenManager:(id)arg1 didUpdateIcon:(id)arg2 visible:(_Bool)arg3;	// IMP=0x000000000000b568
- (void)resetVehicleApplications;	// IMP=0x000000000000b29c
- (void)_resetVehicleApplications;	// IMP=0x000000000000b09c
- (void)_saveVehicleApplications;	// IMP=0x000000000000ad18
- (void)_popIfVisible;	// IMP=0x000000000000ac68
- (_Bool)shouldAutorotate;	// IMP=0x000000000000ac60
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000ac10
- (void)viewDidLayoutSubviews;	// IMP=0x000000000000abc0
- (void)viewDidLoad;	// IMP=0x000000000000a4f4
- (id)init;	// IMP=0x000000000000a3b4
- (void)dealloc;	// IMP=0x000000000000a33c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

