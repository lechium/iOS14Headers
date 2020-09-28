//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, RootNetwork;

@interface GeoTag : NSManagedObject
{
}

+ (id)getAllGeoTagsFromMOC:(id)arg1;	// IMP=0x00000001001383b0
+ (id)copyFetchRequest;	// IMP=0x00000001001380b4
+ (id)fetchRequest;	// IMP=0x00000001001493fc
- (void)updateWithLocation:(id)arg1 bssid:(id)arg2;	// IMP=0x0000000100138218
- (double)getDistanceFromLocation:(id)arg1;	// IMP=0x00000001001380e0

// Remaining properties
@property(copy, nonatomic) NSString *bssid; // @dynamic bssid;
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) RootNetwork *higherBandNetwork; // @dynamic higherBandNetwork;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) RootNetwork *lowerBandNetwork; // @dynamic lowerBandNetwork;
@property(nonatomic) int taggedCount; // @dynamic taggedCount;

@end
