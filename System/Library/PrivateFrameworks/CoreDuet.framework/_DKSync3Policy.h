/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKSync3PolicyCommonMethods.h>

@class NSDictionary, NSNumber, NSArray;

@interface _DKSync3Policy : NSObject <_DKSync3PolicyCommonMethods> {

	BOOL _syncDisabled;
	BOOL _isSingleDevice;
	BOOL _isOnPower;
	NSDictionary* _properties;
	NSNumber* _version;
	unsigned long long _triggeredSyncDelayInSeconds;
	long long _mask;
	NSArray* _sourceDevices;
	NSArray* _destinationDevices;
	NSArray* _transportPolicies;
	NSArray* _featurePolicies;

}

@property (nonatomic,retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
+(id)productVersion;
+(id)computePolicyDictionaryWithDefaultSyncPolicyDict:(id)arg1 syncPolicyOverridesDict:(id)arg2 topLevelDefaultsPolicy:(id)arg3 ;
+(id)userDefaults;
+(BOOL)cloudSyncDisabled;
+(BOOL)rapportSyncDisabled;
+(id)disabledPolicy;
+(id)configurationPlistForFilename:(id)arg1 ;
+(void)overrideDictionary:(id)arg1 withOverrides:(id)arg2 ;
+(void)addToDictionary:(id)arg1 streamNamesToAlwaysSync:(id)arg2 ;
+(void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
+(id)syncPolicyConfigPathForFilename:(id)arg1 ;
+(id)computedPolicyDictionary;
+(void)fillPolicyCache:(id)arg1 bySplittingPolicyDictionary:(id)arg2 ;
+(void)_possiblyAddToArray:(id)arg1 ifTransport:(long long)arg2 existsInTransports:(long long)arg3 ;
+(void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(id)init;
-(NSDictionary *)properties;
-(BOOL)_anyFeaturePropertyValueWithKey:(id)arg1 getterBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_minimumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(BOOL)arg3 ;
-(unsigned long long)_maximumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(BOOL)arg3 ;
-(unsigned long long)minimumTimeBetweenSyncsInSecondsMaximumValue;
-(id)description;
@end

