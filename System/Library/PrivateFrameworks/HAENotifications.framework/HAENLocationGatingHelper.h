/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HAENGeoLocation, NSObject, NSDictionary, NSNumber;

@interface HAENLocationGatingHelper : NSObject {

	HAENGeoLocation* _geoLocation;
	NSObject*<OS_dispatch_queue> _updateQueue;
	NSDictionary* _regionBehavior;
	BOOL _EUVolumeLimitFlagOn;
	NSNumber* _productTypeOverride;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)update;
-(id)init;
-(BOOL)_isIPod;
-(void)updateDeviceDataDisposition;
-(void)_contryConfigurationDidChange:(id)arg1 ;
-(void)_loadRegionPlistFile;
-(BOOL)_shouldUpdateLocation:(id)arg1 ;
-(void)_updateHAENLocationGatingDeviceFlags;
-(void)_updateSampleTransient:(id)arg1 ;
-(BOOL)_validCountryCodeSource:(unsigned)arg1 ;
-(id)_readDeviceDisposition;
-(BOOL)_isHAENFeatureMandatory:(id)arg1 dataDisposition:(id)arg2 ;
-(void)_updateHAENFeatureMandatoryFlag:(id)arg1 ;
-(BOOL)_regionAndDeviceMandatesFeature:(id)arg1 ;
-(BOOL)_validDataDisposition:(id)arg1 ;
-(int)_getMGProductType;
-(void)reloadProductTypeOverride;
@end
