/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKRPUserDefaultsSyncProviding;
@class NSUserDefaults, NSNumber;

@interface HKRPOxygenSaturationOnboardingCache : NSObject {

	NSUserDefaults* _userDefaults;
	id<HKRPUserDefaultsSyncProviding> _userDefaultsSyncProvider;

}

@property (nonatomic,copy) NSNumber * hasCompletedOnboarding; 
-(id)initWithUserDefaults:(id)arg1 userDefaultsSyncProvider:(id)arg2 ;
-(NSNumber *)hasCompletedOnboarding;
-(void)setHasCompletedOnboarding:(NSNumber *)arg1 ;
@end

