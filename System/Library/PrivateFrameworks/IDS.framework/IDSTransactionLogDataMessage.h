/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSTransactionLogMessage.h>

@class NSData;

@interface IDSTransactionLogDataMessage : IDSTransactionLogMessage {

	NSData* _dataValue;

}

@property (nonatomic,readonly) NSData * dataValue;              //@synthesize dataValue=_dataValue - In the implementation block
-(NSData *)dataValue;
-(id)initWithData:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

