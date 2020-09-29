/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:25 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class HFAccessorySettingsEntity, NSString;


@protocol HFHomeKitSettingItemProtocol <HFHomeKitItemProtocol>
@property (nonatomic,readonly) id<HFHomeKitSettingsVendor> homeKitSettingsVendor; 
@property (nonatomic,readonly) HFAccessorySettingsEntity * entity; 
@property (nonatomic,readonly) NSString * settingKeyPath; 
@required
-(HFAccessorySettingsEntity *)entity;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(NSString *)settingKeyPath;

@end
