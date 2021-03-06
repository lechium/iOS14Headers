/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject {

	CMNatalimeterInternal* _internal;

}

@property (nonatomic,readonly) CMNatalimeterInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)setUserInfo:(id)arg1 error:(id*)arg2 ;
+(id)defaultUserProfile;
+(BOOL)isNatalimeterAvailable;
+(BOOL)resetCalibrationDataWithError:(id*)arg1 ;
+(id)userProfile;
+(double)briskMinuteMetsThreshold;
+(double)computeTimeToActiveCalories:(id)arg1 user:(id)arg2 workoutType:(long long)arg3 ;
+(id)computeRestingCaloriesAtRate:(unsigned long long)arg1 user:(id)arg2 duration:(double)arg3 ;
+(id)maxNatalieEntries;
+(double)activeMetsThreshold;
+(BOOL)setUserProfile:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startAbsoluteNatalimetryDataUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopAbsoluteNatalimetryDataUpdates;
-(id)init;
-(CMNatalimeterInternal *)_internal;
@end

