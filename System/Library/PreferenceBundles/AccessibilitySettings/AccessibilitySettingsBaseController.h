//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsListController.h>

@class AXDispatchTimer, NPSDomainAccessor;

__attribute__((visibility("hidden")))
@interface AccessibilitySettingsBaseController : AXUISettingsListController
{
    AXDispatchTimer *_coalesceTimer;	// 192 = 0xc0
    NPSDomainAccessor *_domainAccessor;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000000ed47c
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
- (void)reloadSpecifierFromID:(id)arg1;	// IMP=0x00000000000ed3a0
- (void)reloadSpecifiersFromNotification;	// IMP=0x00000000000ed324
- (void)handleHACorNoiseCancellationToggle;	// IMP=0x00000000000ed220
- (void)setGizmoPref:(id)arg1 forKey:(id)arg2 domain:(id)arg3;	// IMP=0x00000000000ed078
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000ecfa8
- (void)dealloc;	// IMP=0x00000000000ecf18
- (id)init;	// IMP=0x00000000000ece68
- (id)imageForKey:(id)arg1;	// IMP=0x00000000000ecdec

@end
