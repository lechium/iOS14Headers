//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLPeopleDensityMediumSignalClassifierConfig : NSObject
{
    long long _midRangRssiLowerBound;	// 8 = 0x8
    long long _midRangRssiUpperBound;	// 16 = 0x10
    unsigned long long _midRangRssiDeviceThreshold;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long midRangRssiDeviceThreshold; // @synthesize midRangRssiDeviceThreshold=_midRangRssiDeviceThreshold;
@property(readonly, nonatomic) long long midRangRssiUpperBound; // @synthesize midRangRssiUpperBound=_midRangRssiUpperBound;
@property(readonly, nonatomic) long long midRangRssiLowerBound; // @synthesize midRangRssiLowerBound=_midRangRssiLowerBound;
- (_Bool)isInMidRangeRssi:(int)arg1;	// IMP=0x00000001001cbdc8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001cbd3c
- (id)initWithRssiLowerBound:(long long)arg1 RssiUpperBound:(long long)arg2 deviceThreshold:(unsigned long long)arg3;	// IMP=0x00000001001cbccc
- (id)initWithDefaults;	// IMP=0x00000001001cbcb4

@end

