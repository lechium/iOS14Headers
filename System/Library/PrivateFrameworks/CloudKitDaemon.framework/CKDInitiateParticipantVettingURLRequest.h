/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordID, NSData, NSString;

@interface CKDInitiateParticipantVettingURLRequest : CKDURLRequest {

	/*^block*/id _vettingInitiationRequestCompletionBlock;
	CKRecordID* _shareRecordID;
	NSData* _encryptedKey;
	NSString* _participantID;
	NSString* _baseToken;

}

@property (nonatomic,copy) CKRecordID * shareRecordID;                              //@synthesize shareRecordID=_shareRecordID - In the implementation block
@property (nonatomic,copy) NSData * encryptedKey;                                   //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,copy) NSString * participantID;                                //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,copy) NSString * baseToken;                                    //@synthesize baseToken=_baseToken - In the implementation block
@property (nonatomic,copy) id vettingInitiationRequestCompletionBlock;              //@synthesize vettingInitiationRequestCompletionBlock=_vettingInitiationRequestCompletionBlock - In the implementation block
-(CKRecordID *)shareRecordID;
-(void)setShareRecordID:(CKRecordID *)arg1 ;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(id)requestOperationClasses;
-(NSString *)participantID;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setParticipantID:(NSString *)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)generateRequestOperations;
-(NSString *)baseToken;
-(void)setBaseToken:(NSString *)arg1 ;
-(id)vettingInitiationRequestCompletionBlock;
-(id)initWithOperation:(id)arg1 shareRecordID:(id)arg2 encryptedKey:(id)arg3 participantID:(id)arg4 baseToken:(id)arg5 ;
-(void)setVettingInitiationRequestCompletionBlock:(id)arg1 ;
@end

