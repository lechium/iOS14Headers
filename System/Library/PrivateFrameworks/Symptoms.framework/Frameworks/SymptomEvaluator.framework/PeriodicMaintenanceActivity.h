/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PeriodicMaintenanceActivity : NSObject {

	NSMutableArray* _activities;
	unsigned long long _nextActivityIndex;

}
+(id)sharedInstance;
+(long long)periodicActivityInterval;
+(const char*)periodicActivityID;
+(void)registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)_registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(/*^block*/id)arg3 ;
-(void)_registerPeriodicMaintenanceActivity;
-(void)_handleActivityRun:(id)arg1 ;
@end
