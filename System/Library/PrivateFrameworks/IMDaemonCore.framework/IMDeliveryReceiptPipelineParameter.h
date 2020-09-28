/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDeliveryReceiptProcessingParameter.h>
#import <IMDaemonCore/IMMessageFromStorageParameter.h>

@class NSString, NSNumber, NSArray, IMDChat;

@interface IMDeliveryReceiptPipelineParameter : NSObject <IMDeliveryReceiptProcessingParameter, IMMessageFromStorageParameter> {

	BOOL _isFromStorage;
	BOOL _isLastFromStorage;
	NSString* _GUID;
	NSNumber* _timestamp;
	NSArray* _messageItems;
	IMDChat* _chat;

}

@property (getter=UID,nonatomic,copy) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL isFromStorage;                    //@synthesize isFromStorage=_isFromStorage - In the implementation block
@property (assign,nonatomic) BOOL isLastFromStorage;                //@synthesize isLastFromStorage=_isLastFromStorage - In the implementation block
@property (nonatomic,retain) NSArray * messageItems;                //@synthesize messageItems=_messageItems - In the implementation block
@property (nonatomic,retain) IMDChat * chat;                        //@synthesize chat=_chat - In the implementation block
-(IMDChat *)chat;
-(NSNumber *)timestamp;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(void)setChat:(IMDChat *)arg1 ;
-(NSString *)GUID;
-(id)description;
-(BOOL)isFromStorage;
-(BOOL)isLastFromStorage;
-(void)setIsFromStorage:(BOOL)arg1 ;
-(void)setIsLastFromStorage:(BOOL)arg1 ;
-(NSArray *)messageItems;
-(void)setMessageItems:(NSArray *)arg1 ;
-(id)initWithBD:(id)arg1 ;
@end
