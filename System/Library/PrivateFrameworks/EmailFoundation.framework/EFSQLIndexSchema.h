/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EFSQLValueExpressable;
@class NSString, NSArray;

@interface EFSQLIndexSchema : NSObject {

	BOOL _unique;
	NSString* _name;
	NSString* _tableName;
	NSArray* _indexedColumns;
	id<EFSQLValueExpressable> _where;

}

@property (nonatomic,copy,readonly) NSArray * indexedColumns;                //@synthesize indexedColumns=_indexedColumns - In the implementation block
@property (nonatomic,readonly) id<EFSQLValueExpressable> where;              //@synthesize where=_where - In the implementation block
@property (nonatomic,readonly) BOOL unique;                                  //@synthesize unique=_unique - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableName;                    //@synthesize tableName=_tableName - In the implementation block
-(NSString *)tableName;
-(id)initWithTableName:(id)arg1 indexedColumns:(id)arg2 ;
-(id)definitionWithDatabaseName:(id)arg1 ;
-(BOOL)unique;
-(id)initWithTableName:(id)arg1 columnNames:(id)arg2 ;
-(id)initWithTableName:(id)arg1 columnNames:(id)arg2 where:(id)arg3 unique:(BOOL)arg4 ;
-(id)initWithName:(id)arg1 tableName:(id)arg2 indexedColumns:(id)arg3 where:(id)arg4 unique:(BOOL)arg5 ;
-(NSArray *)indexedColumns;
-(id<EFSQLValueExpressable>)where;
-(id)initWithTableName:(id)arg1 indexedColumns:(id)arg2 where:(id)arg3 unique:(BOOL)arg4 ;
-(NSString *)name;
@end

