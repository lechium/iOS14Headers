/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface HLPAnalyticsEvent : NSObject

@property (readonly) NSString * eventName; 
@property (readonly) NSDictionary * caRepresentation; 
+(id)event;
-(void)log;
-(NSString *)eventName;
-(NSDictionary *)caRepresentation;
@end
