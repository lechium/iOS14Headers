/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCloudSyncPipelineStage.h>

@class NSSet;

@interface HDCloudSyncPipelineStageRemoveSharingParticipants : HDCloudSyncPipelineStage {

	BOOL _removeAllParticipants;
	NSSet* _participantsToRemove;

}

@property (assign,nonatomic) BOOL removeAllParticipants;              //@synthesize removeAllParticipants=_removeAllParticipants - In the implementation block
@property (nonatomic,copy) NSSet * participantsToRemove;              //@synthesize participantsToRemove=_participantsToRemove - In the implementation block
-(void)main;
-(void)setParticipantsToRemove:(NSSet *)arg1 ;
-(void)setRemoveAllParticipants:(BOOL)arg1 ;
-(id)_delegateToOperationForRemoveSharingParticipants:(id)arg1 ;
-(BOOL)removeAllParticipants;
-(NSSet *)participantsToRemove;
@end

