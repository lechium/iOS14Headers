/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, TUConversation, NSUUID, NSDate;

@interface IMTUConversationChatItem : IMTranscriptChatItem {

	IMHandle* _conversationInitiator;

}

@property (nonatomic,__weak,readonly) TUConversation * tuConversation; 
@property (nonatomic,readonly) NSUUID * tuConversationUUID; 
@property (nonatomic,readonly) IMHandle * conversationInitiator;                    //@synthesize conversationInitiator=_conversationInitiator - In the implementation block
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) NSDate * time; 
-(Class)__ck_chatItemClass;
-(NSDate *)time;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)activeCall;
-(IMHandle *)conversationInitiator;
-(BOOL)canDelete;
-(BOOL)isFromMe;
-(TUConversation *)tuConversation;
-(NSUUID *)tuConversationUUID;
-(id)_initWithItem:(id)arg1 conversationInitiator:(id)arg2 ;
@end

