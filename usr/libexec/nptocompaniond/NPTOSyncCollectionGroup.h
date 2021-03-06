//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, PHFetchResult;
@protocol NPTOSyncContentProvider;

@interface NPTOSyncCollectionGroup : NSObject
{
    id <NPTOSyncContentProvider> _contentProvider;	// 8 = 0x8
    PHFetchResult *_assetCollections;	// 16 = 0x10
    NSMapTable *_collections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100019a78
@property(retain, nonatomic) NSMapTable *collections; // @synthesize collections=_collections;
@property(retain, nonatomic) PHFetchResult *assetCollections; // @synthesize assetCollections=_assetCollections;
@property(nonatomic) __weak id <NPTOSyncContentProvider> contentProvider; // @synthesize contentProvider=_contentProvider;
- (id)description;	// IMP=0x000000010001998c

@end

