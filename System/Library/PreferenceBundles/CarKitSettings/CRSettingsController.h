//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import "CRCarPlayPreferencesDelegate-Protocol.h"
#import "CRVehicleDiscovery-Protocol.h"

@class CRCarPlayPreferences, CRPairedVehicleManager, CRRadiosAvailabilityPrompt, CRVehicleDiscoverer, NSMutableArray, NSString, UIImage;

@interface CRSettingsController : PSListController <CRCarPlayPreferencesDelegate, CRVehicleDiscovery>
{
    _Bool _suppressNextReloadForPairedVehicleChanged;	// 192 = 0xc0
    CRCarPlayPreferences *_carplayPreferences;	// 200 = 0xc8
    CRPairedVehicleManager *_vehicleManager;	// 208 = 0xd0
    CRVehicleDiscoverer *_vehicleDiscoverer;	// 216 = 0xd8
    CRRadiosAvailabilityPrompt *_radiosPowerPrompt;	// 224 = 0xe0
    NSMutableArray *_storedCarsSpecifiers;	// 232 = 0xe8
    UIImage *_headerImage;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x0000000000008c74
@property(nonatomic) _Bool suppressNextReloadForPairedVehicleChanged; // @synthesize suppressNextReloadForPairedVehicleChanged=_suppressNextReloadForPairedVehicleChanged;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(retain, nonatomic) NSMutableArray *storedCarsSpecifiers; // @synthesize storedCarsSpecifiers=_storedCarsSpecifiers;
@property(retain, nonatomic) CRRadiosAvailabilityPrompt *radiosPowerPrompt; // @synthesize radiosPowerPrompt=_radiosPowerPrompt;
@property(retain, nonatomic) CRVehicleDiscoverer *vehicleDiscoverer; // @synthesize vehicleDiscoverer=_vehicleDiscoverer;
@property(retain, nonatomic) CRPairedVehicleManager *vehicleManager; // @synthesize vehicleManager=_vehicleManager;
@property(retain, nonatomic) CRCarPlayPreferences *carplayPreferences; // @synthesize carplayPreferences=_carplayPreferences;
- (void)handleCarPlayAllowedDidChange;	// IMP=0x00000000000089ec
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000000008930
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000087a4
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000086ac
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x000000000000862c
- (void)_setSpecifier:(id)arg1 shouldShowActivity:(_Bool)arg2;	// IMP=0x000000000000854c
- (void)_updateSpecifierForVehicle:(id)arg1;	// IMP=0x000000000000833c
- (id)_specifierForIndexPath:(id)arg1;	// IMP=0x00000000000082f8
- (void)_showActivityOnOtherCarsGroup:(_Bool)arg1;	// IMP=0x000000000000821c
- (void)_updateOtherCarsGroupNameForSpecifier:(id)arg1;	// IMP=0x00000000000080d4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000008030
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000007f8c
- (id)specifiers;	// IMP=0x0000000000007190
- (_Bool)storedVehicles:(id)arg1 containsMatchForDiscoveredVehicle:(id)arg2;	// IMP=0x0000000000006f00
- (id)statusForDiscoveredVehicleSpecifier:(id)arg1;	// IMP=0x0000000000006e7c
- (id)specifierForDiscoveredVehicle:(id)arg1;	// IMP=0x0000000000006d34
- (id)statusForStoredVehicleSpecifier:(id)arg1;	// IMP=0x0000000000006d2c
- (id)specifierForStoredVehicle:(id)arg1;	// IMP=0x00000000000068bc
- (_Bool)_showsCarPlayInternalSettingsUI;	// IMP=0x0000000000006858
- (id)viewForHeaderInTableView:(id)arg1;	// IMP=0x0000000000006560
- (double)heightForHeaderInTableView:(id)arg1;	// IMP=0x0000000000006400
- (void)handlePairedVehiclesChanged:(id)arg1;	// IMP=0x0000000000006358
- (id)viewControllerPresentingPairingForVehicleDiscoverer:(id)arg1;	// IMP=0x0000000000006354
- (void)vehicleDiscoverer:(id)arg1 didRemoveVehicle:(id)arg2;	// IMP=0x000000000000616c
- (void)vehicleDiscoverer:(id)arg1 didUpdateVehicle:(id)arg2;	// IMP=0x0000000000006094
- (void)vehicleDiscoverer:(id)arg1 didDiscoverVehicle:(id)arg2;	// IMP=0x0000000000005e4c
- (void)vehicleDiscoverer:(id)arg1 changedWirelessDiscoveryState:(_Bool)arg2;	// IMP=0x0000000000005e3c
- (void)pairAccessorySpecifier:(id)arg1;	// IMP=0x0000000000005cd8
- (void)unpairVehicle:(id)arg1;	// IMP=0x0000000000005aac
- (void)pairVehicle:(id)arg1;	// IMP=0x00000000000057e0
- (void)dealloc;	// IMP=0x0000000000005738

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
