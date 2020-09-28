/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, NSDictionary, NSString, SAClientUserActivity;

@interface SAActivityObject : SADomainObject

@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * streamType; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,retain) SAClientUserActivity * userActivity; 
@property (nonatomic,copy) NSString * visibility; 
+(id)activityObject;
+(id)activityObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAClientUserActivity *)userActivity;
-(id)encodedClassName;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setVisibility:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSDictionary *)metadata;
-(NSString *)visibility;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)endDate;
-(NSString *)type;
-(NSString *)streamType;
-(void)setUserActivity:(SAClientUserActivity *)arg1 ;
-(void)setStreamType:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
@end
