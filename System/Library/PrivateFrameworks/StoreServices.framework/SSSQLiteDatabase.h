/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, NSString, BKSProcessAssertion;

@interface SSSQLiteDatabase : NSObject {

	sqlite3Ref _db;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _databasePath;
	BOOL _readOnly;
	BOOL _isInTransaction;
	NSString* _protectionType;
	/*^block*/id _setupBlock;
	CFDictionaryRef _statementCache;
	BOOL _takesTaskCompletionAssertions;
	BKSProcessAssertion* _taskAssertion;
	long long _taskAssertionCount;

}

@property (assign) BOOL takesTaskCompletionAssertions; 
@property (nonatomic,copy) id setupBlock;                           //@synthesize setupBlock=_setupBlock - In the implementation block
+(void)_setTakesTaskCompletionAssertions:(BOOL)arg1 ;
+(void)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3 isCorrupt:(BOOL*)arg4 ;
+(BOOL)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
+(BOOL)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
-(int)_resetAndReopenDatabaseWithPath:(id)arg1 ;
-(BOOL)takesTaskCompletionAssertions;
-(void)_resetCorruptDatabase;
-(void)_beginTaskCompletionAssertion;
-(void)_endTaskCompletionAssertion;
-(void)endTaskCompletionAssertion;
-(void)_resetDatabaseWithPath:(id)arg1 ;
-(long long)userVersionForDatabase:(id)arg1 ;
-(id)setupBlock;
-(sqlite3_stmtRef)_statementForSQL:(id)arg1 cache:(BOOL)arg2 ;
-(int)_openDatabase;
-(void)dealloc;
-(void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)executeSQL:(id)arg1 ;
-(int)_openFlags;
-(long long)countChanges;
-(void)accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)columnName:(id)arg1 existsInTable:(id)arg2 ;
-(void)setSetupBlock:(id)arg1 ;
-(void)beginTaskCompletionAssertion;
-(BOOL)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
-(BOOL)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2 protectionType:(id)arg3 ;
-(void)dispatchBlockSync:(/*^block*/id)arg1 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)_expireBackgroundTask;
-(BOOL)setUserVersion:(long long)arg1 forDatabase:(id)arg2 ;
-(void)dispatchBlockAsync:(/*^block*/id)arg1 ;
-(BOOL)setUserVersion:(long long)arg1 ;
-(void)expireBackgroundTask;
-(void)setTakesTaskCompletionAssertions:(BOOL)arg1 ;
-(id)newDispatchSourceWithType:(dispatch_source_type_sRef)arg1 ;
-(void)_accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(long long)userVersion;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(int)_closeDatabase;
@end
