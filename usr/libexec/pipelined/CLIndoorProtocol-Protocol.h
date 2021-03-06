//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLGpsPosition, CLGpsSignalQuality;

@protocol CLIndoorProtocol <NSObject>
- (void)gpsSignalQualityAvailable:(CLGpsSignalQuality *)arg1;
- (void)gpsEstimateAvailable:(CLGpsPosition *)arg1;
- (void)outdoorLocationAvailable:(CLGpsPosition *)arg1;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocationAtLocation:(CLGpsPosition *)arg1;
@end

