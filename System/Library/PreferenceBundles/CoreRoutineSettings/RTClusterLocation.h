//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKAnnotation-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSUUID, RTCluster, RTMapItem;

@interface RTClusterLocation : NSObject <MKAnnotation>
{
    NSString *_name;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    double _latitude;	// 24 = 0x18
    double _longitude;	// 32 = 0x20
    RTMapItem *_mapItem;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    RTCluster *_cluster;	// 56 = 0x38
    NSMutableDictionary *_visits;	// 64 = 0x40
    NSMutableArray *_recencySortedVisits;	// 72 = 0x48
    double _uncertainty;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000012394
@property(nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property(retain, nonatomic) NSMutableArray *recencySortedVisits; // @synthesize recencySortedVisits=_recencySortedVisits;
@property(retain, nonatomic) NSMutableDictionary *visits; // @synthesize visits=_visits;
@property(nonatomic) __weak RTCluster *cluster; // @synthesize cluster=_cluster;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) RTMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *localizedAllVisitsDescription;
@property(readonly, copy) NSString *description;
- (void)removeVisit:(id)arg1;	// IMP=0x0000000000011cb8
- (void)addVisit:(id)arg1;	// IMP=0x0000000000011bd4
- (id)initWithLocationOfInterest:(id)arg1 visitToTransitionMap:(id)arg2;	// IMP=0x0000000000011760
- (id)initWithIdentifier:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 mapItem:(id)arg4 visits:(id)arg5;	// IMP=0x0000000000011440
- (id)init;	// IMP=0x0000000000011408
- (long long)recencyCompare:(id)arg1;	// IMP=0x00000000000123f0
- (CDStruct_90e2a262)bestFitMapRect;	// IMP=0x0000000000013aac
- (id)polygon;	// IMP=0x0000000000013a14
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)overlayColor;	// IMP=0x00000000000139a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end
