/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray, SACFAbstractClientCommand;

@interface SACFSignal : SADomainCommand

@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * flowScriptHint; 
@property (nonatomic,copy) NSArray * scriptIdentifiers; 
@property (nonatomic,retain) SACFAbstractClientCommand * signalPayload; 
+(id)signal;
+(id)signalWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSArray *)scriptIdentifiers;
-(void)setScriptIdentifiers:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(NSString *)domain;
-(NSString *)flowScriptHint;
-(void)setFlowScriptHint:(NSString *)arg1 ;
-(SACFAbstractClientCommand *)signalPayload;
-(void)setSignalPayload:(SACFAbstractClientCommand *)arg1 ;
-(BOOL)mutatingCommand;
-(void)setDomain:(NSString *)arg1 ;
@end
