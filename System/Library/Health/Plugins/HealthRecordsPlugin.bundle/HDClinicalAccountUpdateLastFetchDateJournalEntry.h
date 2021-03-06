/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalAccountEntityUpdateJournalEntry.h>

@class NSDate;

@interface HDClinicalAccountUpdateLastFetchDateJournalEntry : HDClinicalAccountEntityUpdateJournalEntry {

	BOOL _wasFullFetch;
	NSDate* _lastFetchDate;

}

@property (nonatomic,copy,readonly) NSDate * lastFetchDate;              //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,readonly) BOOL wasFullFetch;                        //@synthesize wasFullFetch=_wasFullFetch - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastFetchDate;
-(id)initWithLastFetchDate:(id)arg1 wasFullFetch:(BOOL)arg2 accountIdentifier:(id)arg3 ;
-(BOOL)wasFullFetch;
@end

