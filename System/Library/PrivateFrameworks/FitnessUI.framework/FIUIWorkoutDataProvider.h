/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthStore, NSMutableDictionary, NSMutableArray, HKAnchoredObjectQuery, NSCalendar, NSDate;

@interface FIUIWorkoutDataProvider : NSObject {

	HKHealthStore* _healthStore;
	NSMutableDictionary* _workoutsByDay;
	NSMutableArray* _updateHandlers;
	HKAnchoredObjectQuery* _currentWorkoutAnchoredObjectQuery;
	NSCalendar* _gregorianCalendar;
	NSCalendar* _currentCalendar;
	NSDate* _retryDate;

}
-(void)_timeZoneDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_commonInit;
-(id)initWithHealthStore:(id)arg1 ;
-(void)stopFetching;
-(void)addUpdateHandler:(/*^block*/id)arg1 ;
-(void)startFetchingFromDate:(id)arg1 ;
-(id)allWorkouts;
-(void)_fetchAllWorkoutsFromDate:(id)arg1 ;
-(void)_retryQueryOnDidBecomeActiveWithDate:(id)arg1 ;
-(void)_handleAddedSamples:(id)arg1 ;
-(void)_runUpdateHandlers;
-(void)_handleRemovedObjects:(id)arg1 ;
-(void)_retryQuery:(id)arg1 ;
-(BOOL)hasWorkouts;
-(id)workoutsForDay:(id)arg1 ;
@end

