/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, HMDAccessoryNetworkCredential;

@interface HMDHomeReprovisioningPendingInformation : NSObject {

	NSUUID* _messageIdentifier;
	HMDAccessoryNetworkCredential* _networkCredential;

}

@property (readonly) NSUUID * messageIdentifier;                                     //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (readonly) HMDAccessoryNetworkCredential * networkCredential;              //@synthesize networkCredential=_networkCredential - In the implementation block
-(NSUUID *)messageIdentifier;
-(HMDAccessoryNetworkCredential *)networkCredential;
-(id)initWithMessageUUID:(id)arg1 networkCredential:(id)arg2 ;
@end

