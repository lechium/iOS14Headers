//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class CloudStorageGroupController, NSMutableArray, PSSpecifier;

@interface UsageController : PSListController
{
    CloudStorageGroupController *_cloudGroup;	// 192 = 0xc0
    NSMutableArray *_storageSpecifiers;	// 200 = 0xc8
    PSSpecifier *_storageUsedSpecifier;	// 208 = 0xd0
    PSSpecifier *_storageAvailableSpecifier;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000002076c
- (id)specifiers;	// IMP=0x0000000000020614
- (void)dealloc;	// IMP=0x00000000000205bc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000204ac
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000002043c
- (id)usageStorageSpecifiers;	// IMP=0x0000000000020118

@end
