/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString, WADevicePlatform, WAOsInstallVariant;

@interface WADeviceData : NSObject <AADataEventType> {

	NSString* _deviceModel;
	WADevicePlatform* _devicePlatform;
	WAOsInstallVariant* _osInstallVariant;
	NSString* _osVersion;

}

@property (nonatomic,readonly) NSString * deviceModel;                             //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) WADevicePlatform * devicePlatform;                  //@synthesize devicePlatform=_devicePlatform - In the implementation block
@property (nonatomic,readonly) WAOsInstallVariant * osInstallVariant;              //@synthesize osInstallVariant=_osInstallVariant - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                               //@synthesize osVersion=_osVersion - In the implementation block
+(id)dataName;
-(id)toDict;
-(NSString *)deviceModel;
-(NSString *)osVersion;
-(id)initWithDeviceModel:(id)arg1 devicePlatform:(id)arg2 osInstallVariant:(id)arg3 osVersion:(id)arg4 ;
-(WAOsInstallVariant *)osInstallVariant;
-(WADevicePlatform *)devicePlatform;
@end

