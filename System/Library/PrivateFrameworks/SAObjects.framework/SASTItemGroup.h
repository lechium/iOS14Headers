/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SASTItemGroup : SAUISnippet

@property (nonatomic,copy) NSArray * fallbackCommands; 
@property (nonatomic,copy) NSArray * templateItems; 
+(id)itemGroup;
+(id)itemGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSArray *)fallbackCommands;
-(void)setFallbackCommands:(NSArray *)arg1 ;
-(NSArray *)templateItems;
-(void)setTemplateItems:(NSArray *)arg1 ;
@end

