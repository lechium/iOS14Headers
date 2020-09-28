/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAiCloudTermsAgreeRequest : AARequest {

	ACAccount* _account;
	BOOL _preferPassword;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL preferPassword;              //@synthesize preferPassword=_preferPassword - In the implementation block
+(Class)responseClass;
-(id)urlRequest;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(ACAccount *)account;
-(BOOL)preferPassword;
-(void)setPreferPassword:(BOOL)arg1 ;
@end
