//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface UsageMediaCollection : NSObject
{
    NSMutableArray *_items;	// 8 = 0x8
    NSMutableArray *_itemSizes;	// 16 = 0x10
    _Bool _grouped;	// 24 = 0x18
    float _totalSize;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000002544
@property(nonatomic) float totalSize; // @synthesize totalSize=_totalSize;
@property(copy, nonatomic) NSArray *itemSizes; // @synthesize itemSizes=_itemSizes;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic, getter=isGrouped) _Bool grouped; // @synthesize grouped=_grouped;
- (void)sortItemsByMediaKey:(id)arg1;	// IMP=0x0000000000002140
- (void)removeItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000020b8

@end

