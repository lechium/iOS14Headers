/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLCore, NSPersistentStoreRequest, NSSQLiteConnection, NSManagedObjectContext, NSError, NSException, NSQueryGenerationToken, NSNumber, NSSQLRowCache;

@interface NSSQLStoreRequestContext : NSObject {

	NSSQLCore* _sqlCore;
	NSPersistentStoreRequest* _persistentStoreRequest;
	NSSQLiteConnection* _connection;
	NSManagedObjectContext* _context;
	NSError* _error;
	NSException* _exception;
	id _result;
	NSQueryGenerationToken* _queryGeneration;
	NSNumber* _transactionID;
	BOOL _useColoredLogging;
	BOOL _useConcurrentFetching;
	BOOL _hasHistoryTracking;
	BOOL _storeIsInMemory;

}

@property (nonatomic,readonly) NSSQLCore * sqlCore; 
@property (nonatomic,retain) NSSQLiteConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType; 
@property (nonatomic,readonly) BOOL storeIsInMemory;                                           //@synthesize storeIsInMemory=_storeIsInMemory - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionID;                                       //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreRequest * persistentStoreRequest;              //@synthesize persistentStoreRequest=_persistentStoreRequest - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSError * localError;                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) int debugLogLevel; 
@property (nonatomic,readonly) BOOL useColoredLogging;                                         //@synthesize useColoredLogging=_useColoredLogging - In the implementation block
@property (nonatomic,readonly) BOOL useConcurrentFetching;                                     //@synthesize useConcurrentFetching=_useConcurrentFetching - In the implementation block
@property (nonatomic,retain) id result;                                                        //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) id exception;                                                     //@synthesize exception=_exception - In the implementation block
@property (nonatomic,readonly) NSSQLRowCache * rowCache; 
@property (nonatomic,readonly) BOOL isWritingRequest; 
@property (nonatomic,retain) NSQueryGenerationToken * queryGenerationToken; 
@property (nonatomic,readonly) BOOL shouldRegisterQueryGeneration; 
-(id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2 ;
-(NSSQLCore *)sqlCore;
-(NSSQLRowCache *)rowCache;
-(NSNumber *)transactionID;
-(void)setTransactionID:(NSNumber *)arg1 ;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(NSSQLiteConnection *)connection;
-(id)result;
-(id)newStatementWithSQLString:(id)arg1 ;
-(BOOL)useConcurrentFetching;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(void)dealloc;
-(BOOL)isWritingRequest;
-(unsigned long long)requestType;
-(void)setResult:(id)arg1 ;
-(id)exception;
-(void)setLocalError:(NSError *)arg1 ;
-(NSError *)localError;
-(BOOL)hasHistoryTracking;
-(NSManagedObjectContext *)context;
-(int)debugLogLevel;
-(void)setQueryGenerationToken:(NSQueryGenerationToken *)arg1 ;
-(NSQueryGenerationToken *)queryGenerationToken;
-(id)createNestedObjectFaultContextForObjectWithID:(id)arg1 ;
-(id)notificationSourceObject;
-(BOOL)shouldRegisterQueryGeneration;
-(BOOL)useColoredLogging;
-(BOOL)storeIsInMemory;
-(BOOL)forConflictAnalysis;
-(void)executeEpilogue;
-(BOOL)executeRequestUsingConnection:(id)arg1 ;
-(NSPersistentStoreRequest *)persistentStoreRequest;
-(void)executePrologue;
-(void)setException:(id)arg1 ;
-(void)setConnection:(NSSQLiteConnection *)arg1 ;
@end

