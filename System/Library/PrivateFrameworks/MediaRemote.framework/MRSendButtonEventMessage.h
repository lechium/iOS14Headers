/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@interface MRSendButtonEventMessage : MRProtocolMessage

@property (nonatomic,readonly) MRHIDButtonEvent buttonEvent; 
-(id)initWithButtonEvent:(MRHIDButtonEvent)arg1 ;
-(unsigned long long)type;
-(MRHIDButtonEvent)buttonEvent;
@end

