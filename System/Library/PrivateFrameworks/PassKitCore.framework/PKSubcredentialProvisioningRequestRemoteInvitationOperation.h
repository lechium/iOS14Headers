/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKSubcredentialProvisioningOperation.h>

@protocol PKPaymentWebServiceTargetDeviceProtocol;
@class PKPaymentWebService, PKAppletSubcredentialSharingInvitation;

@interface PKSubcredentialProvisioningRequestRemoteInvitationOperation : PKSubcredentialProvisioningOperation {

	PKPaymentWebService* _remoteDeviceWebService;
	id<PKPaymentWebServiceTargetDeviceProtocol> _remoteTargetDevice;
	PKAppletSubcredentialSharingInvitation* _invitation;

}
+(BOOL)canRequestInvitation:(id)arg1 ;
-(void)performOperation;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
@end
