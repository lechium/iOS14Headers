/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMessageBody.h>
#import <libobjc.A.dylib/MFCollectingDataConsumer.h>

@class MFBufferedDataConsumer, NSData, NSString;

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer> {

	MFBufferedDataConsumer* _consumer;
	NSData* _rawData;
	unsigned long long _count;
	BOOL _lastNewLine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)rawData;
-(id)data;
-(long long)appendData:(id)arg1 ;
-(void)done;
-(id)init;
-(unsigned long long)count;
-(BOOL)isLastCharacterNewLine;
@end
