/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, WBSSQLiteDatabase, NSObject, NSMutableDictionary, WBSSQLiteStatement, NSArray;

@interface SFBrowserStateSQLiteStore : NSObject {

	NSURL* _databaseURL;
	WBSSQLiteDatabase* _database;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSMutableDictionary* _tabUUIDStrings;
	NSMutableDictionary* _browserWindowDatabaseIDs;
	WBSSQLiteStatement* _cachedTabDeleteStatement;
	BOOL _generateUUIDFunctionAttached;

}

@property (nonatomic,copy,readonly) NSArray * browserWindows; 
@property (nonatomic,copy,readonly) NSArray * recentlyClosedWindows; 
-(int)_mergeAllWindowsIfNeeded;
-(BOOL)deleteTabStateWithBrowserWindowUUID:(id)arg1 andRemoveWindow:(BOOL)arg2 ;
-(BOOL)_isTabStateCached:(id)arg1 ;
-(BOOL)deleteAllSavedStates;
-(int)_createTableForTabs;
-(int)_migrateToSchemaVersion:(int)arg1 ;
-(long long)_saveBrowserWindowStateWithDictionary:(id)arg1 ;
-(void)_vacuum;
-(id)tabStatesWithBrowserWindowUUID:(id)arg1 ;
-(void)removeSavedSessionStateDataForTabsWithUUIDStrings:(id)arg1 ;
-(void)regenerateTabUUIDsForDeviceRestoration;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(void)dealloc;
-(void)_updateBrowserWindowStateWithDictionary:(id)arg1 ;
-(long long)_saveBrowserWindowStateWithData:(id)arg1 ;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(int)_createFreshDatabaseSchema;
-(int)_migrateToSchemaVersion_2;
-(void)saveTabStateWithDictionary:(id)arg1 ;
-(NSArray *)recentlyClosedWindows;
-(void)updateTabWithTabStateData:(id)arg1 ;
-(BOOL)updateSceneID:(id)arg1 ;
-(void)readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setDatabaseID:(long long)arg1 browserWindow:(id)arg2 ;
-(int)_recoverFromDatabaseInconsistencyFromSchemaVersion3Migration;
-(BOOL)_updateTabStateWithData:(id)arg1 ;
-(BOOL)_checkDatabaseIntegrity;
-(id)init;
-(void)closeDatabase;
-(void)_openDatabaseAndCheckIntegrity:(BOOL)arg1 ;
-(long long)_databaseIDForBrowserWindow:(id)arg1 ;
-(id)_sqliteStatementForTabDeleting;
-(void)removeTabWithTabData:(id)arg1 ;
-(int)_migrateToSchemaVersion_5;
-(void)deleteAllRecentlyClosedWindows;
-(BOOL)_isDatabaseOpen;
-(NSArray *)browserWindows;
-(void)_updateOrInsertTabStateWithData:(id)arg1 ;
-(id)readSavedSessionStateDataForTabWithUUIDString:(id)arg1 ;
-(int)_migrateToSchemaVersion_4;
-(id)tabStateDataForUUID:(id)arg1 ;
-(int)_migrateToSchemaVersion_3;
-(id)_readSavedSessionStateDataForTabWithUUIDString:(id)arg1 ;
-(void)_removeSavedSessionStateDataForTabsWithUUIDStrings:(id)arg1 ;
-(void)_insertTabStateWithData:(id)arg1 ;
-(int)_createTableForTabSession;
-(void)_cacheUUIDForTabStateData:(id)arg1 ;
-(void)checkPointWriteAheadLog;
-(void)mergeAllWindows;
-(void)_regenerateTabUUIDsForDeviceRestoration;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)_updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2 ;
-(void)setSecureDeleteEnabled:(BOOL)arg1 ;
-(void)updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2 ;
-(void)_migrateFromLegacyPlistIfNeeded;
-(void)_migrateFromLegacyPlistWithPath:(id)arg1 ;
-(id)_tabUUIDsInWindow:(id)arg1 ;
-(int)_schemaVersion;
-(void)_readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_tabStateDataForUUID:(id)arg1 ;
-(void)updateBrowserWindowStateWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_closeDatabase;
@end

