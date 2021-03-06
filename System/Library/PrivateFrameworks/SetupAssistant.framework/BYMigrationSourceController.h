/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BYBuddyDaemonMigrationSourceClient;

@interface BYMigrationSourceController : NSObject {

	BYBuddyDaemonMigrationSourceClient* _migrationSourceClient;

}

@property (nonatomic,retain) BYBuddyDaemonMigrationSourceClient * migrationSourceClient;              //@synthesize migrationSourceClient=_migrationSourceClient - In the implementation block
-(id)init;
-(BYBuddyDaemonMigrationSourceClient *)migrationSourceClient;
-(void)launchSetupForMigration:(id)arg1 ;
-(void)setMigrationSourceClient:(BYBuddyDaemonMigrationSourceClient *)arg1 ;
-(void)setFileTransferSession:(id)arg1 ;
@end

