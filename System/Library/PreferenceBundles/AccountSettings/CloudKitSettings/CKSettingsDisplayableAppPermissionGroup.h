//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKApplicationPermissionGroup, CKSettingsAppNameImage, NSArray;

@interface CKSettingsDisplayableAppPermissionGroup : NSObject
{
    NSArray *_appNameImages;	// 8 = 0x8
    CKApplicationPermissionGroup *_applicationPermissionGroup;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000009a94
@property(readonly, nonatomic) CKApplicationPermissionGroup *applicationPermissionGroup; // @synthesize applicationPermissionGroup=_applicationPermissionGroup;
@property(retain, nonatomic) NSArray *appNameImages; // @synthesize appNameImages=_appNameImages;
@property(readonly, nonatomic) CKSettingsAppNameImage *primaryAppNameImage;
- (id)initWithApplicationPermissionGroup:(id)arg1 appNameImages:(id)arg2;	// IMP=0x0000000000009884

@end
