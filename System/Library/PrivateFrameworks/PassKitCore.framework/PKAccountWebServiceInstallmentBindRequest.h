/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSDecimalNumber, NSURL;

@interface PKAccountWebServiceInstallmentBindRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSString* _applicationIdentifier;
	NSDecimalNumber* _bindingAmount;
	NSString* _merchantIdentifier;
	NSURL* _baseURL;

}

@property (nonatomic,copy) NSString * accountIdentifier;                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;               //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * bindingAmount;              //@synthesize bindingAmount=_bindingAmount - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;                  //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                              //@synthesize baseURL=_baseURL - In the implementation block
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(NSDecimalNumber *)bindingAmount;
-(void)setBindingAmount:(NSDecimalNumber *)arg1 ;
-(NSString *)accountIdentifier;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
@end

