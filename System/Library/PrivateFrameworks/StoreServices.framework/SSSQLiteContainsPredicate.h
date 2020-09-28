/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSSQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSSQLiteQuery, NSString, NSArray;

@interface SSSQLiteContainsPredicate : SSSQLitePropertyPredicate <NSCopying> {

	BOOL _negative;
	SSSQLiteQuery* _query;
	NSString* _queryProperty;
	id _values;

}

@property (getter=isNegative,nonatomic,readonly) BOOL negative;              //@synthesize negative=_negative - In the implementation block
@property (nonatomic,readonly) SSSQLiteQuery * query;                        //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSString * queryProperty;                     //@synthesize queryProperty=_queryProperty - In the implementation block
@property (nonatomic,readonly) NSArray * values;                             //@synthesize values=_values - In the implementation block
+(id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3 ;
+(id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2 ;
+(id)containsPredicateWithProperty:(id)arg1 values:(id)arg2 ;
-(SSSQLiteQuery *)query;
-(NSArray *)values;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isNegative;
-(BOOL)isEqual:(id)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(NSString *)queryProperty;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
@end
