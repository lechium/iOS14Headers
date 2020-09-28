/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EFSQLColumnExpression.h>
#import <libobjc.A.dylib/EFCacheable.h>

@class EFSQLColumnExpression, NSString;

@interface EFSQLDisqualifiedColumnExpression : EFSQLColumnExpression <EFCacheable> {

	EFSQLColumnExpression* _columnExpression;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) EFSQLColumnExpression * columnExpression;              //@synthesize columnExpression=_columnExpression - In the implementation block
-(id)cachedSelf;
-(EFSQLColumnExpression *)columnExpression;
-(BOOL)isEqual:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
-(unsigned long long)hash;
@end
