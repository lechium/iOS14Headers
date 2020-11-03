//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@interface MapsSettingBaseController : PSListController
{
    _Bool _canLocalizeLabels;	// 192 = 0xc0
    _Bool _supportsNavigation;	// 193 = 0xc1
}

@property(readonly, nonatomic) _Bool supportsNavigation; // @synthesize supportsNavigation=_supportsNavigation;
@property(readonly, nonatomic) _Bool canLocalizeLabels; // @synthesize canLocalizeLabels=_canLocalizeLabels;
- (void)contryConfigurationDidChange:(id)arg1;	// IMP=0x0000000000009984
- (void)_updateSettingsFromCurrentGeoCountryConfiguration;	// IMP=0x0000000000009904
- (void)_synchronizeNanoDefaultsForDomain:(id)arg1 key:(id)arg2 container:(id)arg3;	// IMP=0x000000000000977c
- (void)setValue:(id)arg1 forConfigKey:(CDStruct_35640fce)arg2;	// IMP=0x0000000000009590
- (void)setValue:(id)arg1 forDefaultsKey:(id)arg2 bundleID:(id)arg3 syncToNano:(_Bool)arg4;	// IMP=0x0000000000009144
- (id)valueForConfigKey:(CDStruct_35640fce)arg1;	// IMP=0x0000000000009130
- (id)valueForDefaultsKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x0000000000009048
- (id)valueForDefaultsKey:(id)arg1;	// IMP=0x0000000000009038
- (void)synchronizeSettingsUpdateViews:(id)arg1;	// IMP=0x0000000000009004
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000008fb4
- (void)dealloc;	// IMP=0x0000000000008e64
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000008cac

@end
