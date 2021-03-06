/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSDictionary;

@interface SAMetrics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSDictionary * eventInformation; 
@property (nonatomic,copy) NSString * originalCommandId; 
@property (nonatomic,copy) NSDictionary * timings; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metrics;
+(id)metricsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)category;
-(NSDictionary *)eventInformation;
-(BOOL)requiresResponse;
-(NSDictionary *)timings;
-(void)setCategory:(NSString *)arg1 ;
-(id)_descriptionHint;
-(void)setOriginalCommandId:(NSString *)arg1 ;
-(NSString *)originalCommandId;
-(void)setEventInformation:(NSDictionary *)arg1 ;
-(void)setTimings:(NSDictionary *)arg1 ;
@end

