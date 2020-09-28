//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKExpiringCacheObject.h"

@class NSOrderedSet, NSString;

@interface GKListCacheObject : GKExpiringCacheObject
{
}

+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x000000010004c950
+ (Class)entryClass;	// IMP=0x000000010004c944
- (id)entriesPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000010004d804
- (id)entryPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000010004d678
- (id)findEntry:(CDUnknownBlockType)arg1;	// IMP=0x000000010004d488
- (void)updateEntriesWithRepresentations:(id)arg1 entryForRepresentation:(CDUnknownBlockType)arg2 reuseEntriesByIndex:(_Bool)arg3;	// IMP=0x000000010004cf64
- (void)removeEntriesMatchingPredicate:(id)arg1;	// IMP=0x000000010004cdbc
- (void)reorderEntry:(id)arg1 toIndex:(long long)arg2;	// IMP=0x000000010004cc2c
- (id)internalRepresentation;	// IMP=0x000000010004c9d4
- (void)updateSeed;	// IMP=0x000000010004c988

// Remaining properties
@property(nonatomic) _Bool detailsLoaded; // @dynamic detailsLoaded;
@property(retain, nonatomic) NSOrderedSet *entries; // @dynamic entries;
@property(retain, nonatomic) NSString *seed; // @dynamic seed;

@end
