//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSCloudHistoryConfiguration.h>

@class NSArray, NSDictionary;

@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration
{
    NSArray *_assetsSortedByVersionNumber;	// 8 = 0x8
    NSDictionary *_remoteConfigurationDictionary;	// 16 = 0x10
    _Bool _fetchedAssetData;	// 24 = 0x18
}

+ (id)sharedConfiguration;	// IMP=0x0000000100069b60
- (void).cxx_destruct;	// IMP=0x000000010006a664
- (_Bool)shouldUseLongLivedOperationsToSaveRecords;	// IMP=0x000000010006a638
- (void)_reloadConfigurationDataIfNecessary;	// IMP=0x000000010006a398
- (id)_cloudConfigurationAssetsSortedByVersionNumber;	// IMP=0x000000010006a104
- (id)remoteConfiguration;	// IMP=0x0000000100069d18
- (id)platformBuiltInConfiguration;	// IMP=0x0000000100069c54
- (id)init;	// IMP=0x0000000100069bcc

@end

