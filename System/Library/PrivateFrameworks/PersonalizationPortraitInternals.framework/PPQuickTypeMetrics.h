/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PETScalarEventTracker, PETDistributionEventTracker;

@interface PPQuickTypeMetrics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PETScalarEventTracker* _frameworkErrors;
	PETDistributionEventTracker* _contactsMatches;
	PETDistributionEventTracker* _foundInAppsMatches;
	PETDistributionEventTracker* _eventsMatches;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * frameworkErrors;                       //@synthesize frameworkErrors=_frameworkErrors - In the implementation block
@property (nonatomic,retain) PETDistributionEventTracker * contactsMatches;                 //@synthesize contactsMatches=_contactsMatches - In the implementation block
@property (nonatomic,retain) PETDistributionEventTracker * foundInAppsMatches;              //@synthesize foundInAppsMatches=_foundInAppsMatches - In the implementation block
@property (nonatomic,retain) PETDistributionEventTracker * eventsMatches;                   //@synthesize eventsMatches=_eventsMatches - In the implementation block
+(id)instance;
+(id)trackerForDistribution:(id)arg1 withProperties:(id)arg2 ;
+(id)counter:(id)arg1 withProperties:(id)arg2 ;
+(id)trackerForGoal:(id)arg1 withProperties:(id)arg2 ;
+(void)frameworkError:(id)arg1 errorCode:(long long)arg2 ;
+(void)contactMatchesWithContactsCount:(unsigned long long)arg1 foundInAppsCount:(unsigned long long)arg2 ;
+(void)eventsMatches:(unsigned long long)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PETScalarEventTracker *)frameworkErrors;
-(void)setFrameworkErrors:(PETScalarEventTracker *)arg1 ;
-(PETDistributionEventTracker *)contactsMatches;
-(void)setContactsMatches:(PETDistributionEventTracker *)arg1 ;
-(PETDistributionEventTracker *)foundInAppsMatches;
-(void)setFoundInAppsMatches:(PETDistributionEventTracker *)arg1 ;
-(PETDistributionEventTracker *)eventsMatches;
-(void)setEventsMatches:(PETDistributionEventTracker *)arg1 ;
@end

