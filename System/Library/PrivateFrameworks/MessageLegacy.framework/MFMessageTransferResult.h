/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MFMessageTransferResult : NSObject {

	unsigned long long _resultCode;
	NSArray* _failedMessages;
	NSArray* _transferedMessages;

}

@property (nonatomic,readonly) unsigned long long resultCode;              //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,readonly) NSArray * failedMessages;                   //@synthesize failedMessages=_failedMessages - In the implementation block
@property (nonatomic,readonly) NSArray * transferedMessages;               //@synthesize transferedMessages=_transferedMessages - In the implementation block
-(id)debugDescription;
-(id)initWithResultCode:(unsigned long long)arg1 failedMessages:(id)arg2 transferedMessage:(id)arg3 ;
-(unsigned long long)resultCode;
-(NSArray *)transferedMessages;
-(NSArray *)failedMessages;
@end
