/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDPersistenceDatabaseConnection, EFSQLSchema;

@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject {

	EDPersistenceDatabaseConnection* _connection;

}

@property (nonatomic,retain) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) EFSQLSchema * schema; 
-(EFSQLSchema *)schema;
-(BOOL)performMigrationStep;
-(id)initWithSQLiteConnection:(id)arg1 ;
-(id)messagesTableStubSchema;
-(id)mailboxesTableStubSchema;
-(id)serverMessagesTableSchema;
-(id)serverLabelsTableSchema;
-(id)localMessageActionsTableSchema;
-(id)actionMessagesTableSchema;
-(id)actionLabelsTableSchema;
-(id)actionFlagsTableSchema;
-(EDPersistenceDatabaseConnection *)connection;
-(void)setConnection:(EDPersistenceDatabaseConnection *)arg1 ;
@end

