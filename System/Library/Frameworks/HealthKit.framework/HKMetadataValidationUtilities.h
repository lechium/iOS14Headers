/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKMetadataValidationUtilities : NSObject
+(BOOL)hk_validateMetadataValueClass:(id)arg1 forKey:(id)arg2 expectedClassLookupTable:(id)arg3 error:(id*)arg4 ;
+(BOOL)hk_validateTimeZoneMetadataValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateDigitalSignatureMetadataValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateHeartRateSensorLocationMetadataValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateInsulinDeliveryReasonMetadataValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateMealTimeMetadataValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateBodyTemperatureSensorLocationMetadataValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateWeatherConditionMetadataValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateQuantityMetadataValue:(id)arg1 value:(id)arg2 compatibleUnit:(id)arg3 error:(id*)arg4 ;
+(BOOL)hk_validateSwimmingStrokeStyleMetadataValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateSwimmingLocationTypeMetadataValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateSyncIdentifierMetadataValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateSyncVersionMetadataValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateVO2MaxTestTypeMetadataValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateActivityMoveModeMetadataValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateAppleECGAlgorithmValue:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_validateDevicePlacementSideValue:(id)arg1 error:(id*)arg2 ;
@end
