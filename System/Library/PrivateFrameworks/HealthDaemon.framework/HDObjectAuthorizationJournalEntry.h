/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSArray;

@interface HDObjectAuthorizationJournalEntry : HDJournalEntry {

	NSArray* _records;
	double _modificationDate;
	long long _syncProvenance;

}

@property (nonatomic,retain) NSArray * records;                     //@synthesize records=_records - In the implementation block
@property (assign,nonatomic) double modificationDate;               //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) long long syncProvenance;              //@synthesize syncProvenance=_syncProvenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)setModificationDate:(double)arg1 ;
-(double)modificationDate;
-(void)setRecords:(NSArray *)arg1 ;
-(NSArray *)records;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)syncProvenance;
-(void)setSyncProvenance:(long long)arg1 ;
@end
