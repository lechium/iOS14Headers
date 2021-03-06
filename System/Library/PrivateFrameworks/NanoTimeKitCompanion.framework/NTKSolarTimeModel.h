/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation, NSDate, GEOAlmanac;

@interface NTKSolarTimeModel : NSObject {

	BOOL _usePlaceholderData;
	BOOL _dependentValuesNeedUpdate;
	CLLocation* _referenceLocation;
	NSDate* _referenceDate;
	NSDate* _startDateForReferenceDate;
	NSDate* _endDateForReferenceDate;
	NSDate* _localSolarMidnightDate;
	double _effectiveSolarDayLength;
	GEOAlmanac* _sunriseSunsetSolarAlmanac;
	GEOAlmanac* _dawnDuskSolarAlmanac;

}

@property (nonatomic,retain) NSDate * referenceDate;                              //@synthesize referenceDate=_referenceDate - In the implementation block
@property (nonatomic,retain) NSDate * startDateForReferenceDate;                  //@synthesize startDateForReferenceDate=_startDateForReferenceDate - In the implementation block
@property (nonatomic,retain) NSDate * endDateForReferenceDate;                    //@synthesize endDateForReferenceDate=_endDateForReferenceDate - In the implementation block
@property (nonatomic,retain) NSDate * localSolarMidnightDate;                     //@synthesize localSolarMidnightDate=_localSolarMidnightDate - In the implementation block
@property (assign,nonatomic) double effectiveSolarDayLength;                      //@synthesize effectiveSolarDayLength=_effectiveSolarDayLength - In the implementation block
@property (assign,nonatomic) BOOL dependentValuesNeedUpdate;                      //@synthesize dependentValuesNeedUpdate=_dependentValuesNeedUpdate - In the implementation block
@property (nonatomic,retain) GEOAlmanac * sunriseSunsetSolarAlmanac;              //@synthesize sunriseSunsetSolarAlmanac=_sunriseSunsetSolarAlmanac - In the implementation block
@property (nonatomic,retain) GEOAlmanac * dawnDuskSolarAlmanac;                   //@synthesize dawnDuskSolarAlmanac=_dawnDuskSolarAlmanac - In the implementation block
@property (nonatomic,retain) CLLocation * referenceLocation;                      //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (assign,nonatomic) BOOL usePlaceholderData;                             //@synthesize usePlaceholderData=_usePlaceholderData - In the implementation block
-(CLLocation *)referenceLocation;
-(void)setReferenceLocation:(CLLocation *)arg1 ;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(NSDate *)referenceDate;
-(id)init;
-(NSDate *)startDateForReferenceDate;
-(GEOAlmanac *)dawnDuskSolarAlmanac;
-(GEOAlmanac *)sunriseSunsetSolarAlmanac;
-(double)percentageThroughPeriodForDate:(id)arg1 ;
-(id)dateForPercentageThroughPeriod:(double)arg1 ;
-(id)ntkCacheableKey;
-(id)initWithReferenceDate:(id)arg1 referenceLocation:(id)arg2 ;
-(void)_updateDependentValues;
-(NSDate *)endDateForReferenceDate;
-(double)percentageThroughPeriodInCurrentSolarDayForDate:(id)arg1 ;
-(id)normalizeDateIntervalForDate:(id)arg1 ;
-(void)setStartDateForReferenceDate:(NSDate *)arg1 ;
-(void)setEndDateForReferenceDate:(NSDate *)arg1 ;
-(void)setLocalSolarMidnightDate:(NSDate *)arg1 ;
-(void)setEffectiveSolarDayLength:(double)arg1 ;
-(void)setDependentValuesNeedUpdate:(BOOL)arg1 ;
-(BOOL)includesDate:(id)arg1 ;
-(double)percentageThroughPeriodForIdealizedTimeInCurrentSolarDay;
-(void)updateModelWithDate:(id)arg1 ;
-(void)updateForTimeZoneChange;
-(void)setUsePlaceholderData:(BOOL)arg1 ;
-(NSDate *)localSolarMidnightDate;
-(double)effectiveSolarDayLength;
-(BOOL)usePlaceholderData;
-(BOOL)dependentValuesNeedUpdate;
-(void)setSunriseSunsetSolarAlmanac:(GEOAlmanac *)arg1 ;
-(void)setDawnDuskSolarAlmanac:(GEOAlmanac *)arg1 ;
@end

