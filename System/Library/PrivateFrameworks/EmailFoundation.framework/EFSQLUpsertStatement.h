/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EFSQLInsertStatement, EFSQLUpdateStatement, NSArray, NSString;

@interface EFSQLUpsertStatement : NSObject {

	EFSQLInsertStatement* _insertStatement;
	EFSQLUpdateStatement* _updateStatement;
	NSArray* _conflictTarget;

}

@property (nonatomic,readonly) id<EFSQLInsertStatementValue> insertValue; 
@property (nonatomic,readonly) id<EFSQLUpdateStatementValue> updateValue; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,copy,readonly) NSString * queryString; 
@property (nonatomic,retain) id<EFSQLValueExpressable> whereClause; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setWhereClause:(id<EFSQLValueExpressable>)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)enumerateBindingNamesAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(id<EFSQLValueExpressable>)whereClause;
-(id<EFSQLInsertStatementValue>)insertValue;
-(id)excludedColumnExpressionForColumnName:(id)arg1 ;
-(id)initWithTable:(id)arg1 conflictTarget:(id)arg2 ;
-(id<EFSQLUpdateStatementValue>)updateValue;
-(BOOL)isEmpty;
-(NSString *)queryString;
@end

