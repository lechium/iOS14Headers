/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SALocation, NSString, NSArray;

@interface SAAnswerSearch : SADomainCommand

@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,copy) NSString * miscQuestion; 
@property (nonatomic,copy) NSString * placeAttribute; 
@property (nonatomic,copy) NSArray * product; 
@property (nonatomic,copy) NSString * timeQuestion; 
@property (nonatomic,copy) NSString * verbType; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSArray *)product;
-(id)groupIdentifier;
-(SALocation *)address;
-(BOOL)requiresResponse;
-(void)setAddress:(SALocation *)arg1 ;
-(void)setProduct:(NSArray *)arg1 ;
-(NSString *)verbType;
-(NSString *)miscQuestion;
-(void)setMiscQuestion:(NSString *)arg1 ;
-(NSString *)placeAttribute;
-(void)setPlaceAttribute:(NSString *)arg1 ;
-(NSString *)timeQuestion;
-(void)setTimeQuestion:(NSString *)arg1 ;
-(void)setVerbType:(NSString *)arg1 ;
-(void)setAttribute:(NSString *)arg1 ;
-(NSString *)attribute;
@end

