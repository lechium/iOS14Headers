/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriKitInvocation.framework/SiriKitInvocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SKIMessagesInvocation : NSObject
+(id)beginSiriRequestForApp:(id)arg1 ;
+(id)composeNewMessageRequestToContact:(id)arg1 phoneNumber:(id)arg2 emailAddress:(id)arg3 inApp:(id)arg4 ;
+(id)composeNewMessageRequestInApp:(id)arg1 ;
+(id)readMessagesRequestFromConversationIdentifier:(id)arg1 inApp:(id)arg2 ;
+(id)readMessagesRequestFromNotificationIdentifier:(id)arg1 fromApp:(id)arg2 ;
+(id)composeReplyRequestToConversationIdentifier:(id)arg1 inApp:(id)arg2 ;
+(id)makeParameterMetadataForIntent:(id)arg1 ;
+(id)makeParameterMetadataForParameterNamed:(id)arg1 ;
+(id)announceMessagesRequestFromNotificationIdentifier:(id)arg1 fromApp:(id)arg2 ;
@end
