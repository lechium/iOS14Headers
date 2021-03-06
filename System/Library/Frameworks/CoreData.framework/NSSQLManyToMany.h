/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLRelationship.h>

@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship {

	NSString* _correlationTableName;
	NSString* _columnName;
	NSString* _orderColumnName;

}
-(id)correlationTableName;
-(id)columnName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setColumnName:(id)arg1 ;
-(BOOL)isReflexive;
-(void)dealloc;
-(BOOL)isMaster;
-(id)orderColumnName;
-(void)_setInverseManyToMany:(id)arg1 ;
-(unsigned char)orderColumnSQLType;
-(id)inverseManyToMany;
-(void)_setCorrelationTableName:(id)arg1 ;
-(id)inverseOrderColumnName;
-(unsigned char)columnSQLType;
-(void)_setOrderColumnName:(id)arg1 ;
-(id)inverseColumnName;
-(BOOL)isTableSchemaEqual:(id)arg1 ;
@end

