/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKBalloonChatItem.h>

@class NSUUID;

@interface CKTUConversationChatItem : CKBalloonChatItem

@property (nonatomic,readonly) char color; 
@property (nonatomic,__weak,readonly) NSUUID * tuConversationUUID; 
-(id)time;
-(id)sender;
-(Class)balloonViewClass;
-(void)configureBalloonView:(id)arg1 ;
-(BOOL)shouldCacheSize;
-(BOOL)isFromMe;
-(NSUUID *)tuConversationUUID;
-(char)color;
@end
