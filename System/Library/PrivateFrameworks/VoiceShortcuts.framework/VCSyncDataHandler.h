/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCSyncDataHandling.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSArray, NSString;

@interface VCSyncDataHandler : NSObject <VCSyncDataHandling> {

	NSHashTable* _servicesTable;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSHashTable * servicesTable;                     //@synthesize servicesTable=_servicesTable - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * services; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)messageType;
+(Class)changeClass;
-(BOOL)deleteSyncedData:(id*)arg1 ;
-(NSArray *)services;
-(id)unsyncedChangesForSyncService:(id)arg1 metadata:(id*)arg2 error:(id*)arg3 ;
-(BOOL)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)requestSync;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)requestFullResync;
-(BOOL)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(BOOL)resetSyncStateForService:(id)arg1 error:(id*)arg2 ;
-(void)registerSyncService:(id)arg1 ;
-(void)deregisterSyncService:(id)arg1 ;
-(NSHashTable *)servicesTable;
@end

