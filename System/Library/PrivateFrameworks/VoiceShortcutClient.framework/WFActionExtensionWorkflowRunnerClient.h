/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/WFWorkflowRunnerClient.h>

@class NSDictionary;

@interface WFActionExtensionWorkflowRunnerClient : WFWorkflowRunnerClient {

	NSDictionary* _javaScriptRunners;

}

@property (nonatomic,copy) NSDictionary * javaScriptRunners;              //@synthesize javaScriptRunners=_javaScriptRunners - In the implementation block
-(id)initWithWorkflowIdentifier:(id)arg1 input:(id)arg2 javaScriptRunners:(id)arg3 ;
-(NSDictionary *)javaScriptRunners;
-(void)setJavaScriptRunners:(NSDictionary *)arg1 ;
@end
