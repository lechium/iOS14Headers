/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFConnection, MFAuthScheme, MFAccount;

@interface MFSASLAuthenticator : NSObject {

	MFConnection* _connection;
	MFAuthScheme* _authScheme;
	MFAccount* _account;
	int _authenticationState;

}
-(void)dealloc;
-(id)account;
-(BOOL)justSentPlainTextPassword;
-(id)saslName;
-(void)setMissingPasswordError;
-(id)securityLayer;
-(id)responseForServerData:(id)arg1 ;
-(void)setAuthenticationState:(int)arg1 ;
-(int)authenticationState;
-(id)authScheme;
-(BOOL)supportsInitialClientResponse;
-(BOOL)isUsingSSL;
-(BOOL)couldRetry;
-(id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3 ;
-(BOOL)base64EncodeResponseData;
@end
