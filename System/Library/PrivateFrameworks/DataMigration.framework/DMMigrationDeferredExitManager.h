/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DMMigrationDeferredExitManager : NSObject
+(id)_serialQueue;
-(void)_exitClean;
-(id)_deferralDuration;
-(void)migrationDidStart;
-(void)migrationDidEnd;
-(void)deferExitWithConnection:(id)arg1 ;
-(void)cancelDeferredExitWithConnection:(id)arg1 ;
-(void)_resetGlobalState;
-(BOOL)_isDeferringExit;
@end
