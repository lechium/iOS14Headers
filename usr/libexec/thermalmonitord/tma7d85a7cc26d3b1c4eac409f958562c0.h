//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CommonProduct.h"

@interface tma7d85a7cc26d3b1c4eac409f958562c0 : CommonProduct
{
    int _filteredBacklightCurrentLI2;	// 360 = 0x168
}

- (void)updateCoreAnalyticsInfo;	// IMP=0x0000000100019f2c
- (int *)compute2DGridTemps;	// IMP=0x0000000100019e94
- (id)getGridY;	// IMP=0x0000000100019e88
- (id)getGridX;	// IMP=0x0000000100019e7c
- (void)updateAllThermalLoad:(_Bool)arg1;	// IMP=0x00000001000199a4
- (int)arcModuleTemperature;	// IMP=0x0000000100019994
- (int)gasGaugeBatteryTemperature;	// IMP=0x0000000100019984
- (void)resetVTFilterState;	// IMP=0x0000000100019970
- (id)initProduct:(id)arg1;	// IMP=0x0000000100019918

@end

