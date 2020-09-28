/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/AMSSQLiteBinding.h>

@class AMSSQLiteConnection, NSDictionary, NSString;

@interface AMSSQLiteStatement : NSObject <AMSSQLiteBinding> {

	AMSSQLiteConnection* _connection;
	sqlite3_stmtRef _statement;
	AMSSQLiteStatement* _strongSelf;

}

@property (nonatomic,readonly) AMSSQLiteConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef sqlite3_stmt;                       //@synthesize statement=_statement - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * columnIndexByName; 
@property (getter=isReadOnly,nonatomic,readonly) BOOL readOnly; 
@property (nonatomic,copy,readonly) NSString * SQL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)finalizeStatement;
-(int)step;
-(NSString *)SQL;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 onConnection:(id)arg2 ;
-(void)bindDataCopy:(id)arg1 atPosition:(int)arg2 ;
-(BOOL)isReadOnly;
-(AMSSQLiteConnection *)connection;
-(void)bindNumber:(id)arg1 atPosition:(int)arg2 ;
-(int)clearBindings;
-(void)bindString:(id)arg1 atPosition:(int)arg2 ;
-(int)reset;
-(void)bindDictionary:(id)arg1 atPosition:(int)arg2 ;
-(void)bindURL:(id)arg1 atPosition:(int)arg2 ;
-(void)bindDouble:(double)arg1 atPosition:(int)arg2 ;
-(void)bindStringCopy:(id)arg1 atPosition:(int)arg2 ;
-(sqlite3_stmtRef)sqlite3_stmt;
-(void)bindInt64:(long long)arg1 atPosition:(int)arg2 ;
-(NSDictionary *)columnIndexByName;
-(void)bindFloat:(float)arg1 atPosition:(int)arg2 ;
-(void)bindArray:(id)arg1 atPosition:(int)arg2 ;
-(void)bindNullableString:(id)arg1 atPosition:(int)arg2 ;
-(void)bindData:(id)arg1 atPosition:(int)arg2 ;
-(void)bindNullAtPosition:(int)arg1 ;
-(void)bindInt:(int)arg1 atPosition:(int)arg2 ;
-(void)bindDate:(id)arg1 atPosition:(int)arg2 ;
@end
