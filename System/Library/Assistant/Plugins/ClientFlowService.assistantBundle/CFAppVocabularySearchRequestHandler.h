/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupAppVocabularySearchRequest.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface CFAppVocabularySearchRequestHandler : SAIntentGroupAppVocabularySearchRequest <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)stringType;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
@end
