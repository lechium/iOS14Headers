/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSyncSession.h>

@class NSSet, HDCloudSyncSequenceRecord;

@interface HDCloudSyncSession : HDSyncSession {

	NSSet* _excludedSyncStores;
	HDCloudSyncSequenceRecord* _sequenceRecord;

}

@property (nonatomic,retain) HDCloudSyncSequenceRecord * sequenceRecord;              //@synthesize sequenceRecord=_sequenceRecord - In the implementation block
-(void)setSequenceRecord:(HDCloudSyncSequenceRecord *)arg1 ;
-(HDCloudSyncSequenceRecord *)sequenceRecord;
-(long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg1 ;
-(long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg1 ;
-(id)newChangeWithSyncEntityClass:(Class)arg1 ;
-(id)excludedSyncStores;
-(void)setExcludedSyncStores:(id)arg1 ;
@end
