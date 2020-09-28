/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_KSTextReplacementSyncProtocol.h>

@protocol OS_dispatch_queue, _KSTextReplacementSyncProtocol, _KSMigrationDelegate;
@class NSObject, _KSTextReplacementCKStore, _KSTextReplacementLegacyStore, NSString;

@interface _KSTextReplacementManager : NSObject <_KSTextReplacementSyncProtocol> {

	NSObject*<OS_dispatch_queue> _migrationQueue;
	BOOL _didMigrateForCurrentAccount;
	BOOL _deviceDidMigrateOnCloud;
	BOOL _didCheckMigrationOnCloud;
	_KSTextReplacementCKStore* _ckStore;
	_KSTextReplacementLegacyStore* _legacyStore;
	NSObject*<_KSTextReplacementSyncProtocol> _textReplacementStore;
	NSString* _directoryPath;
	id<_KSMigrationDelegate> _delegate;

}

@property (nonatomic,retain) _KSTextReplacementCKStore * ckStore;                                         //@synthesize ckStore=_ckStore - In the implementation block
@property (nonatomic,retain) _KSTextReplacementLegacyStore * legacyStore;                                 //@synthesize legacyStore=_legacyStore - In the implementation block
@property (nonatomic,retain) NSObject*<_KSTextReplacementSyncProtocol> textReplacementStore;              //@synthesize textReplacementStore=_textReplacementStore - In the implementation block
@property (nonatomic,copy) NSString * directoryPath;                                                      //@synthesize directoryPath=_directoryPath - In the implementation block
@property (assign,nonatomic) BOOL didMigrateForCurrentAccount;                                            //@synthesize didMigrateForCurrentAccount=_didMigrateForCurrentAccount - In the implementation block
@property (assign,nonatomic) BOOL deviceDidMigrateOnCloud;                                                //@synthesize deviceDidMigrateOnCloud=_deviceDidMigrateOnCloud - In the implementation block
@property (assign,nonatomic) BOOL didCheckMigrationOnCloud;                                               //@synthesize didCheckMigrationOnCloud=_didCheckMigrationOnCloud - In the implementation block
@property (assign,nonatomic,__weak) id<_KSMigrationDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textReplacementStoreWithTestDirectory:(id)arg1 withDelegate:(id)arg2 forceMigration:(BOOL)arg3 forceCloudKitSync:(BOOL)arg4 ;
-(NSString *)directoryPath;
-(id)initWithDirectoryPath:(id)arg1 ;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(void)checkForMigration;
-(void)pushAllLocalRecordsOnceIfNeeded;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(_KSTextReplacementLegacyStore *)legacyStore;
-(void)recordSyncStatus;
-(void)dealloc;
-(NSObject*<_KSTextReplacementSyncProtocol>)textReplacementStore;
-(BOOL)deviceDidMigrate;
-(void)setDidMigrateForCurrentAccount:(BOOL)arg1 ;
-(void)respondToMigrationCompletion;
-(void)setDidCheckMigrationOnCloud:(BOOL)arg1 ;
-(void)setDeviceDidMigrateOnCloud:(BOOL)arg1 ;
-(double)minimumUptimeRemaining;
-(void)migrateLegacyStore;
-(void)_migrateEntriesSinceDate:(id)arg1 repeatCount:(unsigned long long)arg2 ;
-(void)accountDidChange:(id)arg1 ;
-(void)setDelegate:(id<_KSMigrationDelegate>)arg1 ;
-(void)requestSync:(unsigned long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id<_KSMigrationDelegate>)delegate;
-(BOOL)didCheckMigrationOnCloud;
-(void)setLegacyStore:(_KSTextReplacementLegacyStore *)arg1 ;
-(BOOL)deviceDidMigrateOnCloud;
-(void)setTextReplacementStore:(NSObject*<_KSTextReplacementSyncProtocol>)arg1 ;
-(BOOL)didMigrateForCurrentAccount;
-(void)notifyTextReplacementDidChange;
-(_KSTextReplacementCKStore *)ckStore;
-(void)resetMigrationState;
-(void)setCkStore:(_KSTextReplacementCKStore *)arg1 ;
@end
