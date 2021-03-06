/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class ACAccount, NSString;

@interface FAFamilySetupBuddyMLRequest : AAFamilyRequest {

	ACAccount* _iTunesAccount;
	NSString* _inviteCode;

}

@property (setter=setiTunesAccount:,nonatomic,retain) ACAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (nonatomic,copy) NSString * inviteCode;                                             //@synthesize inviteCode=_inviteCode - In the implementation block
-(id)urlString;
-(id)urlRequest;
-(BOOL)isUserInitiated;
-(void)setiTunesAccount:(id)arg1 ;
-(ACAccount *)iTunesAccount;
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
@end

