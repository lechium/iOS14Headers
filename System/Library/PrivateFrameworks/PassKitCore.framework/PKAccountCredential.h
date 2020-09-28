/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class PKAccount, PKPaymentPass, PKAccountWebServicePassDetailsResponse, NSString;

@interface PKAccountCredential : PKPaymentCredential {

	PKAccount* _account;
	PKPaymentPass* _paymentPass;
	PKAccountWebServicePassDetailsResponse* _passDetailsResponse;

}

@property (nonatomic,readonly) PKAccount * account;                                                     //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                                               //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) PKAccountWebServicePassDetailsResponse * passDetailsResponse;              //@synthesize passDetailsResponse=_passDetailsResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier; 
-(BOOL)_isEqualToCredential:(id)arg1 ;
-(NSString *)ownershipTokenIdentifier;
-(PKAccountWebServicePassDetailsResponse *)passDetailsResponse;
-(PKPaymentPass *)paymentPass;
-(PKAccount *)account;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setPassDetailsResponse:(PKAccountWebServicePassDetailsResponse *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)longDescription;
@end
