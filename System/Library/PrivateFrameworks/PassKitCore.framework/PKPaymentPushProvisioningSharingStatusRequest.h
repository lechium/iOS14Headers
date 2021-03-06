/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKEncryptedPushProvisioningTarget;

@interface PKPaymentPushProvisioningSharingStatusRequest : PKPaymentWebServiceRequest {

	NSString* _sharingIdentifier;
	PKEncryptedPushProvisioningTarget* _encryptedProvisioningTarget;

}

@property (nonatomic,copy) NSString * sharingIdentifier;                                                   //@synthesize sharingIdentifier=_sharingIdentifier - In the implementation block
@property (nonatomic,retain) PKEncryptedPushProvisioningTarget * encryptedProvisioningTarget;              //@synthesize encryptedProvisioningTarget=_encryptedProvisioningTarget - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(PKEncryptedPushProvisioningTarget *)encryptedProvisioningTarget;
-(id)requestBody;
-(NSString *)sharingIdentifier;
-(id)initWithProvisioningSharingIdentifier:(id)arg1 ;
-(id)initWithEncryptedProvisioningTarget:(id)arg1 ;
-(void)setSharingIdentifier:(NSString *)arg1 ;
-(void)setEncryptedProvisioningTarget:(PKEncryptedPushProvisioningTarget *)arg1 ;
@end

