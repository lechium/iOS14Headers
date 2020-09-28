/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface HKFeatureAvailabilityInternalSettingsConfiguration : NSObject {

	NSString* _featureIdentifier;
	NSString* _userDefaultsDomain;
	NSString* _userDefaultsKey;
	unsigned long long _options;
	NSArray* _samplesTypesToDelete;

}

@property (nonatomic,copy) NSString * featureIdentifier;                //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,copy) NSString * userDefaultsDomain;               //@synthesize userDefaultsDomain=_userDefaultsDomain - In the implementation block
@property (nonatomic,copy) NSString * userDefaultsKey;                  //@synthesize userDefaultsKey=_userDefaultsKey - In the implementation block
@property (assign,nonatomic) unsigned long long options;                //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSArray * samplesTypesToDelete;              //@synthesize samplesTypesToDelete=_samplesTypesToDelete - In the implementation block
-(void)setFeatureIdentifier:(NSString *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(NSString *)userDefaultsKey;
-(void)setUserDefaultsKey:(NSString *)arg1 ;
-(NSString *)featureIdentifier;
-(id)initWithFeatureIdentifier:(id)arg1 userDefaultsDomain:(id)arg2 userDefaultsKey:(id)arg3 options:(unsigned long long)arg4 samplesTypesToDelete:(id)arg5 ;
-(BOOL)showFeatureEnable;
-(BOOL)syncToWatch;
-(BOOL)requireReboot;
-(NSString *)userDefaultsDomain;
-(void)setUserDefaultsDomain:(NSString *)arg1 ;
-(NSArray *)samplesTypesToDelete;
-(void)setSamplesTypesToDelete:(NSArray *)arg1 ;
@end
