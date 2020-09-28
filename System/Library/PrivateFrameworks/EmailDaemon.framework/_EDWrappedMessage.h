/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EMMessage;

@interface _EDWrappedMessage : NSObject {

	long long _databaseID;
	EMMessage* _message;

}

@property (nonatomic,readonly) EMMessage * message;               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
-(long long)databaseID;
-(EMMessage *)message;
-(id)initWithMessage:(id)arg1 databaseID:(long long)arg2 ;
@end
