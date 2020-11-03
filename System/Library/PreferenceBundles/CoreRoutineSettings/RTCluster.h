//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUUID;

@interface RTCluster : NSObject
{
    NSString *_clusterName;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    long long _clusterType;	// 24 = 0x18
    NSMutableDictionary *_clusterLocations;	// 32 = 0x20
    NSMutableArray *_recencySortedClusterLocations;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000014fd8
@property(retain, nonatomic) NSMutableArray *recencySortedClusterLocations; // @synthesize recencySortedClusterLocations=_recencySortedClusterLocations;
@property(retain, nonatomic) NSMutableDictionary *clusterLocations; // @synthesize clusterLocations=_clusterLocations;
@property(readonly, nonatomic) long long clusterType; // @synthesize clusterType=_clusterType;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)_determineClusterName:(id)arg1;	// IMP=0x0000000000014c18
@property(readonly, copy, nonatomic) NSString *localizedInformation;
- (id)description;	// IMP=0x0000000000014628
@property(readonly, copy, nonatomic) NSString *name;
- (unsigned long long)hash;	// IMP=0x00000000000145b8
- (_Bool)isEqualToCluster:(id)arg1;	// IMP=0x0000000000014518
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001445c
- (void)_updateCluster;	// IMP=0x00000000000143ec
- (void)mergeWithCluster:(id)arg1;	// IMP=0x00000000000142c4
- (void)removeClusterLocation:(id)arg1;	// IMP=0x00000000000141ec
- (void)addClusterLocation:(id)arg1;	// IMP=0x0000000000014110
- (id)initWithIdentifier:(id)arg1 clusterLocations:(id)arg2 clusterType:(long long)arg3;	// IMP=0x0000000000013dbc
- (id)initWithIdentifier:(id)arg1 clusterLocations:(id)arg2;	// IMP=0x0000000000013d5c
- (id)initWithClusterLocations:(id)arg1;	// IMP=0x0000000000013cd0
- (id)init;	// IMP=0x0000000000013c98
- (CDStruct_90e2a262)bestFitMapRect;	// IMP=0x00000000000132b0
- (long long)recencyCompare:(id)arg1;	// IMP=0x0000000000015080
- (id)clusterLocationsByRecency;	// IMP=0x0000000000015020

@end
