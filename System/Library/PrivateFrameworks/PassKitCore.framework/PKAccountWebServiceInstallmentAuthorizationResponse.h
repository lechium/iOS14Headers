/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSString;

@interface PKAccountWebServiceInstallmentAuthorizationResponse : PKAccountWebServiceResponse {

	NSString* _authorizationToken;

}

@property (nonatomic,copy,readonly) NSString * authorizationToken;              //@synthesize authorizationToken=_authorizationToken - In the implementation block
-(NSString *)authorizationToken;
-(id)initWithData:(id)arg1 ;
@end
