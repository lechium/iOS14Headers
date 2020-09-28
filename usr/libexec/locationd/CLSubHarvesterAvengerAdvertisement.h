//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPAdvertisement;

@interface CLSubHarvesterAvengerAdvertisement : NSObject
{
    _Bool _observedDuringAggressiveScan;	// 8 = 0x8
    _Bool _requiresImmediateDelivery;	// 9 = 0x9
    SPAdvertisement *_advertisement;	// 16 = 0x10
    double _maxActivityBasedSpeedSinceAdvertisement;	// 24 = 0x18
    long long _type;	// 32 = 0x20
}

@property(nonatomic) _Bool requiresImmediateDelivery; // @synthesize requiresImmediateDelivery=_requiresImmediateDelivery;
@property(readonly, nonatomic) _Bool observedDuringAggressiveScan; // @synthesize observedDuringAggressiveScan=_observedDuringAggressiveScan;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double maxActivityBasedSpeedSinceAdvertisement; // @synthesize maxActivityBasedSpeedSinceAdvertisement=_maxActivityBasedSpeedSinceAdvertisement;
@property(readonly, retain, nonatomic) SPAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (void)dealloc;	// IMP=0x00000001006d07f4
- (id)initWithAdvertisement:(id)arg1 maxActivityBasedSpeedSinceAdvertisement:(double)arg2 observedDuringAggressiveScan:(_Bool)arg3;	// IMP=0x00000001006d072c

@end
