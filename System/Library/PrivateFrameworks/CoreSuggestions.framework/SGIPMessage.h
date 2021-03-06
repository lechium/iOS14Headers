/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SGIPPerson, NSArray, NSDate;

@interface SGIPMessage : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isSent;
	BOOL _isGroupConversation;
	BOOL _isSenderSignificant;
	NSString* _messageId;
	SGIPPerson* _sender;
	NSArray* _recipients;
	NSString* _subject;
	NSDate* _dateSent;
	NSArray* _messageUnits;

}

@property (nonatomic,retain) NSString * messageId;                  //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,retain) SGIPPerson * sender;                   //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                  //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSString * subject;                    //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSDate * dateSent;                     //@synthesize dateSent=_dateSent - In the implementation block
@property (assign,nonatomic) BOOL isSent;                           //@synthesize isSent=_isSent - In the implementation block
@property (assign,nonatomic) BOOL isGroupConversation;              //@synthesize isGroupConversation=_isGroupConversation - In the implementation block
@property (assign,nonatomic) BOOL isSenderSignificant;              //@synthesize isSenderSignificant=_isSenderSignificant - In the implementation block
@property (nonatomic,retain) NSArray * messageUnits;                //@synthesize messageUnits=_messageUnits - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)messageWithIPMessage:(id)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(SGIPPerson *)sender;
-(void)setMessageId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)dateSent;
-(BOOL)isEqualToMessage:(id)arg1 ;
-(void)setSender:(SGIPPerson *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setDateSent:(NSDate *)arg1 ;
-(BOOL)isSent;
-(BOOL)isGroupConversation;
-(NSString *)messageId;
-(id)toIPMessage;
-(void)setIsSent:(BOOL)arg1 ;
-(void)setIsGroupConversation:(BOOL)arg1 ;
-(BOOL)isSenderSignificant;
-(void)setIsSenderSignificant:(BOOL)arg1 ;
-(NSArray *)messageUnits;
-(void)setMessageUnits:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

