/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, NSString, NSDate;

@interface ICDeviceMigrationState : ICCloudSyncingObject

@property (nonatomic,retain) ICAccount * account; 
@property (nonatomic,retain) NSString * deviceIdentifier; 
@property (assign,nonatomic) short state; 
@property (nonatomic,retain) NSDate * stateModificationDate; 
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)deviceMigrationStateWithDeviceIdentifier:(id)arg1 account:(id)arg2 ;
+(id)newDeviceMigrationStateWithDeviceIdentifier:(id)arg1 account:(id)arg2 ;
+(id)stringFromMigrationState:(short)arg1 ;
+(id)identifierForDeviceIdentifier:(id)arg1 ;
+(id)currentDeviceMigrationStateForAccount:(id)arg1 ;
+(id)deviceMigrationStatesMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)currentDeviceMigrationStateForAccount:(id)arg1 createIfNecessary:(BOOL)arg2 ;
+(id)deviceMigrationStateWithDeviceIdentifier:(id)arg1 context:(id)arg2 ;
+(id)allDeviceMigrationStatesInContext:(id)arg1 ;
+(id)deviceMigrationStatesByAccountIDInContext:(id)arg1 ;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(BOOL)isMigrating;
-(id)recordZoneName;
-(void)deleteFromLocalDatabase;
-(id)newlyCreatedRecord;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(BOOL)isInICloudAccount;
-(id)ic_loggingValues;
-(id)cloudAccount;
-(id)recordType;
-(id)recordName;
@end

