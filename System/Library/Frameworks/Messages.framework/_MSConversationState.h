/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray, MSMessage, NSString, NSData;

@interface _MSConversationState : NSObject <NSSecureCoding> {

	NSUUID* _conversationIdentifier;
	NSUUID* _senderIdentifier;
	NSArray* _recipientIdentifiers;
	MSMessage* _activeMessage;
	NSString* _conversationID;
	NSData* _conversationEngramID;
	NSString* _iMessageLoginID;
	NSString* _senderAddress;
	NSArray* _recipientAddresses;
	NSArray* _draftAssetArchives;

}

@property (nonatomic,retain) NSUUID * conversationIdentifier;                                    //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * senderIdentifier;                                          //@synthesize senderIdentifier=_senderIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * recipientIdentifiers;                                     //@synthesize recipientIdentifiers=_recipientIdentifiers - In the implementation block
@property (nonatomic,retain) MSMessage * activeMessage;                                          //@synthesize activeMessage=_activeMessage - In the implementation block
@property (nonatomic,retain) NSString * conversationID;                                          //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,retain) NSData * conversationEngramID;                                      //@synthesize conversationEngramID=_conversationEngramID - In the implementation block
@property (setter=setiMessageLoginID:,nonatomic,retain) NSString * iMessageLoginID;              //@synthesize iMessageLoginID=_iMessageLoginID - In the implementation block
@property (nonatomic,retain) NSString * senderAddress;                                           //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,retain) NSArray * recipientAddresses;                                       //@synthesize recipientAddresses=_recipientAddresses - In the implementation block
@property (nonatomic,copy) NSArray * draftAssetArchives;                                         //@synthesize draftAssetArchives=_draftAssetArchives - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRecipientAddresses:(NSArray *)arg1 ;
-(void)setConversationIdentifier:(NSUUID *)arg1 ;
-(void)setConversationID:(NSString *)arg1 ;
-(NSData *)conversationEngramID;
-(void)setConversationEngramID:(NSData *)arg1 ;
-(NSString *)conversationID;
-(void)setSenderIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)conversationIdentifier;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)senderIdentifier;
-(NSArray *)recipientAddresses;
-(NSArray *)recipientIdentifiers;
-(id)description;
-(void)setSenderAddress:(NSString *)arg1 ;
-(NSString *)senderAddress;
-(void)setRecipientIdentifiers:(NSArray *)arg1 ;
-(MSMessage *)activeMessage;
-(void)setActiveMessage:(MSMessage *)arg1 ;
-(NSString *)iMessageLoginID;
-(void)setiMessageLoginID:(id)arg1 ;
-(NSArray *)draftAssetArchives;
-(void)setDraftAssetArchives:(NSArray *)arg1 ;
@end
