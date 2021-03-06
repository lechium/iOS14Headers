/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAppsLaunchApp : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * applicationClientIdentifier; 
@property (nonatomic,copy) NSString * executionEnvironment; 
@property (nonatomic,copy) NSString * launchId; 
+(id)launchApp;
+(id)launchAppWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)applicationClientIdentifier;
-(void)setApplicationClientIdentifier:(NSString *)arg1 ;
-(NSString *)executionEnvironment;
-(void)setExecutionEnvironment:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(NSString *)launchId;
-(void)setLaunchId:(NSString *)arg1 ;
@end

