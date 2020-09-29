/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSString, CNContact;

@interface GKUnifiedRecipient : NSObject {

	NSString* _fullName;
	NSString* _handle;
	NSString* _nickName;
	NSString* _label;
	CNContact* _contact;

}

@property (nonatomic,retain) NSString * fullName;              //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * handle;                //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSString * nickName;              //@synthesize nickName=_nickName - In the implementation block
@property (nonatomic,retain) NSString * label;                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
+(id)recipientForHandle:(id)arg1 ;
+(id)recipientForContact:(id)arg1 ;
-(NSString *)handle;
-(id)displayName;
-(CNContact *)contact;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)nickName;
-(void)setNickName:(NSString *)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)fullName;
@end
