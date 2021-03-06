/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailCore/ECSASLAuthenticator.h>

@class NSData;

@interface _MFDigestMD5Authenticator : ECSASLAuthenticator {

	unsigned _maxbuf : 16;
	unsigned _securityLevel : 2;
	NSData* _expectedResponse;
	void* _cryptInfo;

}
-(void)dealloc;
-(long long)securityLevel;
-(id)responseForServerData:(id)arg1 ;
-(void)setMaxBuffer:(unsigned)arg1 ;
-(void)setAuthenticationState:(long long)arg1 ;
-(void)setSecurityLevel:(long long)arg1 ;
-(void)setCryptInfo:(void*)arg1 ;
-(void)setExpectedResponse:(id)arg1 ;
@end

