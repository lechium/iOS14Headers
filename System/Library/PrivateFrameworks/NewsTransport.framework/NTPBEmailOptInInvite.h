/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBEmailOptInInvite : PBCodable <NSCopying> {

	NSString* _articleId;
	int _emailOptInInviteLocation;
	int _newsletterSubscriptionType;
	NSString* _parentFeedId;
	int _parentFeedType;
	int _userAction;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                  //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasEmailOptInInviteLocation; 
@property (assign,nonatomic) int emailOptInInviteLocation;                    //@synthesize emailOptInInviteLocation=_emailOptInInviteLocation - In the implementation block
@property (assign,nonatomic) BOOL hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                              //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (nonatomic,readonly) BOOL hasParentFeedId; 
@property (nonatomic,retain) NSString * parentFeedId;                         //@synthesize parentFeedId=_parentFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                            //@synthesize articleId=_articleId - In the implementation block
@property (assign,nonatomic) BOOL hasNewsletterSubscriptionType; 
@property (assign,nonatomic) int newsletterSubscriptionType;                  //@synthesize newsletterSubscriptionType=_newsletterSubscriptionType - In the implementation block
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(BOOL)hasParentFeedId;
-(void)setParentFeedId:(NSString *)arg1 ;
-(void)setParentFeedType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(int)newsletterSubscriptionType;
-(void)setUserAction:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasParentFeedType;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasArticleId;
-(int)emailOptInInviteLocation;
-(void)setEmailOptInInviteLocation:(int)arg1 ;
-(void)setHasEmailOptInInviteLocation:(BOOL)arg1 ;
-(BOOL)hasEmailOptInInviteLocation;
-(void)setNewsletterSubscriptionType:(int)arg1 ;
-(void)setHasNewsletterSubscriptionType:(BOOL)arg1 ;
-(BOOL)hasNewsletterSubscriptionType;
-(int)parentFeedType;
-(unsigned long long)hash;
-(int)userAction;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(id)description;
-(NSString *)articleId;
-(id)dictionaryRepresentation;
-(NSString *)parentFeedId;
@end

