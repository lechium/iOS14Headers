//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AirTrafficSettingsDataSource, NSDictionary;

@protocol AirTrafficSettingsDataSourceDelegate <NSObject>

@optional
- (void)dataSource:(AirTrafficSettingsDataSource *)arg1 updatedProgress:(NSDictionary *)arg2;
- (void)dataSource:(AirTrafficSettingsDataSource *)arg1 updatedSyncingState:(_Bool)arg2;
- (void)dataSource:(AirTrafficSettingsDataSource *)arg1 updatedConnectedState:(_Bool)arg2;
@end

