/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SAUIButton, SAUIAppPunchOut, NSArray, NSString;

@interface SAGuidanceGuideSnippet : SAUISnippet

@property (nonatomic,retain) SAUIButton * appPunchOutButton; 
@property (nonatomic,retain) SAUIAppPunchOut * appStorePunchOut; 
@property (nonatomic,copy) NSArray * domainSnippets; 
@property (nonatomic,copy) NSString * headerText; 
@property (nonatomic,copy) NSArray * intentEnabledAppSnippets; 
+(id)guideSnippet;
+(id)guideSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(SAUIButton *)appPunchOutButton;
-(void)setAppPunchOutButton:(SAUIButton *)arg1 ;
-(SAUIAppPunchOut *)appStorePunchOut;
-(void)setAppStorePunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSArray *)domainSnippets;
-(void)setDomainSnippets:(NSArray *)arg1 ;
-(NSArray *)intentEnabledAppSnippets;
-(void)setIntentEnabledAppSnippets:(NSArray *)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
@end
