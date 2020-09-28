/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@interface PKPaymentProvisioningNonceRequest : PKPaymentWebServiceRequest {

	unsigned long long _nonceType;

}

@property (assign,nonatomic) unsigned long long nonceType;              //@synthesize nonceType=_nonceType - In the implementation block
-(unsigned long long)nonceType;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithNonceType:(unsigned long long)arg1 ;
-(void)setNonceType:(unsigned long long)arg1 ;
@end
