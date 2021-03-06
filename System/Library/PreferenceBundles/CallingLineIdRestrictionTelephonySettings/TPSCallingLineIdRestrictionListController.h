//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSListController.h>

#import "TPSCallingLineIdRestrictionControllerDelegate-Protocol.h"

@class NSString, PSSpecifier, TPSCallingLineIdRestrictionController;

@interface TPSCallingLineIdRestrictionListController : TPSListController <TPSCallingLineIdRestrictionControllerDelegate>
{
    TPSCallingLineIdRestrictionController *_callingLineIdRestrictionController;	// 192 = 0xc0
    PSSpecifier *_mainSwitchSpecifier;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000000024b8
- (void)callingLineIdController:(id)arg1 didChangeState:(long long)arg2 error:(id)arg3;	// IMP=0x00000000000024ac
- (void)configureCell:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x000000000000233c
- (void)configureCell:(id)arg1;	// IMP=0x000000000000229c
- (void)setMainSwitchOn:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000002144
- (id)mainSwitchOn:(id)arg1;	// IMP=0x00000000000020d0
@property(readonly, nonatomic) PSSpecifier *mainSwitchSpecifier; // @synthesize mainSwitchSpecifier=_mainSwitchSpecifier;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000001f80
- (id)specifiers;	// IMP=0x0000000000001e94
@property(readonly, nonatomic) TPSCallingLineIdRestrictionController *callingLineIdRestrictionController; // @synthesize callingLineIdRestrictionController=_callingLineIdRestrictionController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

