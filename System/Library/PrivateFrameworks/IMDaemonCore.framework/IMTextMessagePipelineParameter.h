/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMFindChatProcessingParameter.h>
#import <IMDaemonCore/IMTextMessageProcessingParameter.h>
#import <IMDaemonCore/IMMessageLegacyProcessingParameter.h>
#import <IMDaemonCore/IMMessageFromStorageParameter.h>

@class NSString, NSNumber, NSAttributedString, NSArray, NSDictionary, IMDChat;

@interface IMTextMessagePipelineParameter : NSObject <IMFindChatProcessingParameter, IMTextMessageProcessingParameter, IMMessageLegacyProcessingParameter, IMMessageFromStorageParameter> {

	BOOL _wantsDeliveryReceipt;
	BOOL _wantsCheckpointing;
	BOOL _isFromStorage;
	BOOL _isLastFromStorage;
	BOOL _isFromMe;
	BOOL _expirable;
	NSString* _GUID;
	NSNumber* _timestamp;
	NSString* _fromIdentifier;
	NSString* _toIdentifier;
	NSString* _plainTextBody;
	NSString* _plainTextSubject;
	NSAttributedString* _richBody;
	NSArray* _fileTransferGUIDs;
	NSArray* _participantIdentifiers;
	NSString* _fromDisplayID;
	NSString* _replyToGUID;
	NSString* _threadIdentifierGUID;
	NSString* _expressiveSendStyleIdentifier;
	NSDictionary* _messageSummaryInfo;
	NSString* _encryptionType;
	NSDictionary* _inlineAttachmentsDictionary;
	NSArray* _attributionInfoArray;
	NSDictionary* _nicknameDictionary;
	NSString* _groupID;
	NSString* _currentGroupName;
	NSNumber* _groupParticipantVersion;
	NSNumber* _groupProtocolVersion;
	NSNumber* _groupPhotoCreationTime;
	NSArray* _messageItems;
	IMDChat* _chat;

}

@property (getter=UID,nonatomic,copy) NSString * GUID;                                //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL wantsDeliveryReceipt;                               //@synthesize wantsDeliveryReceipt=_wantsDeliveryReceipt - In the implementation block
@property (assign,nonatomic) BOOL wantsCheckpointing;                                 //@synthesize wantsCheckpointing=_wantsCheckpointing - In the implementation block
@property (assign,nonatomic) BOOL isFromStorage;                                      //@synthesize isFromStorage=_isFromStorage - In the implementation block
@property (assign,nonatomic) BOOL isLastFromStorage;                                  //@synthesize isLastFromStorage=_isLastFromStorage - In the implementation block
@property (nonatomic,copy) NSString * fromIdentifier;                                 //@synthesize fromIdentifier=_fromIdentifier - In the implementation block
@property (nonatomic,copy) NSString * toIdentifier;                                   //@synthesize toIdentifier=_toIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isFromMe;                                           //@synthesize isFromMe=_isFromMe - In the implementation block
@property (nonatomic,copy) NSString * plainTextBody;                                  //@synthesize plainTextBody=_plainTextBody - In the implementation block
@property (nonatomic,copy) NSString * plainTextSubject;                               //@synthesize plainTextSubject=_plainTextSubject - In the implementation block
@property (nonatomic,copy) NSAttributedString * richBody;                             //@synthesize richBody=_richBody - In the implementation block
@property (nonatomic,retain) NSArray * fileTransferGUIDs;                             //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (nonatomic,retain) NSArray * participantIdentifiers;                        //@synthesize participantIdentifiers=_participantIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * fromDisplayID;                                //@synthesize fromDisplayID=_fromDisplayID - In the implementation block
@property (nonatomic,copy) NSString * replyToGUID;                                    //@synthesize replyToGUID=_replyToGUID - In the implementation block
@property (nonatomic,copy) NSString * threadIdentifierGUID;                           //@synthesize threadIdentifierGUID=_threadIdentifierGUID - In the implementation block
@property (nonatomic,copy) NSString * expressiveSendStyleIdentifier;                  //@synthesize expressiveSendStyleIdentifier=_expressiveSendStyleIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * messageSummaryInfo;                       //@synthesize messageSummaryInfo=_messageSummaryInfo - In the implementation block
@property (nonatomic,copy) NSString * encryptionType;                                 //@synthesize encryptionType=_encryptionType - In the implementation block
@property (nonatomic,retain) NSDictionary * inlineAttachmentsDictionary;              //@synthesize inlineAttachmentsDictionary=_inlineAttachmentsDictionary - In the implementation block
@property (nonatomic,retain) NSArray * attributionInfoArray;                          //@synthesize attributionInfoArray=_attributionInfoArray - In the implementation block
@property (nonatomic,retain) NSDictionary * nicknameDictionary;                       //@synthesize nicknameDictionary=_nicknameDictionary - In the implementation block
@property (assign,getter=isExpirable,nonatomic) BOOL expirable;                       //@synthesize expirable=_expirable - In the implementation block
@property (nonatomic,copy) NSString * groupID;                                        //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy) NSString * currentGroupName;                               //@synthesize currentGroupName=_currentGroupName - In the implementation block
@property (nonatomic,retain) NSNumber * groupParticipantVersion;                      //@synthesize groupParticipantVersion=_groupParticipantVersion - In the implementation block
@property (nonatomic,retain) NSNumber * groupProtocolVersion;                         //@synthesize groupProtocolVersion=_groupProtocolVersion - In the implementation block
@property (nonatomic,retain) NSNumber * groupPhotoCreationTime;                       //@synthesize groupPhotoCreationTime=_groupPhotoCreationTime - In the implementation block
@property (nonatomic,retain) NSArray * messageItems;                                  //@synthesize messageItems=_messageItems - In the implementation block
@property (nonatomic,retain) IMDChat * chat;                                          //@synthesize chat=_chat - In the implementation block
+(id)convertAttributionInfoToArray:(id)arg1 ;
+(id)richBodyWithBlastDoorMessage:(id)arg1 ;
+(id)plainTextBodyWithBlastDoorMessage:(id)arg1 ;
+(id)plainTextSubjectWithBlastDoorMessage:(id)arg1 ;
+(id)attributionInfoArrayWithBlastDoorMessage:(id)arg1 ;
+(id)encryptionTypeWithMessage:(id)arg1 ;
+(id)participantDestinationIdentifierWithMessage:(id)arg1 ;
+(id)messageSummaryInfoDictionaryWithBlastDoorMessage:(id)arg1 ;
+(id)nicknameDictionaryWithBlastDoorMessage:(id)arg1 ;
-(void)setGroupID:(NSString *)arg1 ;
-(IMDChat *)chat;
-(NSString *)groupID;
-(NSString *)encryptionType;
-(void)setEncryptionType:(NSString *)arg1 ;
-(void)setReplyToGUID:(NSString *)arg1 ;
-(NSNumber *)timestamp;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(NSString *)replyToGUID;
-(void)setIsFromMe:(BOOL)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(void)setFileTransferGUIDs:(NSArray *)arg1 ;
-(NSDictionary *)messageSummaryInfo;
-(void)setMessageSummaryInfo:(NSDictionary *)arg1 ;
-(NSArray *)fileTransferGUIDs;
-(void)setChat:(IMDChat *)arg1 ;
-(BOOL)isFromMe;
-(NSString *)fromIdentifier;
-(void)setFromIdentifier:(NSString *)arg1 ;
-(NSString *)GUID;
-(BOOL)isExpirable;
-(id)description;
-(BOOL)wantsDeliveryReceipt;
-(BOOL)wantsCheckpointing;
-(NSString *)plainTextBody;
-(NSString *)plainTextSubject;
-(NSString *)threadIdentifierGUID;
-(NSString *)expressiveSendStyleIdentifier;
-(NSString *)currentGroupName;
-(NSNumber *)groupParticipantVersion;
-(NSNumber *)groupProtocolVersion;
-(NSNumber *)groupPhotoCreationTime;
-(BOOL)isFromStorage;
-(BOOL)isLastFromStorage;
-(void)setIsFromStorage:(BOOL)arg1 ;
-(void)setIsLastFromStorage:(BOOL)arg1 ;
-(NSArray *)messageItems;
-(void)setMessageItems:(NSArray *)arg1 ;
-(NSString *)fromDisplayID;
-(NSAttributedString *)richBody;
-(id)initWithBD:(id)arg1 idsTrustedData:(id)arg2 ;
-(id)convertAttachmentsWithString:(id)arg1 ;
-(void)setRichBody:(NSAttributedString *)arg1 ;
-(id)fileTransferForBlastDoorFileTransferAttribute:(id)arg1 fileTransferGUIDs:(id)arg2 ;
-(NSString *)toIdentifier;
-(NSArray *)participantIdentifiers;
-(void)setToIdentifier:(NSString *)arg1 ;
-(id)_createSuperFormattedStringWithAttributedString:(id)arg1 ;
-(void)setAttributionInfoArray:(NSArray *)arg1 ;
-(void)setPlainTextBody:(NSString *)arg1 ;
-(void)setPlainTextSubject:(NSString *)arg1 ;
-(void)setInlineAttachmentsDictionary:(NSDictionary *)arg1 ;
-(void)setWantsDeliveryReceipt:(BOOL)arg1 ;
-(void)setWantsCheckpointing:(BOOL)arg1 ;
-(void)setParticipantIdentifiers:(NSArray *)arg1 ;
-(void)setNicknameDictionary:(NSDictionary *)arg1 ;
-(void)setThreadIdentifierGUID:(NSString *)arg1 ;
-(void)setExpressiveSendStyleIdentifier:(NSString *)arg1 ;
-(void)setCurrentGroupName:(NSString *)arg1 ;
-(void)setGroupParticipantVersion:(NSNumber *)arg1 ;
-(void)setGroupProtocolVersion:(NSNumber *)arg1 ;
-(void)setGroupPhotoCreationTime:(NSNumber *)arg1 ;
-(void)setFromDisplayID:(NSString *)arg1 ;
-(NSDictionary *)inlineAttachmentsDictionary;
-(NSArray *)attributionInfoArray;
-(NSDictionary *)nicknameDictionary;
-(void)setExpirable:(BOOL)arg1 ;
@end

