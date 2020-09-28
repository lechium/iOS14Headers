//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MAGNamedFilterSet, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MAGFilterManager : NSObject
{
    NSArray *_availableFilterSets;	// 8 = 0x8
    NSMutableArray *_currentNamedFilterSetListenerBlocks;	// 16 = 0x10
    NSMutableArray *_filterSetListenerBlocks;	// 24 = 0x18
    MAGNamedFilterSet *_currentFilterSet;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100008910
- (void).cxx_destruct;	// IMP=0x0000000100009970
@property(retain, nonatomic) MAGNamedFilterSet *currentFilterSet; // @synthesize currentFilterSet=_currentFilterSet;
- (id)subscribeToFilterSetChangesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000098dc
- (void)_unregisterFilterSetChangeListenerBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000989c
- (void)_unregisterCurrentFilterSetChangeListenerBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000985c
- (id)subscribeToCurrentFilterSetChangesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000097d0
- (id)filterSetForFilterIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100009654
@property(nonatomic) double brightness;
@property(nonatomic) double contrast;
@property(nonatomic) _Bool inverted;
- (id)availableFilterSets;	// IMP=0x0000000100009010
- (void)_broadcastFilterSetChangedForAllFilterSets;	// IMP=0x0000000100008e64
- (void)_broadcastCurrentFilterSetChanges;	// IMP=0x0000000100008d54
- (id)init;	// IMP=0x00000001000089b4

@end
